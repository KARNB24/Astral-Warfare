// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AstralWarfareGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class ASTRALWARFARE_API AAstralWarfareGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled);

	
};
