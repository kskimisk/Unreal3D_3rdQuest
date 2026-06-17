// Fill out your copyright notice in the Description page of Project Settings.
 //도전과제 3-2. Spawn Actor.
	// 언리얼 페이지의 스폰 함수 템플릿 중, 4번째 항목, 트랜스폼 정보로 클래스 인스턴스 스폰 따라하기.
	// 과제 : 회전 발판 / 이동 플랫폼을 임의 좌표에 여러 개 배치.
			//그리고 회전/ 이동 속도, 이동 범위, 각도 등을 FMath::RandRange로 생성하여 매번 다른 퍼즐 코스를 구성.
		// 지정된 Location과 Rotation에 지정된 class 인스턴스를 스폰 시키는 함수 템플릿.
		// 1번은 T인스턴트 스폰, T포인터 반환 -> 위치 적는 칸이 없어서 액터 중심점 위치(발밑)에 스폰.
		// 2번은 지정한 위치에 + Cpp 고정 종류 소환 -> 1번 방식을 C++로. 대신 위치 방향을 입력 가능.
		// 3번은 발밑에 + 블루프린트 지정 소환 -> 발밑에, 블루프린트를 바꿔가면서 끼워서 소환 가능.
		// 4번은 지정 좌표에 FMath::RandRange의 계산을 넣어서 무작위 좌표, 무작위 각도를 스폰. 공식 문서의 모든 기능 사용.
		// 그래서 4번 방식 사용.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPActor.generated.h"

UCLASS()
class REPORT3CLASS_API ASPActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ASPActor();

protected:
	virtual void BeginPlay() override;

public:	
	// 1. 변수 개방 : 에디터 디테일 패널에서 "어떤 블루프린트 발판을 스폰할까".
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	TSubclassOf<AActor> PlatformClassToSpawn;

	// 2. 개수 지정 : 총 몇 개의 랜덤 발판.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	int32 NumberOfPlatforms; // 갯수 of 발판.
	
	
	// 탄막 랜덤.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning|OBarr")
	TSubclassOf<AActor> BarrClassToSpawn;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning|OBarr")
	int32 NumberOfBarr;

private:
	// 3. 실제 SpawnActor와 랜덤 연산을 처리할 핵심 함수
	void GenerateRandomActor(); // 발판은 게임 시작 시 1번만 설치.
	void SpawnBullets();        // 탄막은 계속 무한 반복 쏘기

	FTimerHandle BulletTimerHandle; // 탄막 무한 반복을 위한 타이머
};
