// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player1Test.generated.h"

//class UMotionControllerComponent;
class UBoxComponent;

UCLASS()
class TECHDEMO_API APlayer1Test : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer1Test();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//PlayerMovement
	void MoveForward(float DeltaTime);
	void SideStep(float DeltaTime);

	//PlayerInteraction
	void Grab();

	UFUNCTION(BlueprintCallable)
	FString Test(UBoxComponent* a);

	UPROPERTY(EditAnywhere, Category = "Spawn")
	TSubclassOf<USceneComponent> PawnClass;



	UPROPERTY(EditAnywhere)
	int test123;
};
