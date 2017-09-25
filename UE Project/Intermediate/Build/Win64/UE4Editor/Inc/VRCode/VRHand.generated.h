// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef VRCODE_VRHand_generated_h
#error "VRHand.generated.h already included, missing '#pragma once' in VRHand.h"
#endif
#define VRCODE_VRHand_generated_h

#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_RPC_WRAPPERS \
	virtual void ReleaseActor_Implementation(); \
	virtual void GrabActor_Implementation(); \
	virtual void RumbleController_Implementation(float intensity); \
 \
	DECLARE_FUNCTION(execReleaseActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReleaseActor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GrabActor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRumbleController) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_intensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RumbleController_Implementation(Z_Param_intensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnComponentBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReleaseActor_Implementation(); \
	virtual void GrabActor_Implementation(); \
	virtual void RumbleController_Implementation(float intensity); \
 \
	DECLARE_FUNCTION(execReleaseActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ReleaseActor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GrabActor_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRumbleController) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_intensity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->RumbleController_Implementation(Z_Param_intensity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnComponentBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_EVENT_PARMS \
	struct VRHand_eventRumbleController_Parms \
	{ \
		float intensity; \
	};


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_CALLBACK_WRAPPERS
#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRHand(); \
	friend VRCODE_API class UClass* Z_Construct_UClass_AVRHand(); \
public: \
	DECLARE_CLASS(AVRHand, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRCode"), NO_API) \
	DECLARE_SERIALIZER(AVRHand) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAVRHand(); \
	friend VRCODE_API class UClass* Z_Construct_UClass_AVRHand(); \
public: \
	DECLARE_CLASS(AVRHand, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRCode"), NO_API) \
	DECLARE_SERIALIZER(AVRHand) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRHand(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRHand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRHand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRHand(AVRHand&&); \
	NO_API AVRHand(const AVRHand&); \
public:


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRHand(AVRHand&&); \
	NO_API AVRHand(const AVRHand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRHand); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRHand)


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Scene() { return STRUCT_OFFSET(AVRHand, Scene); } \
	FORCEINLINE static uint32 __PPO__MotionController() { return STRUCT_OFFSET(AVRHand, MotionController); } \
	FORCEINLINE static uint32 __PPO__HandMesh() { return STRUCT_OFFSET(AVRHand, HandMesh); } \
	FORCEINLINE static uint32 __PPO__GrabSphere() { return STRUCT_OFFSET(AVRHand, GrabSphere); } \
	FORCEINLINE static uint32 __PPO__ArcSpline() { return STRUCT_OFFSET(AVRHand, ArcSpline); } \
	FORCEINLINE static uint32 __PPO__ArcDirection() { return STRUCT_OFFSET(AVRHand, ArcDirection); } \
	FORCEINLINE static uint32 __PPO__ArcEndPoint() { return STRUCT_OFFSET(AVRHand, ArcEndPoint); } \
	FORCEINLINE static uint32 __PPO__TeleportCylinder() { return STRUCT_OFFSET(AVRHand, TeleportCylinder); } \
	FORCEINLINE static uint32 __PPO__TeleportRing() { return STRUCT_OFFSET(AVRHand, TeleportRing); } \
	FORCEINLINE static uint32 __PPO__TeleportArrow() { return STRUCT_OFFSET(AVRHand, TeleportArrow); }


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_21_PROLOG \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_EVENT_PARMS


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_PRIVATE_PROPERTY_OFFSET \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_RPC_WRAPPERS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_CALLBACK_WRAPPERS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_INCLASS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_PRIVATE_PROPERTY_OFFSET \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_CALLBACK_WRAPPERS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_INCLASS_NO_PURE_DECLS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_VRHand_h


#define FOREACH_ENUM_EGRIPSTATE(op) \
	op(EGripState::Open) \
	op(EGripState::CanGrab) \
	op(EGripState::Grab) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
