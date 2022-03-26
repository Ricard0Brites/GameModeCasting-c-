// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameModeCastingGameMode.h"
#include "GameModeCastingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameModeCastingGameMode::AGameModeCastingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AGameModeCastingGameMode::DebugMessage()
{
	UE_LOG(LogTemp, Warning, TEXT("THIS IS A TEST FUNCTION, CASTING SUCCESSFUL"));
}
