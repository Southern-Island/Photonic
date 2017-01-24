// Fill out your copyright notice in the Description page of Project Settings.

#include "TestingGrounds.h"
#include "FlyingPawn.h"


// Sets default values
AFlyingPawn::AFlyingPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	//SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("Spot Light"));
	//PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));
	CollisionLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Collision Light"));

	SetRootComponent(Mesh);
	//SpotLight->AttachToComponent(Mesh, FAttachmentTransformRules::KeepRelativeTransform);
	//PointLight->AttachToComponent(Mesh, FAttachmentTransformRules::KeepRelativeTransform);
	CollisionLight->AttachToComponent(Mesh, FAttachmentTransformRules::KeepRelativeTransform);
	CollisionLight->SetIntensity(0.0f);
	
}

// Called when the game starts or when spawned
void AFlyingPawn::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AFlyingPawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AFlyingPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

