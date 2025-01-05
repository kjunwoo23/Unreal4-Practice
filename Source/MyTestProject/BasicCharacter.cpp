// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicCharacter.h"

// Sets default values
ABasicCharacter::ABasicCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABasicCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasicCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABasicCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABasicCharacter::Attack_Melee()
{
	if (isDuringAttack) return;

	ComboAttack_Num = rand() % 3 + 1;
	FString PlaySection = "Attack0" + FString::FromInt(ComboAttack_Num);
	PlayAnimMontage(AttackCombo_AnimMt, 1.f, FName(*PlaySection));

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Attack!"));
	isDuringAttack = true;

	FTimerHandle TH_Attack_End;
	GetWorldTimerManager().SetTimer(TH_Attack_End, this, &ABasicCharacter::Attack_Melee_End, 1.0f, false);
}

void ABasicCharacter::Attack_Melee_End()
{
	isDuringAttack = false;
}

