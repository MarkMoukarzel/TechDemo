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
	TECHDEMO_API UFunction* Z_Construct_UFunction_APlayer1Test_Test();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void APlayer1Test::StaticRegisterNativesAPlayer1Test()
	{
		UClass* Class = APlayer1Test::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Test", (Native)&APlayer1Test::execTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APlayer1Test_Test()
	{
		struct Player1Test_eventTest_Parms
		{
			UBoxComponent* a;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Player1Test_eventTest_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_a_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_a = { UE4CodeGen_Private::EPropertyClass::Object, "a", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Player1Test_eventTest_Parms, a), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_a_MetaData, ARRAY_COUNT(NewProp_a_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_a,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Player1Test.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1Test, "Test", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Player1Test_eventTest_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APlayer1Test_Test, "Test" }, // 2149133757
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Player1Test.h" },
				{ "ModuleRelativePath", "Player1Test.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_test123_MetaData[] = {
				{ "Category", "Player1Test" },
				{ "ModuleRelativePath", "Player1Test.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_test123 = { UE4CodeGen_Private::EPropertyClass::Int, "test123", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(APlayer1Test, test123), METADATA_PARAMS(NewProp_test123_MetaData, ARRAY_COUNT(NewProp_test123_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[] = {
				{ "Category", "Spawn" },
				{ "ModuleRelativePath", "Player1Test.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass = { UE4CodeGen_Private::EPropertyClass::Class, "PawnClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(APlayer1Test, PawnClass), Z_Construct_UClass_USceneComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_PawnClass_MetaData, ARRAY_COUNT(NewProp_PawnClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_test123,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PawnClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayer1Test>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayer1Test::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(APlayer1Test, 1847425978);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer1Test(Z_Construct_UClass_APlayer1Test, &APlayer1Test::StaticClass, TEXT("/Script/TechDemo"), TEXT("APlayer1Test"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer1Test);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
