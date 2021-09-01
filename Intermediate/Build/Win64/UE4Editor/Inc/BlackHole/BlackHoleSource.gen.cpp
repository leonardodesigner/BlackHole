// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlackHole/Public/BlackHoleSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackHoleSource() {}
// Cross Module References
	BLACKHOLE_API UClass* Z_Construct_UClass_ABlackHoleSource_NoRegister();
	BLACKHOLE_API UClass* Z_Construct_UClass_ABlackHoleSource();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BlackHole();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
// End Cross Module References
	static FName NAME_ABlackHoleSource_OnDestroyActor = FName(TEXT("OnDestroyActor"));
	void ABlackHoleSource::OnDestroyActor(AActor* Actor)
	{
		BlackHoleSource_eventOnDestroyActor_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_ABlackHoleSource_OnDestroyActor),&Parms);
	}
	void ABlackHoleSource::StaticRegisterNativesABlackHoleSource()
	{
	}
	struct Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackHoleSource_eventOnDestroyActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Black hole events" },
		{ "Comment", "// activates events in the actors before it is destroyed. Example: Activate the character death event before the character is destroyed\n" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "activates events in the actors before it is destroyed. Example: Activate the character death event before the character is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlackHoleSource, nullptr, "OnDestroyActor", nullptr, nullptr, sizeof(BlackHoleSource_eventOnDestroyActor_Parms), Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABlackHoleSource_NoRegister()
	{
		return ABlackHoleSource::StaticClass();
	}
	struct Z_Construct_UClass_ABlackHoleSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuctionSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuctionSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuctionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuctionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackHoleSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackHoleSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackHoleParticleEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackHoleParticleEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackHoleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlackHoleMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuctionVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuctionVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsAffected_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectsAffected;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectsAffected_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDebug_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DestroyDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDestroyCharacters_MetaData[];
#endif
		static void NewProp_bCanDestroyCharacters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDestroyCharacters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDestroyObjects_MetaData[];
#endif
		static void NewProp_bCanDestroyObjects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDestroyObjects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoleRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HoleRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlackHoleSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackHole,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlackHoleSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlackHoleSource_OnDestroyActor, "OnDestroyActor" }, // 1402400541
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlackHoleSource.h" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "Comment", "// Black hole sound\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Black hole sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionSound = { "SuctionSound", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHoleSource, SuctionSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionEffect = { "SuctionEffect", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHoleSource, SuctionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "Comment", "// Black hole sound\n" },
		{ "DisplayName", "Black Hole Sound" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Black hole sound" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleSound = { "BlackHoleSound", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHoleSource, BlackHoleSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleParticleEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "// Black hole particle effect\n" },
		{ "DisplayName", "Black Hole Particle" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Black hole particle effect" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleParticleEffect = { "BlackHoleParticleEffect", nullptr, (EPropertyFlags)0x00110000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHoleSource, BlackHoleParticleEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleParticleEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleParticleEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Black base hole Mesh\n" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Black base hole Mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleMesh = { "BlackHoleMesh", nullptr, (EPropertyFlags)0x00110000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHoleSource, BlackHoleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionVelocity_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "Comment", "// Suction Velocity\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Suction Velocity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionVelocity = { "SuctionVelocity", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHoleSource, SuctionVelocity), METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "Comment", "//Actors to Ignore\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Actors to Ignore" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHoleSource, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ActorsToIgnore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ObjectsAffected_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "Comment", "// Objects type can be destroyed\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Objects type can be destroyed" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ObjectsAffected = { "ObjectsAffected", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHoleSource, ObjectsAffected), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ObjectsAffected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ObjectsAffected_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ObjectsAffected_Inner = { "ObjectsAffected", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_DrawDebug_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "Comment", "// Debug trace\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Debug trace" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_DrawDebug = { "DrawDebug", nullptr, (EPropertyFlags)0x0011000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHoleSource, DrawDebug), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_DrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_DrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_DestroyDistance_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "Comment", "//Distance to destroy objects\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Distance to destroy objects" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_DestroyDistance = { "DestroyDistance", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHoleSource, DestroyDistance), METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_DestroyDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_DestroyDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyCharacters_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "Comment", "// Can destroy Characters\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Can destroy Characters" },
	};
#endif
	void Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyCharacters_SetBit(void* Obj)
	{
		((ABlackHoleSource*)Obj)->bCanDestroyCharacters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyCharacters = { "bCanDestroyCharacters", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlackHoleSource), &Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyCharacters_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyCharacters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyObjects_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "Comment", "// Can destroy objects\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Can destroy objects" },
	};
#endif
	void Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyObjects_SetBit(void* Obj)
	{
		((ABlackHoleSource*)Obj)->bCanDestroyObjects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyObjects = { "bCanDestroyObjects", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABlackHoleSource), &Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyObjects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_HoleRadius_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "Comment", "//Hole Radius\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BlackHoleSource.h" },
		{ "ToolTip", "Hole Radius" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_HoleRadius = { "HoleRadius", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlackHoleSource, HoleRadius), METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_HoleRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_HoleRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlackHoleSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleParticleEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_BlackHoleMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_SuctionVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ActorsToIgnore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ActorsToIgnore_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ObjectsAffected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_ObjectsAffected_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_DrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_DestroyDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_bCanDestroyObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackHoleSource_Statics::NewProp_HoleRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlackHoleSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlackHoleSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlackHoleSource_Statics::ClassParams = {
		&ABlackHoleSource::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlackHoleSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlackHoleSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlackHoleSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlackHoleSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlackHoleSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlackHoleSource, 1585964448);
	template<> BLACKHOLE_API UClass* StaticClass<ABlackHoleSource>()
	{
		return ABlackHoleSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlackHoleSource(Z_Construct_UClass_ABlackHoleSource, &ABlackHoleSource::StaticClass, TEXT("/Script/BlackHole"), TEXT("ABlackHoleSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlackHoleSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
