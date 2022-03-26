// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameModeCasting/GameModeCastingGameMode.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "CastToGameMode.generated.h"

UCLASS()
class GAMEMODECASTING_API ACastToGameMode : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACastToGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	
	//this one is code only
	AGameModeCastingGameMode* rGameModeReference;

};
