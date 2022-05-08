// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAnimInstance.h"
#include "../Characters/Main/MainCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UShooterAnimInstance::UpdateAnimationProperties(float deltaTime)
{
	if (_mainCharacter == nullptr) NativeInitializeAnimation();

	if (_mainCharacter)
	{
		FVector velocity{ _mainCharacter->GetVelocity() };
		velocity.Z = 0;

		_speed = velocity.Size();
		_isGrounded = _mainCharacter->GetCharacterMovement()->IsFalling() == false;
		_isMoving = _mainCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f;
	}
}

void UShooterAnimInstance::NativeInitializeAnimation()
{
	_mainCharacter = Cast<AMainCharacter>(TryGetPawnOwner());
}
