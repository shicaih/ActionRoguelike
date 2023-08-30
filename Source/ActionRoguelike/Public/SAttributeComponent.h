// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SAttributeComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHealthChanged, AActor*, Instiagtor, USAttributeComponent*, OwningComp,float, NewHealth, float, Delta);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ACTIONROGUELIKE_API USAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USAttributeComponent();

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float Health;

public:
	UFUNCTION(BlueprintCallable)
	bool ApplyHealthChange(float Delta);
	
	UFUNCTION(BlueprintCallable)
	float GetHealth();

	UPROPERTY(BlueprintAssignable)
	FOnHealthChanged OnHealthChanged;
};
