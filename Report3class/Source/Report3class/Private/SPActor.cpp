// Fill out your copyright notice in the Description page of Project Settings.


#include "SPActor.h"
#include "Mov_Obs.h" // 중요: 생성된 발판의 주소를 캐스팅, 속성을 바꾸기 위해.
#include "OBarr_Obs.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"
#include "TimerManager.h"

ASPActor::ASPActor()
{
	PrimaryActorTick.bCanEverTick = false;// Tick 필요 없음. 스포너는 스스로 움직이지 않음.
	
	NumberOfPlatforms = 2; // 받침 5개 생성.
	NumberOfBarr = 3;
}

void ASPActor::BeginPlay()
{
	Super::BeginPlay();
	GenerateRandomActor(); // 시작 시 발판의 랜덤 액터 생성.
	
		// 탄막은 2.5초마다 10개씩 무한 반복(true)해서 생성.
	GetWorldTimerManager().SetTimer(BulletTimerHandle, this, &ASPActor::SpawnBullets, 2.5f, true);
	
}


void ASPActor::GenerateRandomActor()
{
	// 에디터에서 스폰할 발판 블루프린트 클래스를 지정하지 않았다면 에러 방지를 위해 리턴
	if (!PlatformClassToSpawn) return; // 만약 스폰 위한 발판 클래스가 !없다면. 리턴.
	
	// 첫 번째 발판이 깔릴 기준점을 이 스포너 액터의 현재 월드 위치로 설정
	FVector SpawnLocation = GetActorLocation(); //액터의 위치를 가짐 -> 스폰 위치가.

	for (int32 i = 0; i < NumberOfPlatforms; i++) // 자료형 변동에 의해 오류가 발생하기 않게 int 32로 고정. 갯수를 for문으로.
	{
		// 징검다리 형태로 앞으로 전진하게 만들기 위해 X축은 점진적으로 더하고, Z축과 Y축에만 FMath::RandRange(무작위 난수) 적용
		SpawnLocation.X += FMath::RandRange(200.0f, 650.0f); // 캐릭터가 점프로 넘어갈 수 있는 적당한 거리
		SpawnLocation.Y += FMath::RandRange(-500.0f, 500.0f); // 좌우 무작위 배치
		SpawnLocation.Z += FMath::RandRange(-100.0f, 100.0f);  // 위아래 고저차 난수
		
		// 태어날 액터의 회전값은 회전 안 된 정방향(Zero)으로 지정
		FRotator SpawnRotation = FRotator::ZeroRotator;

		// 공식 문서 규칙 가이드: 스폰 옵션 설정
		FActorSpawnParameters SpawnParams; //파라미터 설정.
		SpawnParams.Owner = this; // 이 액터를 스폰한 주인은 나(스포너)다
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn; // 다른 물체랑 겹쳐있어도 무조건 강제 스폰해라

		// [핵심] 공식 문서의 내용 스니펫. 월드에 실제로 액터를 동적 스폰하는 공식 문장.
		AActor* NewSpawnedActor = GetWorld()->SpawnActor<AActor>(PlatformClassToSpawn, SpawnLocation, SpawnRotation, SpawnParams);

		// 3. 도전 과제: 스폰된 액터에게 FMath::RandRange로 실시간 랜덤 속성 부여하기
		if (NewSpawnedActor)
		{
			// 방금 태어난 일반 액터 알맹이를 우리가 만든 AMov_Obs(움직이는 발판) 클래스로 캐스팅(형변환).
			AMov_Obs* MovPlatform = Cast<AMov_Obs>(NewSpawnedActor);
			if (MovPlatform)
			{
				// 디테일 패널에서 조절하던 주요 변수들을 난수 랜덤 변경.
				MovPlatform->MoveSpeed = FMath::RandRange(150.0f, 450.0f); // 매번 움직이는 속도가 다름
				MovPlatform->MaxRange = FMath::RandRange(400.0f, 800.0f);  // 매번 왕복하는 범위가 다름
                
				// 방향도 랜덤으로 : 정방향(1) 혹은 역방향(-1).
				MovPlatform->MoveDirection = FMath::RandRange(0, 1) == 0 ? 1 : -1;
			}
		}
	}
}


// 탄막

void ASPActor::SpawnBullets() // 탄막 스폰을 위한 함수.
{
	if (!BarrClassToSpawn) return;
	
	for (int32 j = 0; j < NumberOfBarr; j++)
	{
				// 탄막이 나갈 기본 시작점은 이 스포너 액터의 현재 좌표로 지정
		FVector BarrSpawnLoc = GetActorLocation();
			// 발판과 겹치지 않게 살짝 공중(위로 +100)으로 띄워줍니다.
		BarrSpawnLoc.Z += 100.0f; 

			//탄막 흩뿌리는 각도 Z축(Yaw) 기준 0도 ~ 360도 랜덤 생성
		FRotator BarrSpawnRot = FRotator(0.0f, FMath::RandRange(0.0f, 360.0f), 0.0f);

		FActorSpawnParameters BarrParams;
		BarrParams.Owner = this;
		BarrParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			// 4번 공식 문서 스니펫으로 월드에 실물 동적 생성.
		AActor* NewSpawnedBarr = GetWorld()->SpawnActor<AActor>(BarrClassToSpawn, BarrSpawnLoc, BarrSpawnRot, BarrParams);
		
		if (NewSpawnedBarr)
		{
				// 새로 생성된 관통 탄막을 캐스팅.
			AOBarr_Obs* OverlapBarr = Cast<AOBarr_Obs>(NewSpawnedBarr);
			if (OverlapBarr)
			{
					// 과제 요구사항: 난수를 주입해 날아가는 속도와 뺑글 도는 자전 속도를 매번 다르게 세팅
				OverlapBarr->MoveSpeed = FMath::RandRange(400.0f, 900.0f);     // 시속 400~900의 무작위 속도
				OverlapBarr->RotationSpeed = FMath::RandRange(90.0f, 360.0f);  // 매 프레임 도는 속도 무작위
				OverlapBarr->MaxDistance = 3000.0f;                            // 사거리 고정
			}
		}
	}
}

