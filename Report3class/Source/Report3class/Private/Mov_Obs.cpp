// Fill out your copyright notice in the Description page of Project Settings.

#include "Mov_Obs.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h" // 타이머 쓰기 위해 필수 추가

AMov_Obs::AMov_Obs()
{
    PrimaryActorTick.bCanEverTick = true;
    
       // [1단계] SceneRoot를 생성하여 최상위 루트 컴포넌트로 박제
    SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("MovSceneRoot"));
    SetRootComponent(SceneRoot);
    
       // [2단계] StaticMeshComp를 생성하고 SceneRoot의 자식으로 계층 구조 조립
    StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MovStaticMeshComp"));
    StaticMeshComp->SetupAttachment(SceneRoot);
    
    // 메쉬를 Platform으로 변경해서 지형지물에 끼지 않게.    
    StaticMeshComp->SetCollisionProfileName(TEXT("Platform"));

    
        // 하드디스크에서 SM_Road_1 에셋을 찾아 생성 시점에 강제로 고정.
        // Fab을 경로를 사용.
    static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/External/TreatmentStation/Meshes/SM_Road_1.SM_Road_1"));
    
    if (MeshAsset.Succeeded())
    {
        // 맵에 배치하자마자 기본 메쉬를 고정.
        StaticMeshComp->SetStaticMesh(MeshAsset.Object);
    }
    
    // 기본값 설정 (에디터 디테일 패널에서 즉시 수정 가능)
    MoveSpeed = 200.0f;
    MaxRange = 500.0f;
    
    // 움직이는 방향 = 앞 방향(X축 정방향). 방향을 앞을 기본으로 한 움직임 벡터로 세팅
    MoveDirection = 1; //FVector::ForwardVector;을 1 대신 썼었는데 Spawn 쓰면서 자료형이 변하니. 
    
    
    // 화면에 4초 보이고, 2초 동안 사라지도록 기본값 설정
    VisibleTime = 4.0f;
    HiddenTime = 2.0f;
    bIsHidden = false;
}

void AMov_Obs::BeginPlay()
{
    Super::BeginPlay();
    
        // 월드에 처음 생성 직후 절대 좌표를 시작 위치로 저장
    StartLocation = GetActorLocation();
    
    // 게임 시작 시, 일정 시간 뒤에 숨겨지도록 타이머 구동
    GetWorldTimerManager().SetTimer(HideTimerHandle, this, &AMov_Obs::HidePlatform, VisibleTime, false);
}

void AMov_Obs::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    if (bIsHidden) return; // 숨겨져 있을 땐 이동 연산을 아예 하지 않음

       // 현재 위치를 가져와서 프레임 독립적인 이동 벡터 누적
    FVector CurrentLocation = GetActorLocation();
    
	  // spawn 만들면서 위치가 정수형으로 변함 -> Movedirec 앞에 Get~()을 사용.
    CurrentLocation += GetActorForwardVector()* MoveDirection * MoveSpeed * DeltaTime; 
    
    /*  |--이 부분 때문에 거리 계산이 오류나서 실행시 액터가 깜빡임. 빠른 속도로 이동.--|
       // 시작점으로부터 얼마나 움직였는지 실시간 거리 계산 (물리의 S 계산)
	  float SMoved = FVector::Dist(StartLocation, CurrentLocation); -> 이걸 사용하니까 자꾸 발판이 고장남.
    
      // 설정한 최대 범위를 벗어났다면 왕복 작동
    if (SMoved >= MaxRange)
    {
             // (if문 최대 범위 시, )방향을 바꿈.(1.0f -> -1.0f -> 1.0f)
        MoveDirection *= -1.0f;
        
            // 오차 보정 공식 (튕기거나 덜덜거림 방지 및 정확한 축 보정) : 안 하니까 바닥이 덜덜 떨고 그래픽카드가 덜덜 이륙하고...
        CurrentLocation = StartLocation + (GetActorForwardVector() * MoveDirection * MaxRange); 
                // 원랜 -1.0f를 곱해서 방향 맞췄는데, Spawn 쓰면서 Get~()의 자료형이 변하니, 그거 씀.
    }
       // 보정된 최종 위치를 액터에 적용(액터의 위치<-현재 위치)
    SetActorLocation(CurrentLocation); 
    */ 
    
    // 절대 거리가 아니라, 시작점에서 앞으로 갔는지 뒤로 갔는지 구분.
    FVector Offset = CurrentLocation - StartLocation;
    float DistanceFromStart = FVector::DotProduct(Offset, GetActorForwardVector());
    
    
            // 앞으로 한계치까지 갔다면 방향을 뒤(-1)로!
    if (DistanceFromStart >= MaxRange)
    {
        MoveDirection = -1;
    }
         // 뒤로 한계치까지 갔다면 방향을 앞(1)으로!
    else if (DistanceFromStart <= -MaxRange)
    {
        MoveDirection = 1;
    }
    
    SetActorLocation(CurrentLocation);
}

void AMov_Obs::HidePlatform()
{
    bIsHidden = true;
    SetActorHiddenInGame(true); // 시각적으로 숨김
    SetActorEnableCollision(false); // 충돌체를 꺼서 못 밟게 함

    GetWorldTimerManager().SetTimer(ShowTimerHandle, this, &AMov_Obs::ShowPlatform, HiddenTime, false);
}

void AMov_Obs::ShowPlatform()
{
    bIsHidden = false;
    SetActorLocation(StartLocation); // 원래 태어났던 자리로 깔끔하게 원상복구
    MoveDirection = 1; 

    SetActorHiddenInGame(false);
    SetActorEnableCollision(true);

    GetWorldTimerManager().SetTimer(HideTimerHandle, this, &AMov_Obs::HidePlatform, VisibleTime, false);
}

    
    