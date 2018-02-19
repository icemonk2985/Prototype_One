// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Prototype_OneGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrototype_OneGameModeBase() {}
// Cross Module References
	PROTOTYPE_ONE_API UClass* Z_Construct_UClass_APrototype_OneGameModeBase_NoRegister();
	PROTOTYPE_ONE_API UClass* Z_Construct_UClass_APrototype_OneGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Prototype_One();
// End Cross Module References
	void APrototype_OneGameModeBase::StaticRegisterNativesAPrototype_OneGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APrototype_OneGameModeBase_NoRegister()
	{
		return APrototype_OneGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_APrototype_OneGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Prototype_One,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Prototype_OneGameModeBase.h" },
				{ "ModuleRelativePath", "Prototype_OneGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APrototype_OneGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APrototype_OneGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(APrototype_OneGameModeBase, 3043100079);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrototype_OneGameModeBase(Z_Construct_UClass_APrototype_OneGameModeBase, &APrototype_OneGameModeBase::StaticClass, TEXT("/Script/Prototype_One"), TEXT("APrototype_OneGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrototype_OneGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
