// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef VRCODE_IPickupable_generated_h
#error "IPickupable.generated.h already included, missing '#pragma once' in IPickupable.h"
#endif
#define VRCODE_IPickupable_generated_h

#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_RPC_WRAPPERS \
	virtual void Drop_Implementation()=0; \
	virtual void Pickup_Implementation(USceneComponent* AttachTo)=0; \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Drop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickup) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pickup_Implementation(Z_Param_AttachTo); \
		P_NATIVE_END; \
	}


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Drop_Implementation()=0; \
	virtual void Pickup_Implementation(USceneComponent* AttachTo)=0; \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Drop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickup) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Pickup_Implementation(Z_Param_AttachTo); \
		P_NATIVE_END; \
	}


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_EVENT_PARMS \
	struct Pickupable_eventPickup_Parms \
	{ \
		USceneComponent* AttachTo; \
	};


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_CALLBACK_WRAPPERS
#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VRCODE_API UPickupable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VRCODE_API, UPickupable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VRCODE_API UPickupable(UPickupable&&); \
	VRCODE_API UPickupable(const UPickupable&); \
public:


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VRCODE_API UPickupable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VRCODE_API UPickupable(UPickupable&&); \
	VRCODE_API UPickupable(const UPickupable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VRCODE_API, UPickupable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupable)


#undef GENERATED_UINTERFACE_BODY_COMMON
#define GENERATED_UINTERFACE_BODY_COMMON() \
private: \
	static void StaticRegisterNativesUPickupable(); \
	friend VRCODE_API class UClass* Z_Construct_UClass_UPickupable(); \
public: \
	DECLARE_CLASS(UPickupable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/VRCode"), VRCODE_API) \
	DECLARE_SERIALIZER(UPickupable) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GENERATED_UINTERFACE_BODY_COMMON() \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPickupable() {} \
public: \
	typedef UPickupable UClassType; \
	static void Execute_Drop(UObject* O); \
	static void Execute_Pickup(UObject* O, USceneComponent* AttachTo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IPickupable() {} \
public: \
	typedef UPickupable UClassType; \
	static void Execute_Drop(UObject* O); \
	static void Execute_Pickup(UObject* O, USceneComponent* AttachTo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_12_PROLOG \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_EVENT_PARMS


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_RPC_WRAPPERS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_CALLBACK_WRAPPERS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_CALLBACK_WRAPPERS \
	UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE_VR_Code_Sample_ue_4_16_2_4_17_Source_VRCode_IPickupable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
