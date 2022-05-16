// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FirstPersonGameHUD.generated.h"

UCLASS()
class AFirstPersonGameHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFirstPersonGameHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

