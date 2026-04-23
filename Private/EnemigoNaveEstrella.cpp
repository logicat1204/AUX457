// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoNaveEstrella.h"

AEnemigoNaveEstrella::AEnemigoEstrella()
{
	Malla->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Script/Engine.StaticMesh'/Game/LevelPrototyping/Meshes/SM_Cylinder.SM_Cylinder''")).Object);
}

void AEnemigoNaveEstrella::mov_circular()
{
	FVector Curr_loc = this->GetActorLocation();

}

void AEnemigoNaveEstrella::mov_curvilineo()
{
	FVector Curr_loc = this->GetActorLocation();

}




