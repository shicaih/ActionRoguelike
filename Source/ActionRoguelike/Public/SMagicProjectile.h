// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "SMagicProjectile.generated.h"

UCLASS()
class ACTIONROGUELIKE_API ASMagicProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASMagicProjectile();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USphereComponent* SphereComp;
	
	UPROPERTY(VisibleAnywhere)
	UProjectileMovementComponent* MovementComp;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* EffectComp;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostInitializeComponents() override;

public:
	UFUNCTION()
	void OnActorOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
