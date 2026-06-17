// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report3class/Public/barr_Obs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodebarr_Obs() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
REPORT3CLASS_API UClass* Z_Construct_UClass_Abarr_Obs();
REPORT3CLASS_API UClass* Z_Construct_UClass_Abarr_Obs_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report3class();
// End Cross Module References

// Begin Class Abarr_Obs
void Abarr_Obs::StaticRegisterNativesAbarr_Obs()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Abarr_Obs);
UClass* Z_Construct_UClass_Abarr_Obs_NoRegister()
{
	return Abarr_Obs::StaticClass();
}
struct Z_Construct_UClass_Abarr_Obs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x82\xac\xec\xa0\x84 \xec\x84\xa0\xec\x96\xb8. \xec\x88\x9c\xed\x99\x98\xec\xb0\xb8\xec\xa1\xb0 \xeb\xb0\xa9\xec\xa7\x80\xeb\xa5\xbc \xec\x9c\x84\xed\x95\xb4 \xec\x97\xac\xea\xb8\xb0\xec\x84\xa0 \xec\x9d\xb4\xeb\xa0\x87\xea\xb2\x8c.\n" },
#endif
		{ "IncludePath", "barr_Obs.h" },
		{ "ModuleRelativePath", "Public/barr_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xec\xa0\x84 \xec\x84\xa0\xec\x96\xb8. \xec\x88\x9c\xed\x99\x98\xec\xb0\xb8\xec\xa1\xb0 \xeb\xb0\xa9\xec\xa7\x80\xeb\xa5\xbc \xec\x9c\x84\xed\x95\xb4 \xec\x97\xac\xea\xb8\xb0\xec\x84\xa0 \xec\x9d\xb4\xeb\xa0\x87\xea\xb2\x8c." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\x93\xa4.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/barr_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\x93\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//USphereComponent : \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc\xec\x97\x90 \xec\x9e\x88\xeb\x8a\x94 \xea\xb2\x83. \xea\xb0\x84\xeb\x8b\xa8\xed\x95\x9c \xec\xb6\xa9\xeb\x8f\x8c \xea\xb0\x90\xec\xa7\x80\xec\x97\x90 \xec\x82\xac\xec\x9a\xa9\xeb\x90\x98\xeb\x8a\x94 \xea\xb5\xac\xec\xb2\xb4(Sphere). SphereComponent.h\xec\x97\x90 \xec\x9e\x88\xec\x9d\x8c.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/barr_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USphereComponent : \xec\x96\xb8\xeb\xa6\xac\xec\x96\xbc\xec\x97\x90 \xec\x9e\x88\xeb\x8a\x94 \xea\xb2\x83. \xea\xb0\x84\xeb\x8b\xa8\xed\x95\x9c \xec\xb6\xa9\xeb\x8f\x8c \xea\xb0\x90\xec\xa7\x80\xec\x97\x90 \xec\x82\xac\xec\x9a\xa9\xeb\x90\x98\xeb\x8a\x94 \xea\xb5\xac\xec\xb2\xb4(Sphere). SphereComponent.h\xec\x97\x90 \xec\x9e\x88\xec\x9d\x8c." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/barr_Obs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Barr|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4.\n" },
#endif
		{ "ModuleRelativePath", "Public/barr_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Barr|Movement" },
		{ "ModuleRelativePath", "Public/barr_Obs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Barr|Life" },
		{ "ModuleRelativePath", "Public/barr_Obs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Abarr_Obs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abarr_Obs_Statics::NewProp_CollisionComp = { "CollisionComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abarr_Obs, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComp_MetaData), NewProp_CollisionComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abarr_Obs_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abarr_Obs, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Abarr_Obs_Statics::NewProp_NiagaraComp = { "NiagaraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abarr_Obs, NiagaraComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComp_MetaData), NewProp_NiagaraComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Abarr_Obs_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abarr_Obs, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Abarr_Obs_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abarr_Obs, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Abarr_Obs_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Abarr_Obs, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Abarr_Obs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abarr_Obs_Statics::NewProp_CollisionComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abarr_Obs_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abarr_Obs_Statics::NewProp_NiagaraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abarr_Obs_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abarr_Obs_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Abarr_Obs_Statics::NewProp_MaxDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Abarr_Obs_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_Abarr_Obs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Report3class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Abarr_Obs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Abarr_Obs_Statics::ClassParams = {
	&Abarr_Obs::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_Abarr_Obs_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_Abarr_Obs_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Abarr_Obs_Statics::Class_MetaDataParams), Z_Construct_UClass_Abarr_Obs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Abarr_Obs()
{
	if (!Z_Registration_Info_UClass_Abarr_Obs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Abarr_Obs.OuterSingleton, Z_Construct_UClass_Abarr_Obs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Abarr_Obs.OuterSingleton;
}
template<> REPORT3CLASS_API UClass* StaticClass<Abarr_Obs>()
{
	return Abarr_Obs::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Abarr_Obs);
Abarr_Obs::~Abarr_Obs() {}
// End Class Abarr_Obs

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_barr_Obs_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Abarr_Obs, Abarr_Obs::StaticClass, TEXT("Abarr_Obs"), &Z_Registration_Info_UClass_Abarr_Obs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Abarr_Obs), 2431826381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_barr_Obs_h_985945134(TEXT("/Script/Report3class"),
	Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_barr_Obs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_barr_Obs_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
