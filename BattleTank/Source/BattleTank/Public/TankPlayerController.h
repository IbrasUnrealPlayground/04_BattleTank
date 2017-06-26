// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;

	virtual void Tick ( float DeltaSeconds ) override;
	
private:

	void AimTowardsCrosshair(); //Start the tank moving the barrel so that a shot would it where the cross-hair intersects the world
	
	bool GetSightRayHitLocation( FVector& HitLocation ) const;

	UPROPERTY(EditAnywhere)
	float CrossHairXLocation = 0.5f;

	UPROPERTY(EditAnywhere)
	float CrossHairYLocation = 0.33333f;



};
