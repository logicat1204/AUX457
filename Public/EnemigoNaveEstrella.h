// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "EnemigoNaveEstrella.generated.h"

/**
 * 
 */
UCLASS()
class AUXSIS457PRACTICE_API AEnemigoNaveEstrella : public ANave
{
	GENERATED_BODY()
	AEnemigoEstrella();
public:
	void mov_circular();
	void mov_curvilineo();
};
