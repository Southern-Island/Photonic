// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "FlyingPawn.generated.h"

UCLASS()
class TESTINGGROUNDS_API AFlyingPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AFlyingPawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, category = "Setup")
	//USpotLightComponent *SpotLight = nullptr;

	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, category = "Setup")
	//UPointLightComponent *PointLight = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, category = "Setup")
	UPointLightComponent *CollisionLight = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, category = "Setup")
	UStaticMeshComponent *Mesh = nullptr;
	
};
