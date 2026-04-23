// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoNaveNova.h"

AEnemigoNaveNova::AAEnemigoNaveNova()
{
	Malla->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/LevelPrototyping/Meshes/SM_ChamferCube.SM_ChamferCube'")).Object);

}

void AEnemigoNaveNova::mov_aleatorio()
{
	FVector Curr_loc = this->GetActorLocation();
	float rand_mov = FMath::RandRange(1.0f,100.0f);
	SetActorLocation(FVector(Curr_loc.X + rand_mov, 0.0f, 0.0f));
}