// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"

void AEnemyPawn::Hunt()
{

	State = EEnemyState::Default;

	StateChangedEvent.Broadcast(State);

}

void AEnemyPawn::Idle()
{

	State = EEnemyState::Idle;

	StateChangedEvent.Broadcast(State);

}

// Sets default values
/*AEnemyPawn::AEnemyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}*/

// Called when the game starts or when spawned
/*void AEnemyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}*/

// Called every frame
/*void AEnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}*/

// Called to bind functionality to input
/*void AEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}*/

