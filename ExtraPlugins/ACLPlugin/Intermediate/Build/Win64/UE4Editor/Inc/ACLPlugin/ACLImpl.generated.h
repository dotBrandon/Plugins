// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACLPLUGIN_ACLImpl_generated_h
#error "ACLImpl.generated.h already included, missing '#pragma once' in ACLImpl.h"
#endif
#define ACLPLUGIN_ACLImpl_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_ACLPlugin_Source_ACLPlugin_Public_ACLImpl_h


#define FOREACH_ENUM_ACLPHANTOMTRACKMODE(op) \
	op(ACLPhantomTrackMode::Ignore) \
	op(ACLPhantomTrackMode::Strip) \
	op(ACLPhantomTrackMode::Warn) 

enum class ACLPhantomTrackMode : uint8;
template<> ACLPLUGIN_API UEnum* StaticEnum<ACLPhantomTrackMode>();

#define FOREACH_ENUM_ACLCOMPRESSIONLEVEL(op) \
	op(ACLCL_Lowest) \
	op(ACLCL_Low) \
	op(ACLCL_Medium) \
	op(ACLCL_High) \
	op(ACLCL_Highest) \
	op(ACLCL_Automatic) 
#define FOREACH_ENUM_ACLVECTORFORMAT(op) \
	op(ACLVF_Vector3_96) \
	op(ACLVF_Vector3_Variable) 
#define FOREACH_ENUM_ACLROTATIONFORMAT(op) \
	op(ACLRF_Quat_128) \
	op(ACLRF_QuatDropW_96) \
	op(ACLRF_QuatDropW_Variable) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
