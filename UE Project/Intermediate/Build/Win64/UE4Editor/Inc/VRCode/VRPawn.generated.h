// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AVRHand;
struct FVector;
struct FRotator;
class UChildActorComponent;
#ifdef VRCODE_VRPawn_generated_h
#error "VRPawn.generated.h already included, missing '#pragma once' in VRPawn.h"
#endif
#define VRCODE_VRPawn_generated_h

#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFinishTeleport) \
	{ \
		P_GET_OBJECT(AVRHand,Z_Param_Current); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TeleportPosition); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TeleportRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FinishTeleport(Z_Param_Current,Z_Param_Out_TeleportPosition,Z_Param_Out_TeleportRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleGrip) \
	{ \
		P_GET_OBJECT(UChildActorComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UByteProperty,Z_Param_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HandleGrip(Z_Param_Hand,EInputEvent(Z_Param_KeyEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleButtonStyleTeleportActivation) \
	{ \
		P_GET_OBJECT(UChildActorComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UByteProperty,Z_Param_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HandleButtonStyleTeleportActivation(Z_Param_Hand,EInputEvent(Z_Param_KeyEvent)); \
		P_NATIVE_END; \
	}


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFinishTeleport) \
	{ \
		P_GET_OBJECT(AVRHand,Z_Param_Current); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TeleportPosition); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_TeleportRotator); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->FinishTeleport(Z_Param_Current,Z_Param_Out_TeleportPosition,Z_Param_Out_TeleportRotator); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleGrip) \
	{ \
		P_GET_OBJECT(UChildActorComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UByteProperty,Z_Param_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HandleGrip(Z_Param_Hand,EInputEvent(Z_Param_KeyEvent)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHandleButtonStyleTeleportActivation) \
	{ \
		P_GET_OBJECT(UChildActorComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UByteProperty,Z_Param_KeyEvent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->HandleButtonStyleTeleportActivation(Z_Param_Hand,EInputEvent(Z_Param_KeyEvent)); \
		P_NATIVE_END; \
	}


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRPawn(); \
	friend VRCODE_API class UClass* Z_Construct_UClass_AVRPawn(); \
public: \
	DECLARE_CLASS(AVRPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRCode"), NO_API) \
	DECLARE_SERIALIZER(AVRPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAVRPawn(); \
	friend VRCODE_API class UClass* Z_Construct_UClass_AVRPawn(); \
public: \
	DECLARE_CLASS(AVRPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRCode"), NO_API) \
	DECLARE_SERIALIZER(AVRPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPawn(AVRPawn&&); \
	NO_API AVRPawn(const AVRPawn&); \
public:


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPawn(AVRPawn&&); \
	NO_API AVRPawn(const AVRPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRPawn)


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VROrigin() { return STRUCT_OFFSET(AVRPawn, VROrigin); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AVRPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__LeftHand() { return STRUCT_OFFSET(AVRPawn, LeftHand); } \
	FORCEINLINE static uint32 __PPO__RightHand() { return STRUCT_OFFSET(AVRPawn, RightHand); }


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_22_PROLOG
#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_PRIVATE_PROPERTY_OFFSET \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_RPC_WRAPPERS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_INCLASS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_PRIVATE_PROPERTY_OFFSET \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_INCLASS_NO_PURE_DECLS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRPawn_h


#define FOREACH_ENUM_ETELEPORTCONTROLSCHEME(op) \
	op(ETeleportControlScheme::Auto) \
	op(ETeleportControlScheme::ButtonAndStick) \
	op(ETeleportControlScheme::StickOnly) \
	op(ETeleportControlScheme::ControllerRoll) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
