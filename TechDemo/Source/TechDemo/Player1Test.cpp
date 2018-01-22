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
	InputComponent->BindAxis("MoveForward", this, &APlayer1Test::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &APlayer1Test::SideStep);
	InputComponent->BindAction("LeftTrigger", EInputEvent::IE_Pressed, this, &APlayer1Test::Grab);


}

void APlayer1Test::MoveForward(float DeltaTime)
{

	if (DeltaTime != 0)
	{
		AddMovementInput(GetActorForwardVector(), DeltaTime);
		UE_LOG(LogTemp, Warning, TEXT("forward activated"));

	}
}

void APlayer1Test::SideStep(float DeltaTime)
{
	if (DeltaTime != 0)
		AddMovementInput(GetActorRightVector(), DeltaTime);
}

void APlayer1Test::Grab()
{
	UE_LOG(LogTemp, Warning, TEXT("Grabbed"));

}