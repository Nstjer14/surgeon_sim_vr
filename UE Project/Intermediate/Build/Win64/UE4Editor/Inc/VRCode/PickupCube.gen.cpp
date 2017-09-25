// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VRCode.h"
#include "PickupCube.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupCube() {}
// Cross Module References
	VRCODE_API UClass* Z_Construct_UClass_APickupCube_NoRegister();
	VRCODE_API UClass* Z_Construct_UClass_APickupCube();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VRCode();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	VRCODE_API UClass* Z_Construct_UClass_UPickupable_NoRegister();
// End Cross Module References
	void APickupCube::StaticRegisterNativesAPickupCube()
	{
	}
	UClass* Z_Construct_UClass_APickupCube_NoRegister()
	{
		return APickupCube::StaticClass();
	}
	UClass* Z_Construct_UClass_APickupCube()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_VRCode();
			OuterClass = APickupCube::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_StaticMeshComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StaticMeshComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(StaticMeshComponent, APickupCube), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<APickupCube> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->Interfaces.Add(FImplementedInterface(Z_Construct_UClass_UPickupable_NoRegister(), VTABLE_OFFSET(APickupCube, IPickupable), false ));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PickupCube.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PickupCube.h"));
				MetaData->SetValue(NewProp_StaticMeshComponent, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_StaticMeshComponent, TEXT("Category"), TEXT("Code Components"));
				MetaData->SetValue(NewProp_StaticMeshComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_StaticMeshComponent, TEXT("ModuleRelativePath"), TEXT("PickupCube.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupCube, 3737888848);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupCube(Z_Construct_UClass_APickupCube, &APickupCube::StaticClass, TEXT("/Script/VRCode"), TEXT("APickupCube"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupCube);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
