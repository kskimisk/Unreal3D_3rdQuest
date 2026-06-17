// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fall_Obs.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
class UNiagaraComponent; //플러그인도 나이아가라가 필요할까? 한번 나이아가라 설정한 다음 써보고, 삭제한 다음 해보고.

UCLASS()
class REPORT3CLASS_API AFall_Obs : public AActor
{
	GENERATED_BODY()
	
public:	
	AFall_Obs();

protected:
	virtual void BeginPlay() override;
	

public:	
	virtual void Tick(float DeltaTime) override;
	
	//UPROPERTY(VisibleAnywhere, Category = "Components")
	//USphereComponent* CollisionComp;
		//충돌 안 넣어도 되나? 플레이어가 밟다 = 충돌 이후 낙하 시작인데?
		// => 이미 MeshComp로 플레이어와 작용하는 물리(Block)이 포함. 접촉은 TriggerBox가 대체.

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComp;
	
		//는, 얘로. 트리거 => 플레이어가 밟을 시.
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UBoxComponent* TriggerBox; // 플레이어가 밟았는지 판정할 트리거. 근데 왜 UBox일까? BoxComponent에서 뭔가를 가져온걸까?
							// 엔진에서 미리 만들어둔 컴포넌트. 위에 class로 이미 했으면서 왜 궁금해했었지? 구체 : Sphere / 캡슐 : Capsule / 상자 : Box.

		//도전과제 : 1. 시간 기반 로직 구현. FTimerHandle은 private에.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat_Fall")
	float FallDelay; //Trigger 발동 후(밟은 후) Timer. 밟고 나서 떨어지기까지의 시간(초)
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat_Fall")
	float FallSpeed; //떨어지는 속도.
	
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UNiagaraComponent* NiagaraComp; //근데 여기에 어떻게 VFX를 부착하는 걸까. 코드를 더 쓰나?
			// -> 블루프린트에서 노출되어있음 => 자식 블루프린트 컴포넌트의 디테일 패널에서 에셋 장착하고 NiagaraComp->Activate(); 함수 호출.

	


	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat_Fall")
	//float RotationSpeed; 떨어지면서 뺑글 돌게 만드려면 어떻게 하지?

		// MaxDistance는 필요하지 않나? 다 떨어진 뒤, 혹은 바닥과 맞닿은 뒤 사라지게 설정할 수 있나?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Plat_Fall")
	float MaxDistance;
	
	UFUNCTION() //오버렙. 플레이어가 Step하면.
	void OnPlayerStep(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

private:
	FTimerHandle FallTimerHandle;
	FTimerHandle DestroyTimerHandle; // 완전히 지워줄 타이머 추가 핸들.
	bool bIsFalling;
	
	void StartFalling();
	void TriggerDestroy(); //타이머가 실행할 실제 파괴 함수.
};
