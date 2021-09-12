// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BLACKHOLE_BlackHoleSource_generated_h
#error "BlackHoleSource.generated.h already included, missing '#pragma once' in BlackHoleSource.h"
#endif
#define BLACKHOLE_BlackHoleSource_generated_h

#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_SPARSE_DATA
#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_RPC_WRAPPERS \
	virtual void Multi_PlayEffect_Implementation(AActor* AttractedActor); \
 \
	DECLARE_FUNCTION(execMulti_PlayEffect);


#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMulti_PlayEffect);


#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_EVENT_PARMS \
	struct BlackHoleSource_eventMulti_PlayEffect_Parms \
	{ \
		AActor* AttractedActor; \
	}; \
	struct BlackHoleSource_eventOnDestroyActor_Parms \
	{ \
		AActor* Actor; \
	};


#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_CALLBACK_WRAPPERS
#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlackHoleSource(); \
	friend struct Z_Construct_UClass_ABlackHoleSource_Statics; \
public: \
	DECLARE_CLASS(ABlackHoleSource, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlackHole"), NO_API) \
	DECLARE_SERIALIZER(ABlackHoleSource)


#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABlackHoleSource(); \
	friend struct Z_Construct_UClass_ABlackHoleSource_Statics; \
public: \
	DECLARE_CLASS(ABlackHoleSource, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlackHole"), NO_API) \
	DECLARE_SERIALIZER(ABlackHoleSource)


#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlackHoleSource(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlackHoleSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHoleSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHoleSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHoleSource(ABlackHoleSource&&); \
	NO_API ABlackHoleSource(const ABlackHoleSource&); \
public:


#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlackHoleSource(ABlackHoleSource&&); \
	NO_API ABlackHoleSource(const ABlackHoleSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackHoleSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackHoleSource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlackHoleSource)


#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_PRIVATE_PROPERTY_OFFSET
#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_15_PROLOG \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_EVENT_PARMS


#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_PRIVATE_PROPERTY_OFFSET \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_SPARSE_DATA \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_RPC_WRAPPERS \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_CALLBACK_WRAPPERS \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_INCLASS \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_PRIVATE_PROPERTY_OFFSET \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_SPARSE_DATA \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_CALLBACK_WRAPPERS \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_INCLASS_NO_PURE_DECLS \
	PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLACKHOLE_API UClass* StaticClass<class ABlackHoleSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginProject_Plugins_BlackHole_Source_BlackHole_Public_BlackHoleSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
