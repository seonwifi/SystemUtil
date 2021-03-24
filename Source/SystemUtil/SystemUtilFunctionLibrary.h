// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SystemUtilFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SYSTEMUTIL_API USystemUtilFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureLanguage();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureDisplayName();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureVariant();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureScript();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureNativeRegion();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GeOSCulturetRegion();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureNativeLanguage();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureTwoLetterISOLanguageName();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureThreeLetterISOLanguageName();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureUnrealLegacyThreeLetterISOLanguageName();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureNativeName();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureName();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const TArray<FString> GetOSCulturePrioritizedParentCultureNames();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const int GetOSCultureKeyboardLayoutId();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Util")
	static const FString GetOSCultureEnglishName(); 
};
