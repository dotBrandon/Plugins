// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACLPlugin/Classes/AnimBoneCompressionCodec_ACL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionCodec_ACL() {}
// Cross Module References
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_NoRegister();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL();
	ACLPLUGIN_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase();
	UPackage* Z_Construct_UPackage__Script_ACLPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
// End Cross Module References
	void UAnimBoneCompressionCodec_ACL::StaticRegisterNativesUAnimBoneCompressionCodec_ACL()
	{
	}
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_NoRegister()
	{
		return UAnimBoneCompressionCodec_ACL::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptimizationTargets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptimizationTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OptimizationTargets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsKeyframeStrippingSupported_MetaData[];
#endif
		static void NewProp_bIsKeyframeStrippingSupported_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsKeyframeStrippingSupported;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyframeStrippingProportion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyframeStrippingProportion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyframeStrippingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeyframeStrippingThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec_ACLBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ACLPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Uses the open source Animation Compression Library with default settings suitable for general purpose animations. */" },
		{ "DisplayName", "Anim Compress ACL" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimBoneCompressionCodec_ACL.h" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "Uses the open source Animation Compression Library with default settings suitable for general purpose animations." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_Inner = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_MetaData[] = {
		{ "Category", "ACL Options" },
		{ "Comment", "/** The skeletal meshes used to estimate the skinning deformation during compression. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "The skeletal meshes used to estimate the skinning deformation during compression." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets = { "OptimizationTargets", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACL, OptimizationTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_bIsKeyframeStrippingSupported_MetaData[] = {
		{ "Comment", "/** Whether keyframe stripping is supported or not. Only used in the editor to enable/disable the feature. */" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "Whether keyframe stripping is supported or not. Only used in the editor to enable/disable the feature." },
	};
#endif
	void Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_bIsKeyframeStrippingSupported_SetBit(void* Obj)
	{
		((UAnimBoneCompressionCodec_ACL*)Obj)->bIsKeyframeStrippingSupported = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_bIsKeyframeStrippingSupported = { "bIsKeyframeStrippingSupported", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimBoneCompressionCodec_ACL), &Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_bIsKeyframeStrippingSupported_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_bIsKeyframeStrippingSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_bIsKeyframeStrippingSupported_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingProportion_MetaData[] = {
		{ "Category", "ACL Destructive Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The minimum proportion of keyframes that should be stripped. UE 5.1+ */" },
		{ "EditCondition", "bIsKeyframeStrippingSupported" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "The minimum proportion of keyframes that should be stripped. UE 5.1+" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingProportion = { "KeyframeStrippingProportion", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACL, KeyframeStrippingProportion), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingProportion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingProportion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingThreshold_MetaData[] = {
		{ "Category", "ACL Destructive Options" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The error threshold below which to strip keyframes. If a keyframe can be reconstructed with an error below the threshold, it is stripped. UE 5.1+ */" },
		{ "EditCondition", "bIsKeyframeStrippingSupported" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/AnimBoneCompressionCodec_ACL.h" },
		{ "ToolTip", "The error threshold below which to strip keyframes. If a keyframe can be reconstructed with an error below the threshold, it is stripped. UE 5.1+" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingThreshold = { "KeyframeStrippingThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionCodec_ACL, KeyframeStrippingThreshold), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_OptimizationTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_bIsKeyframeStrippingSupported,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingProportion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::NewProp_KeyframeStrippingThreshold,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionCodec_ACL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::ClassParams = {
		&UAnimBoneCompressionCodec_ACL::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::PropPointers), 0),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_ACL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBoneCompressionCodec_ACL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBoneCompressionCodec_ACL, 2001522283);
	template<> ACLPLUGIN_API UClass* StaticClass<UAnimBoneCompressionCodec_ACL>()
	{
		return UAnimBoneCompressionCodec_ACL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBoneCompressionCodec_ACL(Z_Construct_UClass_UAnimBoneCompressionCodec_ACL, &UAnimBoneCompressionCodec_ACL::StaticClass, TEXT("/Script/ACLPlugin"), TEXT("UAnimBoneCompressionCodec_ACL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionCodec_ACL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
