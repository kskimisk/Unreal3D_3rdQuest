// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "barr_Obs.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class UNiagaraComponent; //사전 선언. 순환참조 방지를 위해 여기선 이렇게.

UCLASS()
class REPORT3CLASS_API Abarr_Obs : public AActor
{
	GENERATED_BODY()
	
public:	
	Abarr_Obs();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	
	// 컴포넌트들.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USphereComponent* CollisionComp; //USphereComponent : 언리얼에 있는 것. 간단한 충돌 감지에 사용되는 구체(Sphere). SphereComponent.h에 있음.

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UNiagaraComponent* NiagaraComp; //나이아가라 추가용 - VFX 부착용.
	
	
	// 변수들.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Barr|Movement")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Barr|Movement")
	float RotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Barr|Life")
	float MaxDistance;

private:
	FVector StartLocation;

};
