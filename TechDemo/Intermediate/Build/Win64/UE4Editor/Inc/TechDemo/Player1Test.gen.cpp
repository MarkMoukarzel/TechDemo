// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Player1Test.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer1Test() {}
// Cross Module References
	TECHDEMO_API UClass* Z_Construct_UClass_APlayer1Test_NoRegister();
	TECHDEMO_API UClass* Z_Construct_UClass_APlayer1Test();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TechDemo();
// End Cross Module References
	void APlayer1Test::StaticRegisterNativesAPlayer1Test()
	{
	}
	UClass* Z_Construct_UClass_APlayer1Test_NoRegister()
	{
		return APlayer1Test::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayer1Test()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_TechDemo,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Player1Test.h" },
				{ "ModuleRelativePath", "Player1Test.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountdownTime_MetaData[] = {
				{ "Category", "Player1Test" },
				{ "ModuleRelativePath", "Player1Test.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CountdownTime = { UE4CodeGen_Private::EPropertyClass::Int, "CountdownTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APlayer1Test, CountdownTime), METADATA_PARAMS(NewProp_CountdownTime_MetaData, ARRAY_COUNT(NewProp_CountdownTime_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CountdownTime,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayer1Test>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayer1Test::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer1Test, 1690645177);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer1Test(Z_Construct_UClass_APlayer1Test, &APlayer1Test::StaticClass, TEXT("/Script/TechDemo"), TEXT("APlayer1Test"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer1Test);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
