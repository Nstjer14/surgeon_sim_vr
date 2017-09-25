// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VRCode.h"
#include "VRHand.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRHand() {}
// Cross Module References
	VRCODE_API UEnum* Z_Construct_UEnum_VRCode_EGripState();
	UPackage* Z_Construct_UPackage__Script_VRCode();
	VRCODE_API UFunction* Z_Construct_UFunction_AVRHand_GrabActor();
	VRCODE_API UClass* Z_Construct_UClass_AVRHand();
	VRCODE_API UFunction* Z_Construct_UFunction_AVRHand_OnComponentBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VRCODE_API UFunction* Z_Construct_UFunction_AVRHand_ReleaseActor();
	VRCODE_API UFunction* Z_Construct_UFunction_AVRHand_RumbleController();
	VRCODE_API UClass* Z_Construct_UClass_AVRHand_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
static UEnum* EGripState_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRCode_EGripState, Z_Construct_UPackage__Script_VRCode(), TEXT("EGripState"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGripState(EGripState_StaticEnum, TEXT("/Script/VRCode"), TEXT("EGripState"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRCode_EGripState()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRCode();
		extern uint32 Get_Z_Construct_UEnum_VRCode_EGripState_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGripState"), 0, Get_Z_Construct_UEnum_VRCode_EGripState_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EGripState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EGripState::Open"), 0);
			EnumNames.Emplace(TEXT("EGripState::CanGrab"), 1);
			EnumNames.Emplace(TEXT("EGripState::Grab"), 2);
			EnumNames.Emplace(TEXT("EGripState::EGripState_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EGripState");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRCode_EGripState_CRC() { return 3636304308U; }
	static FName NAME_AVRHand_GrabActor = FName(TEXT("GrabActor"));
	void AVRHand::GrabActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRHand_GrabActor),NULL);
	}
	static FName NAME_AVRHand_ReleaseActor = FName(TEXT("ReleaseActor"));
	void AVRHand::ReleaseActor()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRHand_ReleaseActor),NULL);
	}
	static FName NAME_AVRHand_RumbleController = FName(TEXT("RumbleController"));
	void AVRHand::RumbleController(float intensity)
	{
		VRHand_eventRumbleController_Parms Parms;
		Parms.intensity=intensity;
		ProcessEvent(FindFunctionChecked(NAME_AVRHand_RumbleController),&Parms);
	}
	void AVRHand::StaticRegisterNativesAVRHand()
	{
		UClass* Class = AVRHand::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GrabActor", (Native)&AVRHand::execGrabActor },
			{ "OnComponentBeginOverlap", (Native)&AVRHand::execOnComponentBeginOverlap },
			{ "ReleaseActor", (Native)&AVRHand::execReleaseActor },
			{ "RumbleController", (Native)&AVRHand::execRumbleController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AVRHand_GrabActor()
	{
		UObject* Outer = Z_Construct_UClass_AVRHand();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GrabActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Default"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRHand_OnComponentBeginOverlap()
	{
		struct VRHand_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer = Z_Construct_UClass_AVRHand();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnComponentBeginOverlap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00420401, 65535, sizeof(VRHand_eventOnComponentBeginOverlap_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, VRHand_eventOnComponentBeginOverlap_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, VRHand_eventOnComponentBeginOverlap_Parms);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, VRHand_eventOnComponentBeginOverlap_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, VRHand_eventOnComponentBeginOverlap_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, VRHand_eventOnComponentBeginOverlap_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, VRHand_eventOnComponentBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, VRHand_eventOnComponentBeginOverlap_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, VRHand_eventOnComponentBeginOverlap_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRHand_ReleaseActor()
	{
		UObject* Outer = Z_Construct_UClass_AVRHand();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReleaseActor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Default"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRHand_RumbleController()
	{
		UObject* Outer = Z_Construct_UClass_AVRHand();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RumbleController"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(VRHand_eventRumbleController_Parms));
			UProperty* NewProp_intensity = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("intensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(intensity, VRHand_eventRumbleController_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Default"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRHand_NoRegister()
	{
		return AVRHand::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRHand()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_VRCode();
			OuterClass = AVRHand::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AVRHand_GrabActor());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRHand_OnComponentBeginOverlap());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRHand_ReleaseActor());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRHand_RumbleController());

				UProperty* NewProp_AttachedActor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AttachedActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttachedActor, AVRHand), 0x0010000000000005, Z_Construct_UClass_AActor_NoRegister());
				UProperty* NewProp_Grip = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Grip"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Grip, AVRHand), 0x0010000000000005, Z_Construct_UEnum_VRCode_EGripState());
				UProperty* NewProp_Grip_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Grip, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(IsTeleporterActive, AVRHand);
				UProperty* NewProp_IsTeleporterActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("IsTeleporterActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(IsTeleporterActive, AVRHand), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(IsTeleporterActive, AVRHand), sizeof(bool), true);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(WantsToGrip, AVRHand);
				UProperty* NewProp_WantsToGrip = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WantsToGrip"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(WantsToGrip, AVRHand), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(WantsToGrip, AVRHand), sizeof(bool), true);
				UProperty* NewProp_Extents = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Extents"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Extents, AVRHand), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_TeleportLaunchVelocity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportLaunchVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TeleportLaunchVelocity, AVRHand), 0x0010000000000005);
				UProperty* NewProp_Hand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Hand"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Hand, AVRHand), 0x0010000000000005, Z_Construct_UEnum_InputCore_EControllerHand());
				UProperty* NewProp_Hand_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Hand, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_HapticEffect = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HapticEffect"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HapticEffect, AVRHand), 0x0010000000000005, Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister());
				UProperty* NewProp_BeamMaterial = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BeamMaterial"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BeamMaterial, AVRHand), 0x0010000000000005, Z_Construct_UClass_UMaterial_NoRegister());
				UProperty* NewProp_BeamMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BeamMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BeamMesh, AVRHand), 0x0010000000000005, Z_Construct_UClass_UStaticMesh_NoRegister());
				UProperty* NewProp_TeleportArrow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportArrow"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TeleportArrow, AVRHand), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_TeleportRing = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportRing"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TeleportRing, AVRHand), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_TeleportCylinder = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportCylinder"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TeleportCylinder, AVRHand), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_ArcEndPoint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ArcEndPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ArcEndPoint, AVRHand), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_ArcDirection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ArcDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ArcDirection, AVRHand), 0x00400000000a001d, Z_Construct_UClass_UArrowComponent_NoRegister());
				UProperty* NewProp_ArcSpline = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ArcSpline"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ArcSpline, AVRHand), 0x00400000000a001d, Z_Construct_UClass_USplineComponent_NoRegister());
				UProperty* NewProp_GrabSphere = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("GrabSphere"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(GrabSphere, AVRHand), 0x00400000000a001d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_HandMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("HandMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HandMesh, AVRHand), 0x00400000000a001d, Z_Construct_UClass_USkeletalMeshComponent_NoRegister());
				UProperty* NewProp_MotionController = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MotionController"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MotionController, AVRHand), 0x00400000000a001d, Z_Construct_UClass_UMotionControllerComponent_NoRegister());
				UProperty* NewProp_Scene = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Scene"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Scene, AVRHand), 0x00400000000a001d, Z_Construct_UClass_USceneComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRHand_GrabActor(), "GrabActor"); // 2964751694
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRHand_OnComponentBeginOverlap(), "OnComponentBeginOverlap"); // 3764359350
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRHand_ReleaseActor(), "ReleaseActor"); // 760199952
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRHand_RumbleController(), "RumbleController"); // 2393061164
				static TCppClassTypeInfo<TCppClassTypeTraits<AVRHand> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRHand.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_AttachedActor, TEXT("Category"), TEXT("Code Variables"));
				MetaData->SetValue(NewProp_AttachedActor, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_Grip, TEXT("Category"), TEXT("Code Variables"));
				MetaData->SetValue(NewProp_Grip, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_IsTeleporterActive, TEXT("Category"), TEXT("Code Variables"));
				MetaData->SetValue(NewProp_IsTeleporterActive, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_WantsToGrip, TEXT("Category"), TEXT("Code Variables"));
				MetaData->SetValue(NewProp_WantsToGrip, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_Extents, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_Extents, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_TeleportLaunchVelocity, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_TeleportLaunchVelocity, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_Hand, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_Hand, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_Hand, TEXT("ToolTip"), TEXT("Is this the left or right hand"));
				MetaData->SetValue(NewProp_HapticEffect, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_HapticEffect, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_BeamMaterial, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_BeamMaterial, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_BeamMesh, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_BeamMesh, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_TeleportArrow, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportArrow, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_TeleportArrow, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportArrow, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_TeleportRing, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportRing, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_TeleportRing, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportRing, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_TeleportCylinder, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportCylinder, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_TeleportCylinder, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportCylinder, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_ArcEndPoint, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ArcEndPoint, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_ArcEndPoint, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ArcEndPoint, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_ArcDirection, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ArcDirection, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_ArcDirection, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ArcDirection, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_ArcSpline, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_ArcSpline, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_ArcSpline, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ArcSpline, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_GrabSphere, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_GrabSphere, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_GrabSphere, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_GrabSphere, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_HandMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_HandMesh, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_HandMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_HandMesh, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_MotionController, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_MotionController, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_MotionController, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MotionController, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
				MetaData->SetValue(NewProp_Scene, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Scene, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_Scene, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Scene, TEXT("ModuleRelativePath"), TEXT("VRHand.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRHand, 2000218508);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRHand(Z_Construct_UClass_AVRHand, &AVRHand::StaticClass, TEXT("/Script/VRCode"), TEXT("AVRHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRHand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
