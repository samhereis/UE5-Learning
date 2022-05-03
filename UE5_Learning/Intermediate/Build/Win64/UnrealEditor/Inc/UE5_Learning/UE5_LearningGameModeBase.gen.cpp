// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Learning/UE5_LearningGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5_LearningGameModeBase() {}
// Cross Module References
	UE5_LEARNING_API UClass* Z_Construct_UClass_AUE5_LearningGameModeBase_NoRegister();
	UE5_LEARNING_API UClass* Z_Construct_UClass_AUE5_LearningGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE5_Learning();
// End Cross Module References
	void AUE5_LearningGameModeBase::StaticRegisterNativesAUE5_LearningGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5_LearningGameModeBase);
	UClass* Z_Construct_UClass_AUE5_LearningGameModeBase_NoRegister()
	{
		return AUE5_LearningGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE5_LearningGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5_LearningGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_Learning,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5_LearningGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5_LearningGameModeBase.h" },
		{ "ModuleRelativePath", "UE5_LearningGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5_LearningGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5_LearningGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5_LearningGameModeBase_Statics::ClassParams = {
		&AUE5_LearningGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUE5_LearningGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5_LearningGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5_LearningGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUE5_LearningGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5_LearningGameModeBase.OuterSingleton, Z_Construct_UClass_AUE5_LearningGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5_LearningGameModeBase.OuterSingleton;
	}
	template<> UE5_LEARNING_API UClass* StaticClass<AUE5_LearningGameModeBase>()
	{
		return AUE5_LearningGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5_LearningGameModeBase);
	struct Z_CompiledInDeferFile_FID_UE5_Learning_Source_UE5_Learning_UE5_LearningGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Learning_Source_UE5_Learning_UE5_LearningGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5_LearningGameModeBase, AUE5_LearningGameModeBase::StaticClass, TEXT("AUE5_LearningGameModeBase"), &Z_Registration_Info_UClass_AUE5_LearningGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5_LearningGameModeBase), 4231179417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Learning_Source_UE5_Learning_UE5_LearningGameModeBase_h_3157289664(TEXT("/Script/UE5_Learning"),
		Z_CompiledInDeferFile_FID_UE5_Learning_Source_UE5_Learning_UE5_LearningGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Learning_Source_UE5_Learning_UE5_LearningGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
