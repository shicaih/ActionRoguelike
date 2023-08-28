// Fill out your copyright notice in the Description page of Project Settings.


#include "SMagicProjectile_Dash.h"

void ASMagicProjectile_Dash::BeginPlay()
{
	Super::BeginPlay();
	GetWorldTimerManager().SetTimer(TimerHandle, this, &ASMagicProjectile_Dash::DashInstigator, .8f);
	
}


void ASMagicProjectile_Dash::DashInstigator()
{
	GetInstigator()->SetActorLocation(RootComponent->GetComponentLocation());
	GetInstigator()->SetActorRotation(RootComponent->GetComponentRotation());
	Destroy();
}
