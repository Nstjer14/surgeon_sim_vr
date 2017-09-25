// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VRCode.h"
#include "IPickupable.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPickupable() {}
// Cross Module References
	VRCODE_API UFunction* Z_Construct_UFunction_UPickupable_Drop();
	VRCODE_API UClass* Z_Construct_UClass_UPickupable();
	VRCODE_API UFunction* Z_Construct_UFunction_UPickupable_Pickup();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	VRCODE_API UClass* Z_Construct_UClass_UPickupable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VRCode();
// End Cross Module References
	void IPickupable::Drop()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Drop instead.");
	}
	void IPickupable::Pickup(USceneComponent* AttachTo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Pickup instead.");
	}
	void UPickupable::StaticRegisterNativesUPickupable()
	{
		UClass* Class = UPickupable::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Drop", (Native)&IPickupable::execDrop },
			{ "Pickup", (Native)&IPickupable::execPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UPickupable_Drop()
	{
		UObject* Outer = Z_Construct_UClass_UPickupable();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Drop"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickupable Interface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("IPickupable.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPickupable_Pickup()
	{
		UObject* Outer = Z_Construct_UClass_UPickupable();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Pickup"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x0C020C00, 65535, sizeof(Pickupable_eventPickup_Parms));
			UProperty* NewProp_AttachTo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AttachTo"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AttachTo, Pickupable_eventPickup_Parms), 0x0010000000080080, Z_Construct_UClass_USceneComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickupable Interface"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("IPickupable.h"));
			MetaData->SetValue(NewProp_AttachTo, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPickupable_NoRegister()
	{
		return UPickupable::StaticClass();
	}
	UClass* Z_Construct_UClass_UPickupable()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UInterface();
			Z_Construct_UPackage__Script_VRCode();
			OuterClass = UPickupable::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20084081u;

				OuterClass->LinkChild(Z_Construct_UFunction_UPickupable_Drop());
				OuterClass->LinkChild(Z_Construct_UFunction_UPickupable_Pickup());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPickupable_Drop(), "Drop"); // 1022520072
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UPickupable_Pickup(), "Pickup"); // 4143580051
				static TCppClassTypeInfo<TCppClassTypeTraits<IPickupable> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("IPickupable.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPickupable, 1637609712);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPickupable(Z_Construct_UClass_UPickupable, &UPickupable::StaticClass, TEXT("/Script/VRCode"), TEXT("UPickupable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupable);
	static FName NAME_UPickupable_Drop = FName(TEXT("Drop"));
	void IPickupable::Execute_Drop(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPickupable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPickupable_Drop);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPickupable*)(O->GetNativeInterfaceAddress(UPickupable::StaticClass())))
		{
			I->Drop_Implementation();
		}
	}
	static FName NAME_UPickupable_Pickup = FName(TEXT("Pickup"));
	void IPickupable::Execute_Pickup(UObject* O, USceneComponent* AttachTo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPickupable::StaticClass()));
		Pickupable_eventPickup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPickupable_Pickup);
		if (Func)
		{
			Parms.AttachTo=AttachTo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPickupable*)(O->GetNativeInterfaceAddress(UPickupable::StaticClass())))
		{
			I->Pickup_Implementation(AttachTo);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
