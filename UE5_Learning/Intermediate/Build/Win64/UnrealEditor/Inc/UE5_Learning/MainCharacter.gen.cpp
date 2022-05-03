// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5_Learning/Gameplay/Characters/Main/MainCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainCharacter() {}
// Cross Module References
	UE5_LEARNING_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
	UE5_LEARNING_API UClass* Z_Construct_UClass_AMainCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UE5_Learning();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AMainCharacter::StaticRegisterNativesAMainCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainCharacter);
	UClass* Z_Construct_UClass_AMainCharacter_NoRegister()
	{
		return AMainCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMainCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__cameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__cameraBoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5_Learning,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Gameplay/Characters/Main/MainCharacter.h" },
		{ "ModuleRelativePath", "Gameplay/Characters/Main/MainCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainCharacter_Statics::NewProp__cameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gameplay/Characters/Main/MainCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainCharacter_Statics::NewProp__cameraBoom = { "_cameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainCharacter, _cameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::NewProp__cameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::NewProp__cameraBoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainCharacter_Statics::NewProp__cameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainCharacter_Statics::ClassParams = {
		&AMainCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainCharacter()
	{
		if (!Z_Registration_Info_UClass_AMainCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainCharacter.OuterSingleton, Z_Construct_UClass_AMainCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainCharacter.OuterSingleton;
	}
	template<> UE5_LEARNING_API UClass* StaticClass<AMainCharacter>()
	{
		return AMainCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainCharacter);
	struct Z_CompiledInDeferFile_FID_UE5_Learning_Source_UE5_Learning_Gameplay_Characters_Main_MainCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Learning_Source_UE5_Learning_Gameplay_Characters_Main_MainCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainCharacter, AMainCharacter::StaticClass, TEXT("AMainCharacter"), &Z_Registration_Info_UClass_AMainCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainCharacter), 3806966198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Learning_Source_UE5_Learning_Gameplay_Characters_Main_MainCharacter_h_2363521349(TEXT("/Script/UE5_Learning"),
		Z_CompiledInDeferFile_FID_UE5_Learning_Source_UE5_Learning_Gameplay_Characters_Main_MainCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Learning_Source_UE5_Learning_Gameplay_Characters_Main_MainCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
