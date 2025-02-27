// Fill out your copyright notice in the Description page of Project Settings.


#include "SlimeCharacterBase.h"
#include "Components/BoxComponent.h"

ASlimeCharacterBase::ASlimeCharacterBase()
{
	WorldBoxCollision = CreateDefaultSubobject<UBoxComponent>("WorldBoxCollision");
	SetRootComponent(WorldBoxCollision);
}
