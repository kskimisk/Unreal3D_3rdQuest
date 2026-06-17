// Fill out your copyright notice in the Description page of Project Settings.


#include "OBarr_Obs.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"
#include "Kismet/GameplayStatics.h" // 나중에 데미지 기능을 쓰기 위한 헤더.

// Sets default values
AOBarr_Obs::AOBarr_Obs()
{
	PrimaryActorTick.bCanEverTick = true;
	
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("OBarrCollisionComp"));
	CollisionComp->InitSphereRadius(30.0f);
	CollisionComp->SetCollisionProfileName(TEXT("OverlapAllDynamic")); // 관통형
	RootComponent = CollisionComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OBarrMesh"));
	MeshComp->SetupAttachment(RootComponent);	
	
	NiagaraComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("OBarrNiagaraComp"));
	NiagaraComp->SetupAttachment(RootComponent);	
	
	
	MoveSpeed = 500.0f;
	RotationSpeed = 180.0f;
	MaxDistance = 3000.0f;}

void AOBarr_Obs::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();

		//델리게이트 연결
	CollisionComp->OnComponentBeginOverlap.AddDynamic(this, &AOBarr_Obs::OnOverlap); //오버렙. 저 콜리전이 오버렙 시작하면. AddDynamic을 실행.
}

void AOBarr_Obs::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation() + (GetActorForwardVector() * MoveSpeed * DeltaTime);
	SetActorLocation(NewLocation);	
	
	FRotator DeltaRotation = FRotator(0.0f, RotationSpeed * DeltaTime, 0.0f);
	AddActorLocalRotation(DeltaRotation);	
	
	if (FVector::Dist(StartLocation, GetActorLocation()) > MaxDistance)
	{
		Destroy();
	}	
}

void AOBarr_Obs::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
		// 1. 부딪힌 대상(OtherActor)이 존재하고 && 그게 내가 아니라면. (스스로 부딪힘 방지)
	if (OtherActor && OtherActor != this)
	{
			// 2. 언리얼 공식 데미지 시스템 활성화(GameplayStatics.h와 연결됨.)
			// 부딪힌 대상에게 0만큼의 데미지를 가합니다. (누가 쐈는지, 어떤 무기인지는 nullptr 처리)
		UGameplayStatics::ApplyDamage(OtherActor, 0.0f, nullptr, this, UDamageType::StaticClass());

				// 3. 부딪힌 뒤, 이펙트와 함께 탄막이 삭제되도록.		
			Destroy();
				// Tick에서 멀어지면 사라지는 것과 별개로.
	}
}