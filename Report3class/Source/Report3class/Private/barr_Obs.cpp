// Fill out your copyright notice in the Description page of Project Settings.


#include "barr_Obs.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"

Abarr_Obs::Abarr_Obs()
{
	PrimaryActorTick.bCanEverTick = true;

	//콜리전 설정 : Block 위해서.
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("BarrCollisionComp"));
	CollisionComp->InitSphereRadius(30.0f);
	CollisionComp->SetCollisionProfileName(TEXT("BlockAll")); // 관통하지 않는 Block.
	RootComponent = CollisionComp;
	
	//Mesh 설정.
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);	// 생긴 거 나타내려면 Root 필요.
	
	// 나이아가라 이펙트 컴포넌트 추가
	NiagaraComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComp")); //
	NiagaraComp->SetupAttachment(RootComponent);	
	
	
	//기본 수치.
	MoveSpeed = 500.0f;
	RotationSpeed = 180.0f;
	MaxDistance = 3000.0f;
}

void Abarr_Obs::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation(); // 필수: 시작 위치 저장
	
}

void Abarr_Obs::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// 필수과제 3-2. Tick을 이용한 직진 이동 (프레임 독립성 보장)
    FVector NewLocation = GetActorLocation() + (GetActorForwardVector() * MoveSpeed * DeltaTime); // 앞으로 향하는 벡터를 기준으로 음양. 전후진 설정.
		// NewLocation의 새 장소는 액터의 장소에서 이동한 거리(방향 x 속도 x 시간)를 더함.(만약 방향이 -일 시 돌아오는 것.)
    SetActorLocation(NewLocation);
    
        // 필수과제 3-1. Tick을 이용한 회전
    FRotator DeltaRotation = FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f); //아니Yaw, 좌우로만. 회전시간 x 시간.
    AddActorLocalRotation(DeltaRotation);
    
        // 도전과제 1-2. 이동 범위를 벗어나면 스스로 파괴 (메모리 관리) 아님. 타이머가 아님.
    if (FVector::Dist(StartLocation, GetActorLocation()) > MaxDistance) // Dist 사용으로 실제 이동거리가 아니라, 현재 거리로부터의 벡터 거리. 그 거리가 설정한 최대 거리를 벗어나면.
    {
        Destroy();			// 파괴.
    }

}

