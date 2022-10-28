// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CesiumProjectFinal/Private/FTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFTree() {}
// Cross Module References
	CESIUMPROJECTFINAL_API UScriptStruct* Z_Construct_UScriptStruct_FTree();
	UPackage* Z_Construct_UPackage__Script_CesiumProjectFinal();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Tree;
class UScriptStruct* FTree::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Tree.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Tree.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTree, Z_Construct_UPackage__Script_CesiumProjectFinal(), TEXT("Tree"));
	}
	return Z_Registration_Info_UScriptStruct_Tree.OuterSingleton;
}
template<> CESIUMPROJECTFINAL_API UScriptStruct* StaticStruct<FTree>()
{
	return FTree::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTree_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_positionZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_positionZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canopyRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_canopyRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTree_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/FTree.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTree_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTree>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionX_MetaData[] = {
		{ "Category", "Tree" },
		{ "Comment", "// Values are in standard Unreal Engine coordinates (centimeters)\n" },
		{ "ModuleRelativePath", "Private/FTree.h" },
		{ "ToolTip", "Values are in standard Unreal Engine coordinates (centimeters)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionX = { "positionX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTree, positionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionY_MetaData[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "Private/FTree.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionY = { "positionY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTree, positionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionZ_MetaData[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "Private/FTree.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionZ = { "positionZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTree, positionZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTree_Statics::NewProp_height_MetaData[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "Private/FTree.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTree_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTree, height), METADATA_PARAMS(Z_Construct_UScriptStruct_FTree_Statics::NewProp_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTree_Statics::NewProp_height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTree_Statics::NewProp_canopyRadius_MetaData[] = {
		{ "Category", "Tree" },
		{ "ModuleRelativePath", "Private/FTree.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTree_Statics::NewProp_canopyRadius = { "canopyRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTree, canopyRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FTree_Statics::NewProp_canopyRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTree_Statics::NewProp_canopyRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTree_Statics::NewProp_positionZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTree_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTree_Statics::NewProp_canopyRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTree_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CesiumProjectFinal,
		nullptr,
		&NewStructOps,
		"Tree",
		sizeof(FTree),
		alignof(FTree),
		Z_Construct_UScriptStruct_FTree_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTree_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTree_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTree_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTree()
	{
		if (!Z_Registration_Info_UScriptStruct_Tree.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Tree.InnerSingleton, Z_Construct_UScriptStruct_FTree_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Tree.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_Private_FTree_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_Private_FTree_h_Statics::ScriptStructInfo[] = {
		{ FTree::StaticStruct, Z_Construct_UScriptStruct_FTree_Statics::NewStructOps, TEXT("Tree"), &Z_Registration_Info_UScriptStruct_Tree, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTree), 1574045159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_Private_FTree_h_4182412305(TEXT("/Script/CesiumProjectFinal"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_Private_FTree_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CesiumProjectFinal_Source_CesiumProjectFinal_Private_FTree_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
