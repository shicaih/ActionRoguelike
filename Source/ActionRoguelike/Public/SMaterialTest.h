// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SMaterialTest.generated.h"
class UStaticMeshComponent;
class USAttributeComponent;

UCLASS()
class ACTIONROGUELIKE_API ASMaterialTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASMaterialTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere)
	USAttributeComponent* AttributeComp;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnHealthChanged(AActor* Instiagtor, USAttributeComponent* OwningComp,float NewHealth, float Delta);
};
