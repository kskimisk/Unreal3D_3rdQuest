// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mov_Obs.generated.h"

// 헤더에서는 include를 최소화하기 위해 전방 선언 사용
class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class REPORT3CLASS_API AMov_Obs : public AActor
{
	GENERATED_BODY()
    
public: 
	AMov_Obs();

protected:
	virtual void BeginPlay() override;

public: 
	virtual void Tick(float DeltaTime) override;
    
		// 이전에 강의를 들은 스타일대로 컴포넌트를 구성 => 루트부터 계층을 쌓는 방식. 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USceneComponent* SceneRoot;
	
		//스태틱 매시 컴포넌트.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* StaticMeshComp;
    
		// 필수과제 4. 속도 변경이 실시간 반응 되나 --> 에디터 패널에서 수정을 할 수 있어야하는 리플렉션 변수들
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat_Mov")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat_Mov")
	float MaxRange;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat_Mov")
	int32 MoveDirection;
	//FVector MoveDirection; // 이동 방향 -> 최대지점까지 간다면 다시 돌아올 수 있게 방향 지정. => Spawn하기 전에 썼던 거.
	
	// 사라지고 나타나는 시간을 조절하는 변수 추가!
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat_Hide")
	float VisibleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat_Hide")
	float HiddenTime;

	
private:
		// 내부 연산용 변수 (디테일 패널에는 안 보임)
	FVector StartLocation; // 시작지점.
	
	// 숨김 제어용 타이머와 함수
	FTimerHandle HideTimerHandle;
	FTimerHandle ShowTimerHandle;
	bool bIsHidden;

	void HidePlatform();
	void ShowPlatform();
};