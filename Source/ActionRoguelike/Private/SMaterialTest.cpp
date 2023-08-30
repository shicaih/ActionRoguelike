// Fill out your copyright notice in the Description page of Project Settings.


#include "SMaterialTest.h"
#include "SAttributeComponent.h"

// Sets default values
ASMaterialTest::ASMaterialTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

	AttributeComp = CreateDefaultSubobject<USAttributeComponent>(TEXT("AttributeComp"));
	AttributeComp->OnHealthChanged.AddDynamic(this, &ASMaterialTest::OnHealthChanged);

}

// Called when the game starts or when spawned
void ASMaterialTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASMaterialTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASMaterialTest::OnHealthChanged(AActor* Instiagtor, USAttributeComponent* OwningComp, float NewHealth, float Delta)
{
	if (Delta < 0)
	{
		MeshComp->SetScalarParameterValueOnMaterials("HitTime", GetWorld()->TimeSeconds);
	}
	
}


