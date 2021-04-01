// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PacmanController.generated.h"


// forward declaration
class APacmanPawn;

/**
 * Set this on Project Settings
 */
UCLASS()
class UNREAL_PACMAN_API APacmanController : public APlayerController
{
	GENERATED_BODY()

protected:

	void SetupInputComponent() override;

	APacmanPawn* GetPacmanPawn() const;

public:

	void MoveUp();
	void MoveDown();
	void MoveLeft();
	void MoveRight();

	
};
