// Fill out your copyright notice in the Description page of Project Settings.


#include "MainCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMainCharacter::AMainCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_cameraBoom = CreateAbstractDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	_cameraBoom->SetupAttachment(RootComponent);
	_cameraBoom->TargetArmLength = 150.0f;
	_cameraBoom->bUsePawnControlRotation = true;

	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	_camera->SetupAttachment(_cameraBoom, USpringArmComponent::SocketName);
	_camera->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);

	PlayerInputComponent->BindAxis("TurnSideways", this, &AMainCharacter::TurnSideways);
	PlayerInputComponent->BindAxis("TurnUpwards", this, &AMainCharacter::TurnUpwards);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
}

void AMainCharacter::MoveForward(float value)
{
	if (Controller != nullptr && value != 0)
	{
		AddMovementInput(GetMovementDirection(EAxis::X), value);
	}
}

void AMainCharacter::MoveRight(float value)
{
	if (Controller != nullptr && value != 0)
	{
		AddMovementInput(GetMovementDirection(EAxis::Y), value);
	}
}

FVector AMainCharacter::GetMovementDirection(EAxis::Type axis)
{
	const FRotator rotation{ Controller->GetControlRotation() };
	const FRotator yawRotation{ 0, rotation.Yaw, 0 };

	const FVector direction{ FRotationMatrix{yawRotation}.GetUnitAxis(axis) };

	return direction;
}

void AMainCharacter::TurnSideways(float value)
{
	AddControllerYawInput(value * _turnSidewaysSpeed * GetWorld()->GetDeltaSeconds());
}

void AMainCharacter::TurnUpwards(float value)
{
	value *= _invertedCameraRotation ? -1 : 1;

	AddControllerPitchInput(value * _turnUpwardSpeed * GetWorld()->GetDeltaSeconds());
}

