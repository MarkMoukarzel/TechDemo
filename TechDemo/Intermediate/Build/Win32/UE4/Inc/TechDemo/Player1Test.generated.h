// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBoxComponent;
#ifdef TECHDEMO_Player1Test_generated_h
#error "Player1Test.generated.h already included, missing '#pragma once' in Player1Test.h"
#endif
#define TECHDEMO_Player1Test_generated_h

#define TechDemo_Source_TechDemo_Player1Test_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTest) \
	{ \
		P_GET_OBJECT(UBoxComponent,Z_Param_a); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->Test(Z_Param_a); \
		P_NATIVE_END; \
	}


#define TechDemo_Source_TechDemo_Player1Test_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTest) \
	{ \
		P_GET_OBJECT(UBoxComponent,Z_Param_a); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->Test(Z_Param_a); \
		P_NATIVE_END; \
	}


#define TechDemo_Source_TechDemo_Player1Test_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer1Test(); \
	friend TECHDEMO_API class UClass* Z_Construct_UClass_APlayer1Test(); \
public: \
	DECLARE_CLASS(APlayer1Test, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(APlayer1Test) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TechDemo_Source_TechDemo_Player1Test_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer1Test(); \
	friend TECHDEMO_API class UClass* Z_Construct_UClass_APlayer1Test(); \
public: \
	DECLARE_CLASS(APlayer1Test, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(APlayer1Test) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TechDemo_Source_TechDemo_Player1Test_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer1Test(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer1Test) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer1Test); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer1Test); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer1Test(APlayer1Test&&); \
	NO_API APlayer1Test(const APlayer1Test&); \
public:


#define TechDemo_Source_TechDemo_Player1Test_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer1Test(APlayer1Test&&); \
	NO_API APlayer1Test(const APlayer1Test&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer1Test); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer1Test); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer1Test)


#define TechDemo_Source_TechDemo_Player1Test_h_15_PRIVATE_PROPERTY_OFFSET
#define TechDemo_Source_TechDemo_Player1Test_h_12_PROLOG
#define TechDemo_Source_TechDemo_Player1Test_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_Player1Test_h_15_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_Player1Test_h_15_RPC_WRAPPERS \
	TechDemo_Source_TechDemo_Player1Test_h_15_INCLASS \
	TechDemo_Source_TechDemo_Player1Test_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TechDemo_Source_TechDemo_Player1Test_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_Player1Test_h_15_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_Player1Test_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_Player1Test_h_15_INCLASS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_Player1Test_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TechDemo_Source_TechDemo_Player1Test_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
