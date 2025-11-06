// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/AuCharacterBase.h"


// Sets default values
AAuCharacterBase::AAuCharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket")); // attach weapon to a socket on a mesh
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void AAuCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


