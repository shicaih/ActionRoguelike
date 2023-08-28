// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SMagicProjectile.h"
#include "SMagicProjectile_Dash.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONROGUELIKE_API ASMagicProjectile_Dash : public ASMagicProjectile
{
	GENERATED_BODY()
protected:
	FTimerHandle TimerHandle;
	void DashInstigator();

	virtual void BeginPlay() override;
	
};
