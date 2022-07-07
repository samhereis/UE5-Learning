// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "MainCharacter.generated.h"

UCLASS()
class UE5_LEARNING_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMainCharacter();

protected:
	virtual void BeginPlay() override;

	void MoveForward(float value);
	void MoveRight(float value);

	FVector GetMovementDirection(EAxis::Type axis);

	void TurnSideways(float value);
	void TurnUpwards(float value);

	void FireWeapon();

	void DisableCharacterRotationWithMouse();
	void ConfigureCharacterMovement();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true")) class USpringArmComponent* _cameraBoom;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true")) class UCameraComponent* _camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true")) float _turnSidewaysSpeed = 45.f;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true")) float _turnUpwardSpeed = 45.f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true")) bool _invertedCameraRotation = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true")) class USoundCue* _fireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true")) class UParticleSystem* _muzzleFlash;
public: 

   FORCEINLINE	USpringArmComponent* GetCameraBoom() const { return _cameraBoom; }
   FORCEINLINE	UCameraComponent* GetCamera() const { return _camera; }
};
