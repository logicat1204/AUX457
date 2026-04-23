// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Nave.generated.h"

UCLASS()
class AUXSIS457PRACTICE_API ANave : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANave();
	UStaticMeshComponent* Malla;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	float xVelocidad;
	float yVelocidad;
	int ancho;
	int alto;
	int energia;

	bool destruirDespuesMuerte;
	bool invulnerable;
	bool fisico;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
