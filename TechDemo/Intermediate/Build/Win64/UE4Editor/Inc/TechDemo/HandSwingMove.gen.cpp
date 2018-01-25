// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HandSwingMove.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHandSwingMove() {}
// Cross Module References
	TECHDEMO_API UClass* Z_Construct_UClass_AHandSwingMove_NoRegister();
	TECHDEMO_API UClass* Z_Construct_UClass_AHandSwingMove();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TechDemo();
// End Cross Module References
	void AHandSwingMove::StaticRegisterNativesAHandSwingMove()
	{
	}
	UClass* Z_Construct_UClass_AHandSwingMove_NoRegister()
	{
		return AHandSwingMove::StaticClass();
	}
	UClass* Z_Construct_UClass_AHandSwingMove()
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
				{ "IncludePath", "HandSwingMove.h" },
				{ "ModuleRelativePath", "HandSwingMove.h" },
				{ "ToolTip", "class UMotionControllerComponent;" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHandSwingMove>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHandSwingMove::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHandSwingMove, 357869427);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHandSwingMove(Z_Construct_UClass_AHandSwingMove, &AHandSwingMove::StaticClass, TEXT("/Script/TechDemo"), TEXT("AHandSwingMove"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHandSwingMove);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
