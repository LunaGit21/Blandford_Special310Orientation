// Fill out your copyright notice in the Description page of Project Settings.


#include "SanctumAssetManager.h"
#include "AbilitySystemGlobals.h"

void USanctumAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();
	UAbilitySystemGlobals::Get().InitGlobalData();
}