// Black hole plugin Ver 1.0
// Created by Leonardo Gabriel de Lima
// Git Hub:https://github.com/leonardodesigner

#include "BlackHole.h"

#define LOCTEXT_NAMESPACE "FBlackHoleModule"

void FBlackHoleModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FBlackHoleModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FBlackHoleModule, BlackHole)