// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VRCode.h"
#include "GamepadVRPawn.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamepadVRPawn() {}
// Cross Module References
	VRCODE_API UFunction* Z_Construct_UFunction_AGamepadVRPawn_FinishTeleport();
	VRCODE_API UClass* Z_Construct_UClass_AGamepadVRPawn();
	VRCODE_API UClass* Z_Construct_UClass_AGamepadVRPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VRCode();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AGamepadVRPawn::StaticRegisterNativesAGamepadVRPawn()
	{
		UClass* Class = AGamepadVRPawn::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "FinishTeleport", (Native)&AGamepadVRPawn::execFinishTeleport },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AGamepadVRPawn_FinishTeleport()
	{
		UObject* Outer = Z_Construct_UClass_AGamepadVRPawn();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FinishTeleport"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGamepadVRPawn_NoRegister()
	{
		return AGamepadVRPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AGamepadVRPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_VRCode();
			OuterClass = AGamepadVRPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_AGamepadVRPawn_FinishTeleport());

				UProperty* NewProp_Extents = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Extents"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Extents, AGamepadVRPawn), 0x0010000000000005, Z_Construct_UScriptStruct_FVector());
				UProperty* NewProp_RotationLengthThreshold = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RotationLengthThreshold"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(RotationLengthThreshold, AGamepadVRPawn), 0x0010000000000005);
				UProperty* NewProp_ThumbDeadzone = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ThumbDeadzone"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ThumbDeadzone, AGamepadVRPawn), 0x0010000000000005);
				UProperty* NewProp_DefaultPlayerHeight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DefaultPlayerHeight"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DefaultPlayerHeight, AGamepadVRPawn), 0x0010000000000005);
				UProperty* NewProp_TeleportFadeColor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportFadeColor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TeleportFadeColor, AGamepadVRPawn), 0x0010000000000005, Z_Construct_UScriptStruct_FLinearColor());
				UProperty* NewProp_FadeOutDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeOutDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeOutDuration, AGamepadVRPawn), 0x0010000000000005);
				UProperty* NewProp_FadeInDuration = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FadeInDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(FadeInDuration, AGamepadVRPawn), 0x0010000000000005);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bUseGamepad, AGamepadVRPawn);
				UProperty* NewProp_bUseGamepad = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bUseGamepad"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bUseGamepad, AGamepadVRPawn), 0x0010000000000005, CPP_BOOL_PROPERTY_BITMASK(bUseGamepad, AGamepadVRPawn), sizeof(bool), true);
				UProperty* NewProp_TeleportArrow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportArrow"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TeleportArrow, AGamepadVRPawn), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_TeleportRing = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportRing"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TeleportRing, AGamepadVRPawn), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_TeleportPin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TeleportPin"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TeleportPin, AGamepadVRPawn), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				UProperty* NewProp_TraceDirection = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TraceDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TraceDirection, AGamepadVRPawn), 0x00400000000a001d, Z_Construct_UClass_UArrowComponent_NoRegister());
				UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, AGamepadVRPawn), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_VROrigin = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("VROrigin"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(VROrigin, AGamepadVRPawn), 0x00400000000a001d, Z_Construct_UClass_USceneComponent_NoRegister());
				UProperty* NewProp_Scene = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Scene"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Scene, AGamepadVRPawn), 0x00400000000a001d, Z_Construct_UClass_USceneComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AGamepadVRPawn_FinishTeleport(), "FinishTeleport"); // 1496389382
				static TCppClassTypeInfo<TCppClassTypeTraits<AGamepadVRPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_Extents, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_Extents, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_RotationLengthThreshold, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_RotationLengthThreshold, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_ThumbDeadzone, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_ThumbDeadzone, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_DefaultPlayerHeight, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_DefaultPlayerHeight, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_TeleportFadeColor, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_TeleportFadeColor, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_FadeOutDuration, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_FadeOutDuration, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_FadeInDuration, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_FadeInDuration, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_bUseGamepad, TEXT("Category"), TEXT("Code Constants"));
				MetaData->SetValue(NewProp_bUseGamepad, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_TeleportArrow, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportArrow, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_TeleportArrow, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportArrow, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_TeleportRing, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportRing, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_TeleportRing, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportRing, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_TeleportPin, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportPin, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_TeleportPin, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TeleportPin, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_TraceDirection, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_TraceDirection, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_TraceDirection, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_TraceDirection, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_Camera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_Camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_VROrigin, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
				MetaData->SetValue(NewProp_Scene, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Scene, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_Scene, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Scene, TEXT("ModuleRelativePath"), TEXT("GamepadVRPawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGamepadVRPawn, 810087712);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGamepadVRPawn(Z_Construct_UClass_AGamepadVRPawn, &AGamepadVRPawn::StaticClass, TEXT("/Script/VRCode"), TEXT("AGamepadVRPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamepadVRPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
