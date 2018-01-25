// Fill out your copyright notice in the Description page of Project Settings.

#include "HandSwingMove.h"
#include "Runtime/HeadMountedDisplay/Public/MotionControllerComponent.h"

// Sets default values
AHandSwingMove::AHandSwingMove()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>("ParamPointLight"); 
}

// Called when the game starts or when spawned
void AHandSwingMove::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("HandSwingWorking"));
}

// Called every frame
void AHandSwingMove::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AHandSwingMove::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

