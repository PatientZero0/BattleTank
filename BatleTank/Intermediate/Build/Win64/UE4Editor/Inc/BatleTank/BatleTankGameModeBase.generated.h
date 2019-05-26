// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATLETANK_BatleTankGameModeBase_generated_h
#error "BatleTankGameModeBase.generated.h already included, missing '#pragma once' in BatleTankGameModeBase.h"
#endif
#define BATLETANK_BatleTankGameModeBase_generated_h

#define BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_RPC_WRAPPERS
#define BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatleTankGameModeBase(); \
	friend struct Z_Construct_UClass_ABatleTankGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABatleTankGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BatleTank"), NO_API) \
	DECLARE_SERIALIZER(ABatleTankGameModeBase)


#define BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABatleTankGameModeBase(); \
	friend struct Z_Construct_UClass_ABatleTankGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ABatleTankGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/BatleTank"), NO_API) \
	DECLARE_SERIALIZER(ABatleTankGameModeBase)


#define BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatleTankGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatleTankGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatleTankGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatleTankGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatleTankGameModeBase(ABatleTankGameModeBase&&); \
	NO_API ABatleTankGameModeBase(const ABatleTankGameModeBase&); \
public:


#define BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatleTankGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatleTankGameModeBase(ABatleTankGameModeBase&&); \
	NO_API ABatleTankGameModeBase(const ABatleTankGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatleTankGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatleTankGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatleTankGameModeBase)


#define BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define BatleTank_Source_BatleTank_BatleTankGameModeBase_h_12_PROLOG
#define BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_RPC_WRAPPERS \
	BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_INCLASS \
	BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	BatleTank_Source_BatleTank_BatleTankGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATLETANK_API UClass* StaticClass<class ABatleTankGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatleTank_Source_BatleTank_BatleTankGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
