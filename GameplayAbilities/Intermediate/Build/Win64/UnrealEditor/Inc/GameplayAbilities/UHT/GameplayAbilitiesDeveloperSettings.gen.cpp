// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilities/Public/GameplayAbilitiesDeveloperSettings.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayAbilitiesDeveloperSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_NoRegister();
GAMEPLAYABILITIES_API UEnum* Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

// Begin Class UGameplayAbilitiesDeveloperSettings
void UGameplayAbilitiesDeveloperSettings::StaticRegisterNativesUGameplayAbilitiesDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbilitiesDeveloperSettings);
UClass* Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_NoRegister()
{
	return UGameplayAbilitiesDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Expose Global Gameplay Ability Settings in an easy to understand Developer Settings interface (usable through the Editor's Project Settings).\n * This the preferred way to configure the config variables previously found in AbilitySystemGlobals.  Projects may still opt to override the\n * AbilitySystemGlobals class with their own customized class to modify Gameplay Ability functionality across their project.\n */" },
#endif
		{ "DisplayName", "Gameplay Abilities Settings" },
		{ "IncludePath", "GameplayAbilitiesDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Expose Global Gameplay Ability Settings in an easy to understand Developer Settings interface (usable through the Editor's Project Settings).\nThis the preferred way to configure the config variables previously found in AbilitySystemGlobals.  Projects may still opt to override the\nAbilitySystemGlobals class with their own customized class to modify Gameplay Ability functionality across their project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemGlobalsClassName_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The global ability system class to use\n" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Ability System Globals Class" },
		{ "MetaClass", "/Script/GameplayAbilities.AbilitySystemGlobals" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The global ability system class to use" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDebugTargetFromHud_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set to true if you want the \"ShowDebug AbilitySystem\" cheat to use the hud's debug target instead of the ability system's debug target.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true if you want the \"ShowDebug AbilitySystem\" cheat to use the hud's debug target instead of the ability system's debug target." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeSetDefaultsTableNames_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.CurveTable" },
		{ "Category", "Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Array of curve table names to use for default values for attribute sets, keyed off of Name/Levels */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Global Attribute Set Defaults Tables" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of curve table names to use for default values for attribute sets, keyed off of Name/Levels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalAttributeMetaDataTableName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.DataTable" },
		{ "Category", "Attribute" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Holds information about the valid attributes' min and max values and stacking rules */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Global Attribute Meta Data Table" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds information about the valid attributes' min and max values and stacking rules" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalGameplayCueManagerClass_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class reference to gameplay cue manager. Use this if you want to just instantiate a class for your gameplay cue manager without having to create an asset. */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Global GameplayCue Manager Class" },
		{ "MetaClass", "/Script/GameplayAbilities.GameplayCueManager" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class reference to gameplay cue manager. Use this if you want to just instantiate a class for your gameplay cue manager without having to create an asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalGameplayCueManagerName_MetaData[] = {
		{ "AllowedClasses", "/Script/GameplayAbilities.GameplayCueManager" },
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Class reference to gameplay cue manager. Use this if you want to just instantiate a class for your gameplay cue manager without having to create an asset. */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class reference to gameplay cue manager. Use this if you want to just instantiate a class for your gameplay cue manager without having to create an asset." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayCueNotifyPaths_MetaData[] = {
		{ "Category", "GameplayCue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look in these paths for GameplayCueNotifies. These are your \"always loaded\" set. */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look in these paths for GameplayCueNotifies. These are your \"always loaded\" set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalCurveTableName_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.CurveTable" },
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of global curve table to use as the default for scalable floats, etc. */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Global Curve Table" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of global curve table to use as the default for scalable floats, etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictTargetGameplayEffects_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set to true if you want clients to try to predict gameplay effects done to targets. If false it will only predict self effects */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true if you want clients to try to predict gameplay effects done to targets. If false it will only predict self effects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicateActivationOwnedTags_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \n\x09 * Set to true if you want tags granted to owners from ability activations to be replicated. If false, ActivationOwnedTags are only applied locally. \n\x09 * This should only be disabled for legacy game code that depends on non-replication of ActivationOwnedTags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set to true if you want tags granted to owners from ability activations to be replicated. If false, ActivationOwnedTags are only applied locally.\nThis should only be disabled for legacy game code that depends on non-replication of ActivationOwnedTags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailCanActivateAbilityTag_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TryActive failed due to GameplayAbility's CanActivateAbility function (Blueprint or Native) */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TryActive failed due to GameplayAbility's CanActivateAbility function (Blueprint or Native)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailCooldownTag_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TryActivate failed due to being on cooldown */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TryActivate failed due to being on cooldown" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailCostTag_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TryActivate failed due to not being able to spend costs */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TryActivate failed due to not being able to spend costs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailNetworkingTag_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Failed to activate due to invalid networking settings, this is designer error */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Failed to activate due to invalid networking settings, this is designer error" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailTagsBlockedTag_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TryActivate failed due to being blocked by other abilities */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TryActivate failed due to being blocked by other abilities" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateFailTagsMissingTag_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TryActivate failed due to missing required tags */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TryActivate failed due to missing required tags" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagResponseTableName_MetaData[] = {
		{ "AllowedClasses", "/Script/GameplayAbilities.GameplayTagReponseTable" },
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The class to instantiate as the GameplayTagResponseTable. */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Gameplay Tag Response Table" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class to instantiate as the GameplayTagResponseTable." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowGameplayModEvaluationChannels_MetaData[] = {
		{ "Category", "GameplayEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the game should allow the usage of gameplay mod evaluation channels or not */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the game should allow the usage of gameplay mod evaluation channels or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGameplayModEvaluationChannel_MetaData[] = {
		{ "Category", "GameplayEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The default mod evaluation channel for the game */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default mod evaluation channel for the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayModEvaluationChannelAliases_MetaData[] = {
		{ "Category", "GameplayEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Game-specified named aliases for gameplay mod evaluation channels; Only those with valid aliases are eligible to be used in a game (except Channel0, which is always valid) */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game-specified named aliases for gameplay mod evaluation channels; Only those with valid aliases are eligible to be used in a game (except Channel0, which is always valid)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimalReplicationTagCountBits_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How many bits to use for \"number of tags\" in FMinimalReplicationTagCountMap::NetSerialize.  */" },
#endif
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How many bits to use for \"number of tags\" in FMinimalReplicationTagCountMap::NetSerialize." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilitySystemGlobalsClassName;
	static void NewProp_bUseDebugTargetFromHud_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDebugTargetFromHud;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalAttributeSetDefaultsTableNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GlobalAttributeSetDefaultsTableNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalAttributeMetaDataTableName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalGameplayCueManagerClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalGameplayCueManagerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameplayCueNotifyPaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayCueNotifyPaths;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalCurveTableName;
	static void NewProp_PredictTargetGameplayEffects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PredictTargetGameplayEffects;
	static void NewProp_ReplicateActivationOwnedTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplicateActivationOwnedTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailCanActivateAbilityTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailCooldownTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailCostTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailNetworkingTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailTagsBlockedTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActivateFailTagsMissingTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagResponseTableName;
	static void NewProp_bAllowGameplayModEvaluationChannels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowGameplayModEvaluationChannels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultGameplayModEvaluationChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultGameplayModEvaluationChannel;
	static const UECodeGen_Private::FNamePropertyParams NewProp_GameplayModEvaluationChannelAliases;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinimalReplicationTagCountBits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbilitiesDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_AbilitySystemGlobalsClassName = { "AbilitySystemGlobalsClassName", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, AbilitySystemGlobalsClassName), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemGlobalsClassName_MetaData), NewProp_AbilitySystemGlobalsClassName_MetaData) };
void Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_bUseDebugTargetFromHud_SetBit(void* Obj)
{
	((UGameplayAbilitiesDeveloperSettings*)Obj)->bUseDebugTargetFromHud = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_bUseDebugTargetFromHud = { "bUseDebugTargetFromHud", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayAbilitiesDeveloperSettings), &Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_bUseDebugTargetFromHud_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDebugTargetFromHud_MetaData), NewProp_bUseDebugTargetFromHud_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalAttributeSetDefaultsTableNames_Inner = { "GlobalAttributeSetDefaultsTableNames", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalAttributeSetDefaultsTableNames = { "GlobalAttributeSetDefaultsTableNames", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, GlobalAttributeSetDefaultsTableNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalAttributeSetDefaultsTableNames_MetaData), NewProp_GlobalAttributeSetDefaultsTableNames_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalAttributeMetaDataTableName = { "GlobalAttributeMetaDataTableName", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, GlobalAttributeMetaDataTableName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalAttributeMetaDataTableName_MetaData), NewProp_GlobalAttributeMetaDataTableName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalGameplayCueManagerClass = { "GlobalGameplayCueManagerClass", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, GlobalGameplayCueManagerClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalGameplayCueManagerClass_MetaData), NewProp_GlobalGameplayCueManagerClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalGameplayCueManagerName = { "GlobalGameplayCueManagerName", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, GlobalGameplayCueManagerName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalGameplayCueManagerName_MetaData), NewProp_GlobalGameplayCueManagerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GameplayCueNotifyPaths_Inner = { "GameplayCueNotifyPaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GameplayCueNotifyPaths = { "GameplayCueNotifyPaths", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, GameplayCueNotifyPaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayCueNotifyPaths_MetaData), NewProp_GameplayCueNotifyPaths_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalCurveTableName = { "GlobalCurveTableName", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, GlobalCurveTableName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalCurveTableName_MetaData), NewProp_GlobalCurveTableName_MetaData) };
void Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_PredictTargetGameplayEffects_SetBit(void* Obj)
{
	((UGameplayAbilitiesDeveloperSettings*)Obj)->PredictTargetGameplayEffects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_PredictTargetGameplayEffects = { "PredictTargetGameplayEffects", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayAbilitiesDeveloperSettings), &Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_PredictTargetGameplayEffects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictTargetGameplayEffects_MetaData), NewProp_PredictTargetGameplayEffects_MetaData) };
void Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ReplicateActivationOwnedTags_SetBit(void* Obj)
{
	((UGameplayAbilitiesDeveloperSettings*)Obj)->ReplicateActivationOwnedTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ReplicateActivationOwnedTags = { "ReplicateActivationOwnedTags", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayAbilitiesDeveloperSettings), &Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ReplicateActivationOwnedTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicateActivationOwnedTags_MetaData), NewProp_ReplicateActivationOwnedTags_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailCanActivateAbilityTag = { "ActivateFailCanActivateAbilityTag", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, ActivateFailCanActivateAbilityTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailCanActivateAbilityTag_MetaData), NewProp_ActivateFailCanActivateAbilityTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailCooldownTag = { "ActivateFailCooldownTag", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, ActivateFailCooldownTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailCooldownTag_MetaData), NewProp_ActivateFailCooldownTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailCostTag = { "ActivateFailCostTag", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, ActivateFailCostTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailCostTag_MetaData), NewProp_ActivateFailCostTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailNetworkingTag = { "ActivateFailNetworkingTag", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, ActivateFailNetworkingTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailNetworkingTag_MetaData), NewProp_ActivateFailNetworkingTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailTagsBlockedTag = { "ActivateFailTagsBlockedTag", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, ActivateFailTagsBlockedTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailTagsBlockedTag_MetaData), NewProp_ActivateFailTagsBlockedTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailTagsMissingTag = { "ActivateFailTagsMissingTag", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, ActivateFailTagsMissingTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateFailTagsMissingTag_MetaData), NewProp_ActivateFailTagsMissingTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GameplayTagResponseTableName = { "GameplayTagResponseTableName", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, GameplayTagResponseTableName), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagResponseTableName_MetaData), NewProp_GameplayTagResponseTableName_MetaData) };
void Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_bAllowGameplayModEvaluationChannels_SetBit(void* Obj)
{
	((UGameplayAbilitiesDeveloperSettings*)Obj)->bAllowGameplayModEvaluationChannels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_bAllowGameplayModEvaluationChannels = { "bAllowGameplayModEvaluationChannels", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayAbilitiesDeveloperSettings), &Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_bAllowGameplayModEvaluationChannels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowGameplayModEvaluationChannels_MetaData), NewProp_bAllowGameplayModEvaluationChannels_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_DefaultGameplayModEvaluationChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_DefaultGameplayModEvaluationChannel = { "DefaultGameplayModEvaluationChannel", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, DefaultGameplayModEvaluationChannel), Z_Construct_UEnum_GameplayAbilities_EGameplayModEvaluationChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultGameplayModEvaluationChannel_MetaData), NewProp_DefaultGameplayModEvaluationChannel_MetaData) }; // 2726299600
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GameplayModEvaluationChannelAliases = { "GameplayModEvaluationChannelAliases", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(GameplayModEvaluationChannelAliases, UGameplayAbilitiesDeveloperSettings), STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, GameplayModEvaluationChannelAliases), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayModEvaluationChannelAliases_MetaData), NewProp_GameplayModEvaluationChannelAliases_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_MinimalReplicationTagCountBits = { "MinimalReplicationTagCountBits", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesDeveloperSettings, MinimalReplicationTagCountBits), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimalReplicationTagCountBits_MetaData), NewProp_MinimalReplicationTagCountBits_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_AbilitySystemGlobalsClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_bUseDebugTargetFromHud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalAttributeSetDefaultsTableNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalAttributeSetDefaultsTableNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalAttributeMetaDataTableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalGameplayCueManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalGameplayCueManagerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GameplayCueNotifyPaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GameplayCueNotifyPaths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GlobalCurveTableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_PredictTargetGameplayEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ReplicateActivationOwnedTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailCanActivateAbilityTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailCooldownTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailCostTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailNetworkingTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailTagsBlockedTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_ActivateFailTagsMissingTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GameplayTagResponseTableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_bAllowGameplayModEvaluationChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_DefaultGameplayModEvaluationChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_DefaultGameplayModEvaluationChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_GameplayModEvaluationChannelAliases,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::NewProp_MinimalReplicationTagCountBits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::ClassParams = {
	&UGameplayAbilitiesDeveloperSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UGameplayAbilitiesDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbilitiesDeveloperSettings.OuterSingleton, Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayAbilitiesDeveloperSettings.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayAbilitiesDeveloperSettings>()
{
	return UGameplayAbilitiesDeveloperSettings::StaticClass();
}
UGameplayAbilitiesDeveloperSettings::UGameplayAbilitiesDeveloperSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbilitiesDeveloperSettings);
UGameplayAbilitiesDeveloperSettings::~UGameplayAbilitiesDeveloperSettings() {}
// End Class UGameplayAbilitiesDeveloperSettings

// Begin Class UGameplayAbilitiesEditorDeveloperSettings
void UGameplayAbilitiesEditorDeveloperSettings::StaticRegisterNativesUGameplayAbilitiesEditorDeveloperSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayAbilitiesEditorDeveloperSettings);
UClass* Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_NoRegister()
{
	return UGameplayAbilitiesEditorDeveloperSettings::StaticClass();
}
struct Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Gameplay Abilities Editor Settings" },
		{ "IncludePath", "GameplayAbilitiesDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCooldowns_MetaData[] = {
		{ "Category", "Debug" },
		{ "ConsoleVariable", "AbilitySystem.IgnoreCooldowns" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCosts_MetaData[] = {
		{ "Category", "Debug" },
		{ "ConsoleVariable", "AbilitySystem.IgnoreCosts" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemGlobalScaler_MetaData[] = {
		{ "Category", "Debug" },
		{ "ConsoleVariable", "AbilitySystem.GlobalAbilityScale" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawMaxDistance_MetaData[] = {
		{ "Category", "Debug" },
		{ "ConsoleVariable", "AbilitySystem.DebugDrawMaxDistance" },
		{ "ModuleRelativePath", "Public/GameplayAbilitiesDeveloperSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnoreCooldowns_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCooldowns;
	static void NewProp_bIgnoreCosts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCosts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbilitySystemGlobalScaler;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDrawMaxDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayAbilitiesEditorDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_bIgnoreCooldowns_SetBit(void* Obj)
{
	((UGameplayAbilitiesEditorDeveloperSettings*)Obj)->bIgnoreCooldowns = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_bIgnoreCooldowns = { "bIgnoreCooldowns", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayAbilitiesEditorDeveloperSettings), &Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_bIgnoreCooldowns_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreCooldowns_MetaData), NewProp_bIgnoreCooldowns_MetaData) };
void Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_bIgnoreCosts_SetBit(void* Obj)
{
	((UGameplayAbilitiesEditorDeveloperSettings*)Obj)->bIgnoreCosts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_bIgnoreCosts = { "bIgnoreCosts", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGameplayAbilitiesEditorDeveloperSettings), &Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_bIgnoreCosts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreCosts_MetaData), NewProp_bIgnoreCosts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_AbilitySystemGlobalScaler = { "AbilitySystemGlobalScaler", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesEditorDeveloperSettings, AbilitySystemGlobalScaler), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemGlobalScaler_MetaData), NewProp_AbilitySystemGlobalScaler_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_DebugDrawMaxDistance = { "DebugDrawMaxDistance", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayAbilitiesEditorDeveloperSettings, DebugDrawMaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawMaxDistance_MetaData), NewProp_DebugDrawMaxDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_bIgnoreCooldowns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_bIgnoreCosts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_AbilitySystemGlobalScaler,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::NewProp_DebugDrawMaxDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::ClassParams = {
	&UGameplayAbilitiesEditorDeveloperSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UGameplayAbilitiesEditorDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayAbilitiesEditorDeveloperSettings.OuterSingleton, Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayAbilitiesEditorDeveloperSettings.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UClass* StaticClass<UGameplayAbilitiesEditorDeveloperSettings>()
{
	return UGameplayAbilitiesEditorDeveloperSettings::StaticClass();
}
UGameplayAbilitiesEditorDeveloperSettings::UGameplayAbilitiesEditorDeveloperSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayAbilitiesEditorDeveloperSettings);
UGameplayAbilitiesEditorDeveloperSettings::~UGameplayAbilitiesEditorDeveloperSettings() {}
// End Class UGameplayAbilitiesEditorDeveloperSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_PO_Plugins_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayAbilitiesDeveloperSettings, UGameplayAbilitiesDeveloperSettings::StaticClass, TEXT("UGameplayAbilitiesDeveloperSettings"), &Z_Registration_Info_UClass_UGameplayAbilitiesDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbilitiesDeveloperSettings), 3265303688U) },
		{ Z_Construct_UClass_UGameplayAbilitiesEditorDeveloperSettings, UGameplayAbilitiesEditorDeveloperSettings::StaticClass, TEXT("UGameplayAbilitiesEditorDeveloperSettings"), &Z_Registration_Info_UClass_UGameplayAbilitiesEditorDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayAbilitiesEditorDeveloperSettings), 1267753108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PO_Plugins_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_1239419889(TEXT("/Script/GameplayAbilities"),
	Z_CompiledInDeferFile_FID_PO_Plugins_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PO_Plugins_GameplayAbilities_Source_GameplayAbilities_Public_GameplayAbilitiesDeveloperSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
