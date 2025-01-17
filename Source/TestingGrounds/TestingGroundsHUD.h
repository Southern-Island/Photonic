// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "TestingGroundsHUD.generated.h"

UCLASS()
class ATestingGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATestingGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

};

