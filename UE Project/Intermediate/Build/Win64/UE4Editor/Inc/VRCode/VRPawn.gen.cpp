// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VRCode.h"
#include "VRPawn.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPawn() {}
// Cross Module References
	VRCODE_API UEnum* Z_Construct_UEnum_VRCode_ETeleportControlScheme();
	UPackage* Z_Construct_UPackage__Script_VRCode();
	VRCODE_API UFunction* Z_Construct_UFunction_AVRPawn_FinishTeleport();
	VRCODE_API UClass* Z_Construct_UClass_AVRPawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VRCODE_API UClass* Z_Construct_UClass_AVRHand_NoRegister();
	VRCODE_API UFunction* Z_Construct_UFunction_AVRPawn_HandleButtonStyleTeleportActivation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	VRCODE_API UFunction* Z_Construct_UFunction_AVRPawn_HandleGrip();
	VRCODE_API UClass* Z_Construct_UClass_AVRPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
static UEnum* ETeleportControlScheme_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VRCode_ETeleportControlScheme, Z_Construct_UPackage__Script_VRCode(), TEXT("ETeleportControlScheme"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETeleportControlScheme(ETeleportControlScheme_StaticEnum, TEXT("/Script/VRCode"), TEXT("ETeleportControlScheme"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VRCode_ETeleportControlScheme()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VRCode();
		extern uint32 Get_Z_Construct_UEnum_VRCode_ETeleportControlScheme_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETeleportControlScheme"), 0, Get_Z_Construct_UEnum_VRCode_ETeleportControlScheme_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ETeleportControlScheme"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ETeleportControlScheme::Auto"), 0);
			EnumNames.Emplace(TEXT("ETeleportControlScheme::ButtonAndStick"), 1);
			EnumNames.Emplace(TEXT("ETeleportControlScheme::StickOnly"), 2);
			EnumNames.Emplace(TEXT("ETeleportControlScheme::ControllerRoll"), 3);
			EnumNames.Emplace(TEXT("ETeleportControlScheme::ETeleportControlScheme_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ETeleportControlScheme");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("ButtonAndStick.ToolTip"), TEXT("Select By Device"));
			MetaData->SetValue(ReturnEnum, TEXT("ControllerRoll.ToolTip"), TEXT("Robo Rally Style"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
			MetaData->SetValue(ReturnEnum, TEXT("StickOnly.ToolTip"), TEXT("Press a button"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VRCode_ETeleportControlScheme_CRC() { return 2772230696U; }
	void AVRPawn::StaticRegisterNativesAVRPawn()
	{
		UClass* Class = AVRPawn::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "FinishTeleport", (Native)&AVRPawn::execFinishTeleport },
			{ "HandleButtonStyleTeleportActivation", (Native)&AVRPawn::execHandleButtonStyleTeleportActivation },
			{ "HandleGrip", (Native)&AVRPawn::execHandleGrip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AVRPawn_FinishTeleport()
	{
		struct VRPawn_eventFinishTeleport_Parms
		{
			AVRHand* Current;
			FVector TeleportPosition;
			FRotator TeleportRotator;
		};
		UObject* Outer = Z_Construct_UClass_AVRPawn();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FinishTeleport"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00C20401, 65535, sizeof(VRPawn_eventFinishTeleport_Parms));
			UProperty* NewProp_TeleportRotator = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TeleportRotator"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TeleportRotator, VRPawn_eventFinishTeleport_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_TeleportPosition = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TeleportPosition"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TeleportPosition, VRPawn_eventFinishTeleport_Parms), 0x0010000008000182, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Current = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Current"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Current, VRPawn_eventFinishTeleport_Parms), 0x0010000000000080, Z_Construct_UClass_AVRHand_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
			MetaData->SetValue(NewProp_TeleportRotator, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_TeleportPosition, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRPawn_HandleButtonStyleTeleportActivation()
	{
		struct VRPawn_eventHandleButtonStyleTeleportActivation_Parms
		{
			UChildActorComponent* Hand;
			TEnumAsByte<EInputEvent> KeyEvent;
		};
		UObject* Outer = Z_Construct_UClass_AVRPawn();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HandleButtonStyleTeleportActivation"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(VRPawn_eventHandleButtonStyleTeleportActivation_Parms));
			UProperty* NewProp_KeyEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("KeyEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(KeyEvent, VRPawn_eventHandleButtonStyleTeleportActivation_Parms), 0x0010000000000080, Z_Construct_UEnum_Engine_EInputEvent());
			UProperty* NewProp_Hand = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Hand, VRPawn_eventHandleButtonStyleTeleportActivation_Parms), 0x0010000000080080, Z_Construct_UClass_UChildActorComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
			MetaData->SetValue(NewProp_Hand, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRPawn_HandleGrip()
	{
		struct VRPawn_eventHandleGrip_Parms
		{
			UChildActorComponent* Hand;
			TEnumAsByte<EInputEvent> KeyEvent;
		};
		UObject* Outer = Z_Construct_UClass_AVRPawn();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HandleGrip"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535, sizeof(VRPawn_eventHandleGrip_Parms));
			UProperty* NewProp_KeyEvent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("KeyEvent"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(KeyEvent, VRPawn_eventHandleGrip_Parms), 0x0010000000000080, Z_Construct_UEnum_Engine_EInputEvent());
			UProperty* NewProp_Hand = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Hand, VRPawn_eventHandleGrip_Parms), 0x0010000000080080, Z_Construct_UClass_UChildActorComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
			MetaData->SetValue(NewProp_Hand, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRPawn_NoRegister()
	{
		return AVRPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_VRCode();
			OuterClass = AVRPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AVRPawn_FinishTeleport());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRPawn_HandleButtonStyleTeleportActivation());
				OuterClass->LinkChild(Z_Construct_UFunction_AVRPawn_HandleGrip());

				UProperty* NewProp_ControlScheme = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ControlScheme"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(ControlScheme, AVRPawn), 0x0010000000000005, Z_Construct_UEnum_VRCode_ETeleportControlScheme());
				UProperty* NewProp_ControlScheme_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_ControlScheme, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_DefaultPlayerHeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultPlayerHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DefaultPlayerHeight, AVRPawn), 0x0010000000000005);
				UProperty* NewProp_ThumbDeadzone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ThumbDeadzone"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ThumbDeadzone, AVRPawn), 0x0010000000000005);
				UProperty* NewProp_TeleportFadeColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportFadeColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TeleportFadeColor, AVRPawn), 0x0010000000000005, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_FadeOutDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeOutDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeOutDuration, AVRPawn), 0x0010000000000005);
				UProperty* NewProp_FadeInDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeInDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeInDuration, AVRPawn), 0x0010000000000005);
				UProperty* NewProp_RightHand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RightHand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RightHand, AVRPawn), 0x00400000000a001d, Z_Construct_UClass_UChildActorComponent_NoRegister());
				UProperty* NewProp_LeftHand = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LeftHand"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LeftHand, AVRPawn), 0x00400000000a001d, Z_Construct_UClass_UChildActorComponent_NoRegister());
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, AVRPawn), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_VROrigin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VROrigin"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VROrigin, AVRPawn), 0x00400000000a001d, Z_Construct_UClass_USceneComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRPawn_FinishTeleport(), "FinishTeleport"); // 1075294736
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRPawn_HandleButtonStyleTeleportActivation(), "HandleButtonStyleTeleportActivation"); // 30557428
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVRPawn_HandleGrip(), "HandleGrip"); // 1882290036
				static TCppClassTypeInfo<TCppClassTypeTraits<AVRPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VRPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
				MetaData->SetValue(NewProp_ControlScheme, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_ControlScheme, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
				MetaData->SetValue(NewProp_DefaultPlayerHeight, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_DefaultPlayerHeight, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
				MetaData->SetValue(NewProp_ThumbDeadzone, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_ThumbDeadzone, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
				MetaData->SetValue(NewProp_TeleportFadeColor, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_TeleportFadeColor, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
				MetaData->SetValue(NewProp_FadeOutDuration, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_FadeOutDuration, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
				MetaData->SetValue(NewProp_FadeInDuration, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_FadeInDuration, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
				MetaData->SetValue(NewProp_RightHand, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_RightHand, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_RightHand, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_RightHand, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_LeftHand, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
				MetaData->SetValue(NewProp_Camera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_Camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("ModuleRelativePath"), TEXT("VRPawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPawn, 1293057427);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPawn(Z_Construct_UClass_AVRPawn, &AVRPawn::StaticClass, TEXT("/Script/VRCode"), TEXT("AVRPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
