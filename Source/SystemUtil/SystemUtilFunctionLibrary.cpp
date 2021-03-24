// Fill out your copyright notice in the Description page of Project Settings.


#include "SystemUtilFunctionLibrary.h"
#include "Internationalization/Internationalization.h"
#include "Internationalization/Culture.h"
 
const FString USystemUtilFunctionLibrary::GetOSCultureLanguage()
{
	return FInternationalization::Get().GetDefaultCulture()->GetNativeLanguage();
}

const FString USystemUtilFunctionLibrary::GetOSCultureDisplayName()
{
	return FInternationalization::Get().GetDefaultCulture()->GetDisplayName();
}


const FString USystemUtilFunctionLibrary::GetOSCultureVariant()
{
	return FInternationalization::Get().GetDefaultCulture()->GetVariant();
}


const FString USystemUtilFunctionLibrary::GetOSCultureScript()
{
	return FInternationalization::Get().GetDefaultCulture()->GetScript();
}

const FString USystemUtilFunctionLibrary::GetOSCultureNativeRegion()
{
	return FInternationalization::Get().GetDefaultCulture()->GetNativeRegion();
}

const FString USystemUtilFunctionLibrary::GeOSCulturetRegion()
{
	return FInternationalization::Get().GetDefaultCulture()->GetRegion();
}

const FString USystemUtilFunctionLibrary::GetOSCultureNativeLanguage()
{
	return FInternationalization::Get().GetDefaultCulture()->GetNativeLanguage();
}

const FString USystemUtilFunctionLibrary::GetOSCultureTwoLetterISOLanguageName()
{
	return FInternationalization::Get().GetDefaultCulture()->GetTwoLetterISOLanguageName();
}


const FString USystemUtilFunctionLibrary::GetOSCultureThreeLetterISOLanguageName()
{
	return FInternationalization::Get().GetDefaultCulture()->GetThreeLetterISOLanguageName();
}

const FString USystemUtilFunctionLibrary::GetOSCultureUnrealLegacyThreeLetterISOLanguageName()
{
	return FInternationalization::Get().GetDefaultCulture()->GetUnrealLegacyThreeLetterISOLanguageName();
}


const FString USystemUtilFunctionLibrary::GetOSCultureNativeName()
{
	return FInternationalization::Get().GetDefaultCulture()->GetNativeName();
}


const FString USystemUtilFunctionLibrary::GetOSCultureName()
{
	return FInternationalization::Get().GetDefaultCulture()->GetName();
}

const TArray<FString> USystemUtilFunctionLibrary::GetOSCulturePrioritizedParentCultureNames()
{
	return FInternationalization::Get().GetDefaultCulture()->GetPrioritizedParentCultureNames();
}

const int USystemUtilFunctionLibrary::GetOSCultureKeyboardLayoutId()
{
	return FInternationalization::Get().GetDefaultCulture()->GetKeyboardLayoutId();
}

const FString USystemUtilFunctionLibrary::GetOSCultureEnglishName()
{
	return FInternationalization::Get().GetDefaultCulture()->GetEnglishName();
}
 