// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECHDEMO_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define TECHDEMO_MyPlayerController_generated_h

#define TechDemo_Source_TechDemo_MyPlayerController_h_15_RPC_WRAPPERS
#define TechDemo_Source_TechDemo_MyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TechDemo_Source_TechDemo_MyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend TECHDEMO_API class UClass* Z_Construct_UClass_AMyPlayerController(); \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TechDemo_Source_TechDemo_MyPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend TECHDEMO_API class UClass* Z_Construct_UClass_AMyPlayerController(); \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/TechDemo"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define TechDemo_Source_TechDemo_MyPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public:


#define TechDemo_Source_TechDemo_MyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayerController(AMyPlayerController&&); \
	NO_API AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayerController)


#define TechDemo_Source_TechDemo_MyPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define TechDemo_Source_TechDemo_MyPlayerController_h_12_PROLOG
#define TechDemo_Source_TechDemo_MyPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_MyPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_MyPlayerController_h_15_RPC_WRAPPERS \
	TechDemo_Source_TechDemo_MyPlayerController_h_15_INCLASS \
	TechDemo_Source_TechDemo_MyPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TechDemo_Source_TechDemo_MyPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TechDemo_Source_TechDemo_MyPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	TechDemo_Source_TechDemo_MyPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_MyPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	TechDemo_Source_TechDemo_MyPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TechDemo_Source_TechDemo_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
