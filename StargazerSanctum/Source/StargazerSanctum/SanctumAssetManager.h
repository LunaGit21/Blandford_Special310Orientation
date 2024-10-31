// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "SanctumAssetManager.generated.h"

/**
 * 
 */
UCLASS()
class STARGAZERSANCTUM_API USanctumAssetManager : public UAssetManager
{
	GENERATED_BODY()
	


public:
	virtual void StartInitialLoading() override;
};
