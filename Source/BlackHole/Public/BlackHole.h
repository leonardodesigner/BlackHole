// Black hole plugin Ver 1.0
// Created by Leonardo Gabriel de Lima
// Git Hub:https://github.com/leonardodesigner

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FBlackHoleModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
