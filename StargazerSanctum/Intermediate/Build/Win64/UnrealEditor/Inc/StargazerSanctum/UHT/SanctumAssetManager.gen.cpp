// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StargazerSanctum/SanctumAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSanctumAssetManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	STARGAZERSANCTUM_API UClass* Z_Construct_UClass_USanctumAssetManager();
	STARGAZERSANCTUM_API UClass* Z_Construct_UClass_USanctumAssetManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StargazerSanctum();
// End Cross Module References
	void USanctumAssetManager::StaticRegisterNativesUSanctumAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USanctumAssetManager);
	UClass* Z_Construct_UClass_USanctumAssetManager_NoRegister()
	{
		return USanctumAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_USanctumAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USanctumAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_StargazerSanctum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USanctumAssetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SanctumAssetManager.h" },
		{ "ModuleRelativePath", "SanctumAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USanctumAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USanctumAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USanctumAssetManager_Statics::ClassParams = {
		&USanctumAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USanctumAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USanctumAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USanctumAssetManager()
	{
		if (!Z_Registration_Info_UClass_USanctumAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USanctumAssetManager.OuterSingleton, Z_Construct_UClass_USanctumAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USanctumAssetManager.OuterSingleton;
	}
	template<> STARGAZERSANCTUM_API UClass* StaticClass<USanctumAssetManager>()
	{
		return USanctumAssetManager::StaticClass();
	}
	USanctumAssetManager::USanctumAssetManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USanctumAssetManager);
	USanctumAssetManager::~USanctumAssetManager() {}
	struct Z_CompiledInDeferFile_FID_StargazerSanctum_Source_StargazerSanctum_SanctumAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StargazerSanctum_Source_StargazerSanctum_SanctumAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USanctumAssetManager, USanctumAssetManager::StaticClass, TEXT("USanctumAssetManager"), &Z_Registration_Info_UClass_USanctumAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USanctumAssetManager), 115349183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_StargazerSanctum_Source_StargazerSanctum_SanctumAssetManager_h_2435470211(TEXT("/Script/StargazerSanctum"),
		Z_CompiledInDeferFile_FID_StargazerSanctum_Source_StargazerSanctum_SanctumAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_StargazerSanctum_Source_StargazerSanctum_SanctumAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
