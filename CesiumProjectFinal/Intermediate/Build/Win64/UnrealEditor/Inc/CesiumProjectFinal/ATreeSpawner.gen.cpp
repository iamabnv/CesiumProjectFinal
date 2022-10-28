// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CesiumProjectFinal/Private/ATreeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeATreeSpawner() {}
// Cross Module References
	CESIUMPROJECTFINAL_API UClass* Z_Construct_UClass_AATreeSpawner_NoRegister();
	CESIUMPROJECTFINAL_API UClass* Z_Construct_UClass_AATreeSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CesiumProjectFinal();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	void AATreeSpawner::StaticRegisterNativesAATreeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AATreeSpawner);
	UClass* Z_Construct_UClass_AATreeSpawner_NoRegister()
	{
		return AATreeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AATreeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreeCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TreeCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trees_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Trees;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AATreeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CesiumProjectFinal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATreeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ATreeSpawner.h" },
		{ "ModuleRelativePath", "Private/ATreeSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATreeSpawner_Statics::NewProp_TreeCount_MetaData[] = {
		{ "Category", "ATreeSpawner" },
		{ "ModuleRelativePath", "Private/ATreeSpawner.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AATreeSpawner_Statics::NewProp_TreeCount = { "TreeCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AATreeSpawner, TreeCount), METADATA_PARAMS(Z_Construct_UClass_AATreeSpawner_Statics::NewProp_TreeCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AATreeSpawner_Statics::NewProp_TreeCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AATreeSpawner_Statics::NewProp_Trees_MetaData[] = {
		{ "Category", "ATreeSpawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ATreeSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AATreeSpawner_Statics::NewProp_Trees = { "Trees", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AATreeSpawner, Trees), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AATreeSpawner_Statics::NewProp_Trees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AATreeSpawner_Statics::NewProp_Trees_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AATreeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATreeSpawner_Statics::NewProp_TreeCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AATreeSpawner_Statics::NewProp_Trees,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AATreeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AATreeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AATreeSpawner_Statics::ClassParams = {
		&AATreeSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AATreeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AATreeSpawner_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AATreeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AATreeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AATreeSpawner()
	{
		if (!Z_Registration_Info_UClass_AATreeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AATreeSpawner.OuterSingleton, Z_Construct_UClass_AATreeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AATreeSpawner.OuterSingleton;
	}
	template<> CESIUMPROJECTFINAL_API UClass* StaticClass<AATreeSpawner>()
	{
		return AATreeSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AATreeSpawner);
	struct Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_Private_ATreeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_Private_ATreeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AATreeSpawner, AATreeSpawner::StaticClass, TEXT("AATreeSpawner"), &Z_Registration_Info_UClass_AATreeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AATreeSpawner), 3179085410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_Private_ATreeSpawner_h_2427269890(TEXT("/Script/CesiumProjectFinal"),
		Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_Private_ATreeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_Private_ATreeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
