// Fill out your copyright notice in the Description page of Project Settings.

#include "Player1Test.h"


// Sets default values
APlayer1Test::APlayer1Test()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayer1Test::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer1Test::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayer1Test::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

