// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatleTank/BatleTankGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatleTankGameModeBase() {}
// Cross Module References
	BATLETANK_API UClass* Z_Construct_UClass_ABatleTankGameModeBase_NoRegister();
	BATLETANK_API UClass* Z_Construct_UClass_ABatleTankGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BatleTank();
// End Cross Module References
	void ABatleTankGameModeBase::StaticRegisterNativesABatleTankGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABatleTankGameModeBase_NoRegister()
	{
		return ABatleTankGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABatleTankGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatleTankGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BatleTank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatleTankGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BatleTankGameModeBase.h" },
		{ "ModuleRelativePath", "BatleTankGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatleTankGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatleTankGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatleTankGameModeBase_Statics::ClassParams = {
		&ABatleTankGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABatleTankGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABatleTankGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatleTankGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatleTankGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatleTankGameModeBase, 2438072449);
	template<> BATLETANK_API UClass* StaticClass<ABatleTankGameModeBase>()
	{
		return ABatleTankGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatleTankGameModeBase(Z_Construct_UClass_ABatleTankGameModeBase, &ABatleTankGameModeBase::StaticClass, TEXT("/Script/BatleTank"), TEXT("ABatleTankGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatleTankGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
