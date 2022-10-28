// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CesiumProjectFinal/CesiumProjectFinalGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCesiumProjectFinalGameModeBase() {}
// Cross Module References
	CESIUMPROJECTFINAL_API UClass* Z_Construct_UClass_ACesiumProjectFinalGameModeBase_NoRegister();
	CESIUMPROJECTFINAL_API UClass* Z_Construct_UClass_ACesiumProjectFinalGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CesiumProjectFinal();
// End Cross Module References
	void ACesiumProjectFinalGameModeBase::StaticRegisterNativesACesiumProjectFinalGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACesiumProjectFinalGameModeBase);
	UClass* Z_Construct_UClass_ACesiumProjectFinalGameModeBase_NoRegister()
	{
		return ACesiumProjectFinalGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACesiumProjectFinalGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACesiumProjectFinalGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CesiumProjectFinal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACesiumProjectFinalGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CesiumProjectFinalGameModeBase.h" },
		{ "ModuleRelativePath", "CesiumProjectFinalGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACesiumProjectFinalGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACesiumProjectFinalGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACesiumProjectFinalGameModeBase_Statics::ClassParams = {
		&ACesiumProjectFinalGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACesiumProjectFinalGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACesiumProjectFinalGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACesiumProjectFinalGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACesiumProjectFinalGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACesiumProjectFinalGameModeBase.OuterSingleton, Z_Construct_UClass_ACesiumProjectFinalGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACesiumProjectFinalGameModeBase.OuterSingleton;
	}
	template<> CESIUMPROJECTFINAL_API UClass* StaticClass<ACesiumProjectFinalGameModeBase>()
	{
		return ACesiumProjectFinalGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACesiumProjectFinalGameModeBase);
	struct Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_CesiumProjectFinalGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_CesiumProjectFinalGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACesiumProjectFinalGameModeBase, ACesiumProjectFinalGameModeBase::StaticClass, TEXT("ACesiumProjectFinalGameModeBase"), &Z_Registration_Info_UClass_ACesiumProjectFinalGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACesiumProjectFinalGameModeBase), 2560655266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_CesiumProjectFinalGameModeBase_h_704986973(TEXT("/Script/CesiumProjectFinal"),
		Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_CesiumProjectFinalGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_CesiumProjectFinalGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
