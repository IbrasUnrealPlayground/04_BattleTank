// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"


//Tick
	//Super

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Player Controller Begin Play"))

		auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not posessing tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player Controller posessing: %s"), *ControlledTank->GetName())
	}
}

void ATankPlayerController::Tick( float DeltaSeconds )
{
	Super::Tick( DeltaSeconds );
	//UE_LOG(LogTemp, Warning, TEXT("Player Controller Tick"))
	//AimTowardsCrosshair();
}


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());

}


void ATankPlayerController::AimTowardsCrosshair() 
{
	if (!GetControlledTank()) { return; }
	//Get world location of linetrace through crosshair
	//If it hits the landscape
		//tell controlled tank to aim at this point
}


