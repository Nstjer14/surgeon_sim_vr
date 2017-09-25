// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRCODE_GamepadVRPawn_generated_h
#error "GamepadVRPawn.generated.h already included, missing '#pragma once' in GamepadVRPawn.h"
#endif
#define VRCODE_GamepadVRPawn_generated_h

#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FinishTeleport(); \
		P_NATIVE_END; \
	}


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishTeleport) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FinishTeleport(); \
		P_NATIVE_END; \
	}


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGamepadVRPawn(); \
	friend VRCODE_API class UClass* Z_Construct_UClass_AGamepadVRPawn(); \
public: \
	DECLARE_CLASS(AGamepadVRPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRCode"), NO_API) \
	DECLARE_SERIALIZER(AGamepadVRPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAGamepadVRPawn(); \
	friend VRCODE_API class UClass* Z_Construct_UClass_AGamepadVRPawn(); \
public: \
	DECLARE_CLASS(AGamepadVRPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRCode"), NO_API) \
	DECLARE_SERIALIZER(AGamepadVRPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGamepadVRPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGamepadVRPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamepadVRPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamepadVRPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGamepadVRPawn(AGamepadVRPawn&&); \
	NO_API AGamepadVRPawn(const AGamepadVRPawn&); \
public:


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGamepadVRPawn(AGamepadVRPawn&&); \
	NO_API AGamepadVRPawn(const AGamepadVRPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamepadVRPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamepadVRPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGamepadVRPawn)


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(AGamepadVRPawn, Scene); } \
	FORCEINLINE static uint32 __PPO__VROrigin() { return STRUCT_OFFSET(AGamepadVRPawn, VROrigin); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AGamepadVRPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__TraceDirection() { return STRUCT_OFFSET(AGamepadVRPawn, TraceDirection); } \
	FORCEINLINE static uint32 __PPO__TeleportPin() { return STRUCT_OFFSET(AGamepadVRPawn, TeleportPin); } \
	FORCEINLINE static uint32 __PPO__TeleportRing() { return STRUCT_OFFSET(AGamepadVRPawn, TeleportRing); } \
	FORCEINLINE static uint32 __PPO__TeleportArrow() { return STRUCT_OFFSET(AGamepadVRPawn, TeleportArrow); }


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_13_PROLOG
#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_RPC_WRAPPERS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_INCLASS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_INCLASS_NO_PURE_DECLS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_GamepadVRPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
