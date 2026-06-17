// Fill out your copyright notice in the Description page of Project Settings.


#include "Fall_Obs.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "TimerManager.h"
#include "GameFramework/Character.h" // 나중에 캐릭터 접촉할 때.
#include "NiagaraFunctionLibrary.h"

AFall_Obs::AFall_Obs()
{
	PrimaryActorTick.bCanEverTick = true;
	
		//콜리전 이벤트가 아니라, 타이머니까 콜리전 부분 삭제. 
	
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FallMeshComp"));
		// 근데 이 TEXT 내부의 것들은 그냥 변수명 아닌가? 임의로 지으면 안 되나? 이미 Engine에서 지정했나? 아니면 규칙? 그리고 TEXT라는 걸 빼고 되는 걸로 알고있는데, 빼도 되려나.
		// -> TEXT 빼도 됨. 문자열 마음대로 해도 됨. 단, 중복되면 안 되기에 자세하게, 안전성을 위해 TEXT() 매크로로 감싸주는 것이 권장.
	RootComponent = MeshComp;
	
		// 일단은 나이아가라 세팅한 다음, 다음에는 지운 채로 다시 테스트. 이게 없어도 플러그인은 내장형으로 돌아갈 것인가...!
	NiagaraComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComp"));
	NiagaraComp->SetupAttachment(RootComponent);
	
	NiagaraComp->bAutoActivate = false;
	

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("FallTriggerBox"));
	TriggerBox->SetupAttachment(RootComponent);

	//발판보다 살짝 위(20.0f)에 트리거 박스.
	TriggerBox->SetRelativeLocation(FVector(0.0f, 0.0f, 20.0f)); 
	TriggerBox->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	
	FallDelay = 1.5f;
	FallSpeed = 800.0f;
	bIsFalling = false; //움직이는 것과 별개니까 별개의 변수로.
}

void AFall_Obs::BeginPlay()
{
	Super::BeginPlay();
	
	//오버랩 델리게이트 바인딩 : 누군가가 밟으면 OnPlayerStep 실행.
	TriggerBox->OnComponentBeginOverlap.AddDynamic(this, &AFall_Obs::OnPlayerStep);}



void AFall_Obs::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsFalling) // IsFalling이 false, 즉, 떨어지는 게 아니라면 => true일 때 작동.
	{
		FVector NewLocation = GetActorLocation();
		NewLocation.Z -= FallSpeed * DeltaTime; //Z축 위치.
		SetActorLocation(NewLocation);
	}
	
}


void AFall_Obs::OnPlayerStep(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// 이미 떨어지는 중이거나 떨어지기까지의 타이머가 돌고 있다면 무시. 그리고 캐릭터가 밟았을 때만 작동
	if (!bIsFalling && !GetWorldTimerManager().IsTimerActive(FallTimerHandle) && OtherActor && OtherActor->IsA(ACharacter::StaticClass()))
	{
		// 도전 과제: 특정 시간(FallDelay) 후 StartFalling 함수 호출
		GetWorldTimerManager().SetTimer(FallTimerHandle, this, &AFall_Obs::StartFalling, FallDelay, false);
	}
}

//낙하 후에 파괴되어야 함.

void AFall_Obs::StartFalling()
{
	bIsFalling = true;
    
	// 추락하기 시작한 후 3초 뒤에 세상에서 발판 액터를 완전히 삭제(Destroy)하는 로직 추가
	GetWorldTimerManager().SetTimer(DestroyTimerHandle, this, &AFall_Obs::TriggerDestroy, 3.0f, false);
}





//나이아가라 파괴되는 이펙트.
void AFall_Obs::TriggerDestroy()
{
		// NiagaraComp에 등록해 둔 나이아가라 시스템 에셋 양식 가져옴.
	if (NiagaraComp && NiagaraComp->GetAsset())
	{
			// 삭제되기 직전, 오브젝트 위치에 독립적인 나이아가라 이펙트 스폰.
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			GetWorld(), 
			NiagaraComp->GetAsset(), 
			GetActorLocation(), 
			GetActorRotation()
		);
	}

	Destroy(); // 그리고 발판 삭제.
}

//나중에는 낙하 후 레벨의 바닥과 닿으면 파괴되는 이펙트 후 잔해가 남아있는 설정을 연습해봐야지.
