// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL_Import.generated.h"

/**
 * 
 */
UCLASS()
class ADVANCEDWIDGETS521_API UBFL_Import : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, category = "File Import")
	static FString ImportFile(FString fileLocation);
	
};
