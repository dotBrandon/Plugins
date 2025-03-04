// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleEnhanced/Public/LogDisplaySettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogDisplaySettings() {}
// Cross Module References
	CONSOLEENHANCED_API UScriptStruct* Z_Construct_UScriptStruct_FLogCategorySetting();
	UPackage* Z_Construct_UPackage__Script_ConsoleEnhanced();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	CONSOLEENHANCED_API UClass* Z_Construct_UClass_ULogDisplaySettings_NoRegister();
	CONSOLEENHANCED_API UClass* Z_Construct_UClass_ULogDisplaySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FLogCategorySetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CONSOLEENHANCED_API uint32 Get_Z_Construct_UScriptStruct_FLogCategorySetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLogCategorySetting, Z_Construct_UPackage__Script_ConsoleEnhanced(), TEXT("LogCategorySetting"), sizeof(FLogCategorySetting), Get_Z_Construct_UScriptStruct_FLogCategorySetting_Hash());
	}
	return Singleton;
}
template<> CONSOLEENHANCED_API UScriptStruct* StaticStruct<FLogCategorySetting>()
{
	return FLogCategorySetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLogCategorySetting(FLogCategorySetting::StaticStruct, TEXT("/Script/ConsoleEnhanced"), TEXT("LogCategorySetting"), false, nullptr, nullptr);
static struct FScriptStruct_ConsoleEnhanced_StaticRegisterNativesFLogCategorySetting
{
	FScriptStruct_ConsoleEnhanced_StaticRegisterNativesFLogCategorySetting()
	{
		UScriptStruct::DeferCppStructOps<FLogCategorySetting>(FName(TEXT("LogCategorySetting")));
	}
} ScriptStruct_ConsoleEnhanced_StaticRegisterNativesFLogCategorySetting;
	struct Z_Construct_UScriptStruct_FLogCategorySetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategorySearchString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CategorySearchString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchAsRegex_MetaData[];
#endif
		static void NewProp_SearchAsRegex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SearchAsRegex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogCategorySetting_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLogCategorySetting>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_CategorySearchString_MetaData[] = {
		{ "Category", "Log Categories" },
		{ "Comment", "// What to search for to match this category.\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "What to search for to match this category." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_CategorySearchString = { "CategorySearchString", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLogCategorySetting, CategorySearchString), METADATA_PARAMS(Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_CategorySearchString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_CategorySearchString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_TextColor_MetaData[] = {
		{ "Category", "Log Categories" },
		{ "Comment", "// The text color for lines that match the specified search term of this category\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "The text color for lines that match the specified search term of this category" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLogCategorySetting, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_TextColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_ShadowColor_MetaData[] = {
		{ "Category", "Log Categories" },
		{ "Comment", "// The shadow color for this log category\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "The shadow color for this log category" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_ShadowColor = { "ShadowColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLogCategorySetting, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_ShadowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_ShadowColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_SearchAsRegex_MetaData[] = {
		{ "Category", "Log Categories" },
		{ "Comment", "// If true then the category search string will be interpreted as regular expression\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "If true then the category search string will be interpreted as regular expression" },
	};
#endif
	void Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_SearchAsRegex_SetBit(void* Obj)
	{
		((FLogCategorySetting*)Obj)->SearchAsRegex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_SearchAsRegex = { "SearchAsRegex", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLogCategorySetting), &Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_SearchAsRegex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_SearchAsRegex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_SearchAsRegex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLogCategorySetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_CategorySearchString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_ShadowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLogCategorySetting_Statics::NewProp_SearchAsRegex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLogCategorySetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleEnhanced,
		nullptr,
		&NewStructOps,
		"LogCategorySetting",
		sizeof(FLogCategorySetting),
		alignof(FLogCategorySetting),
		Z_Construct_UScriptStruct_FLogCategorySetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogCategorySetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLogCategorySetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLogCategorySetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLogCategorySetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLogCategorySetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ConsoleEnhanced();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LogCategorySetting"), sizeof(FLogCategorySetting), Get_Z_Construct_UScriptStruct_FLogCategorySetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLogCategorySetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLogCategorySetting_Hash() { return 1113779716U; }
	void ULogDisplaySettings::StaticRegisterNativesULogDisplaySettings()
	{
	}
	UClass* Z_Construct_UClass_ULogDisplaySettings_NoRegister()
	{
		return ULogDisplaySettings::StaticClass();
	}
	struct Z_Construct_UClass_ULogDisplaySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayTextShadow_MetaData[];
#endif
		static void NewProp_bDisplayTextShadow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayTextShadow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParseBlueprintLinks_MetaData[];
#endif
		static void NewProp_bParseBlueprintLinks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParseBlueprintLinks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParseFilePaths_MetaData[];
#endif
		static void NewProp_bParseFilePaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParseFilePaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bParseHyperlinks_MetaData[];
#endif
		static void NewProp_bParseHyperlinks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bParseHyperlinks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollapsedLineCounterColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollapsedLineCounterColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShadowColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisplayOutline_MetaData[];
#endif
		static void NewProp_bDisplayOutline_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisplayOutline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutlineSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutlineSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AntiSpamRegex_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AntiSpamRegex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LogCategories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LogCategories;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULogDisplaySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleEnhanced,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the log plugin.\n */" },
		{ "IncludePath", "LogDisplaySettings.h" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "Implements the settings for the log plugin." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayTextShadow_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "// Displays a shadow drop behind the log text for better readability\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "Displays a shadow drop behind the log text for better readability" },
	};
#endif
	void Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayTextShadow_SetBit(void* Obj)
	{
		((ULogDisplaySettings*)Obj)->bDisplayTextShadow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayTextShadow = { "bDisplayTextShadow", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULogDisplaySettings), &Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayTextShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayTextShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayTextShadow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseBlueprintLinks_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "// Recognizes blueprint paths from you project (e.g. in a stack trace) and makes them into clickable links\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "Recognizes blueprint paths from you project (e.g. in a stack trace) and makes them into clickable links" },
	};
#endif
	void Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseBlueprintLinks_SetBit(void* Obj)
	{
		((ULogDisplaySettings*)Obj)->bParseBlueprintLinks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseBlueprintLinks = { "bParseBlueprintLinks", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULogDisplaySettings), &Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseBlueprintLinks_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseBlueprintLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseBlueprintLinks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseFilePaths_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "// Displays all valid file paths as clickable links\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "Displays all valid file paths as clickable links" },
	};
#endif
	void Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseFilePaths_SetBit(void* Obj)
	{
		((ULogDisplaySettings*)Obj)->bParseFilePaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseFilePaths = { "bParseFilePaths", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULogDisplaySettings), &Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseFilePaths_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseFilePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseFilePaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseHyperlinks_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "// Displays all hyperlinks in the log as clickable links\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "Displays all hyperlinks in the log as clickable links" },
	};
#endif
	void Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseHyperlinks_SetBit(void* Obj)
	{
		((ULogDisplaySettings*)Obj)->bParseHyperlinks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseHyperlinks = { "bParseHyperlinks", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULogDisplaySettings), &Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseHyperlinks_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseHyperlinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseHyperlinks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_CollapsedLineCounterColor_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "// How to display the counter in the \"Collapsed Mode\"\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "How to display the counter in the \"Collapsed Mode\"" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_CollapsedLineCounterColor = { "CollapsedLineCounterColor", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULogDisplaySettings, CollapsedLineCounterColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_CollapsedLineCounterColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_CollapsedLineCounterColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "// The pixel offset for the shadow drop\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "The pixel offset for the shadow drop" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULogDisplaySettings, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_ShadowColor_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "// The color for the displayed shadow drop\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "The color for the displayed shadow drop" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_ShadowColor = { "ShadowColor", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULogDisplaySettings, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_ShadowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_ShadowColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayOutline_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "// If the texts should have an outline applied to it\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "If the texts should have an outline applied to it" },
	};
#endif
	void Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayOutline_SetBit(void* Obj)
	{
		((ULogDisplaySettings*)Obj)->bDisplayOutline = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayOutline = { "bDisplayOutline", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULogDisplaySettings), &Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayOutline_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayOutline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayOutline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_OutlineColor_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "// The color of the text outline\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "The color of the text outline" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULogDisplaySettings, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_OutlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_OutlineColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_OutlineSize_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "// The size of the outline in pixels\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "The size of the outline in pixels" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_OutlineSize = { "OutlineSize", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULogDisplaySettings, OutlineSize), METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_OutlineSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_OutlineSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_AntiSpamRegex_MetaData[] = {
		{ "Category", "Output Log" },
		{ "Comment", "// The regex to determine if a log message is filtered out in \"spam\" mode. Caution! Only edit when you know what you are doing!\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "The regex to determine if a log message is filtered out in \"spam\" mode. Caution! Only edit when you know what you are doing!" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_AntiSpamRegex = { "AntiSpamRegex", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULogDisplaySettings, AntiSpamRegex), METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_AntiSpamRegex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_AntiSpamRegex_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_LogCategories_Inner = { "LogCategories", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLogCategorySetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_LogCategories_MetaData[] = {
		{ "Category", "Log Categories" },
		{ "Comment", "// Allows to define custom log categories by search string. The first matching category is applied to each line.\n" },
		{ "ModuleRelativePath", "Public/LogDisplaySettings.h" },
		{ "ToolTip", "Allows to define custom log categories by search string. The first matching category is applied to each line." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_LogCategories = { "LogCategories", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULogDisplaySettings, LogCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_LogCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_LogCategories_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULogDisplaySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayTextShadow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseBlueprintLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseFilePaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bParseHyperlinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_CollapsedLineCounterColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_ShadowOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_ShadowColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_bDisplayOutline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_OutlineColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_OutlineSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_AntiSpamRegex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_LogCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULogDisplaySettings_Statics::NewProp_LogCategories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULogDisplaySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogDisplaySettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULogDisplaySettings_Statics::ClassParams = {
		&ULogDisplaySettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULogDisplaySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULogDisplaySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULogDisplaySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULogDisplaySettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULogDisplaySettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULogDisplaySettings, 3820037147);
	template<> CONSOLEENHANCED_API UClass* StaticClass<ULogDisplaySettings>()
	{
		return ULogDisplaySettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULogDisplaySettings(Z_Construct_UClass_ULogDisplaySettings, &ULogDisplaySettings::StaticClass, TEXT("/Script/ConsoleEnhanced"), TEXT("ULogDisplaySettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogDisplaySettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
