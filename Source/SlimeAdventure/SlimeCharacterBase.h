// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperZDCharacter.h"
#include "SlimeCharacterBase.generated.h"

/**
 * 
 */
UCLASS()
class SLIMEADVENTURE_API ASlimeCharacterBase : public APaperZDCharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Component")
		class UBoxComponent* WorldBoxCollision;

	ASlimeCharacterBase();
	
};
