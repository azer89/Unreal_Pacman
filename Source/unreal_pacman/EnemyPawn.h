// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "EnemyPawn.generated.h"

UENUM(BlueprintType)
enum class EEnemyState : uint8 {

	Default,
	Idle

};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyStateChangedEvent, EEnemyState, NewState);

UCLASS()
class UNREAL_PACMAN_API AEnemyPawn : public APawn
{
	GENERATED_BODY()

//public:
	// Sets default values for this pawn's properties
	//AEnemyPawn();

//protected:
	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;

//public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	// Sets default values for this pawn's properties

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		EEnemyState State = EEnemyState::Default;

	UFUNCTION(BlueprintCallable)
		void Hunt();

	UFUNCTION(BlueprintCallable)
		void Idle();

	FEnemyStateChangedEvent& OnStateChanged() { return StateChangedEvent; }

private:

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FEnemyStateChangedEvent StateChangedEvent;


};
