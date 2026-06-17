// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OBarr_Obs.generated.h"

class USphereComponent;
class UStaticMeshComponent;
class UNiagaraComponent;

UCLASS()
class REPORT3CLASS_API AOBarr_Obs : public AActor
{
	GENERATED_BODY()
	
public:	
	AOBarr_Obs();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USphereComponent* CollisionComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UNiagaraComponent* NiagaraComp;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bullet|Movement")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bullet|Movement")
	float RotationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bullet|Life")
	float MaxDistance;
	
	UFUNCTION() // 오버랩에 대한 부분. 관통형 탄막.
	void OnOverlap( 
		UPrimitiveComponent* OverlappedComponent, 
		AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, 
		bool bFromSweep, 
		const FHitResult& SweepResult
		);

private:
	FVector StartLocation;
	

};
