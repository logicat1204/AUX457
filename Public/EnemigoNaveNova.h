// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Nave.h"
#include "EnemigoNaveNova.generated.h"

/**
 * 
 */
UCLASS()
class AUXSIS457PRACTICE_API AEnemigoNaveNova : public ANave
{
	GENERATED_BODY()
	AAEnemigoNaveNova();

public:
	void mov_aleatorio();
};
