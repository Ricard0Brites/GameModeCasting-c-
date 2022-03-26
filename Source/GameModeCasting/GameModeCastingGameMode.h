// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeCastingGameMode.generated.h"

UCLASS(minimalapi)
class AGameModeCastingGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGameModeCastingGameMode();

	UFUNCTION(BlueprintCallable)
		void DebugMessage();
};



