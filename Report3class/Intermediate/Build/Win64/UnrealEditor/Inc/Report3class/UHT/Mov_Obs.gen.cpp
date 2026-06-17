// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report3class/Public/Mov_Obs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMov_Obs() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
REPORT3CLASS_API UClass* Z_Construct_UClass_AMov_Obs();
REPORT3CLASS_API UClass* Z_Construct_UClass_AMov_Obs_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report3class();
// End Cross Module References

// Begin Class AMov_Obs
void AMov_Obs::StaticRegisterNativesAMov_Obs()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMov_Obs);
UClass* Z_Construct_UClass_AMov_Obs_NoRegister()
{
	return AMov_Obs::StaticClass();
}
struct Z_Construct_UClass_AMov_Obs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Mov_Obs.h" },
		{ "ModuleRelativePath", "Public/Mov_Obs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4\xec\xa0\x84\xec\x97\x90 \xea\xb0\x95\xec\x9d\x98\xeb\xa5\xbc \xeb\x93\xa4\xec\x9d\x80 \xec\x8a\xa4\xed\x83\x80\xec\x9d\xbc\xeb\x8c\x80\xeb\xa1\x9c \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\xa5\xbc \xea\xb5\xac\xec\x84\xb1 => \xeb\xa3\xa8\xed\x8a\xb8\xeb\xb6\x80\xed\x84\xb0 \xea\xb3\x84\xec\xb8\xb5\xec\x9d\x84 \xec\x8c\x93\xeb\x8a\x94 \xeb\xb0\xa9\xec\x8b\x9d. \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mov_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xec\xa0\x84\xec\x97\x90 \xea\xb0\x95\xec\x9d\x98\xeb\xa5\xbc \xeb\x93\xa4\xec\x9d\x80 \xec\x8a\xa4\xed\x83\x80\xec\x9d\xbc\xeb\x8c\x80\xeb\xa1\x9c \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\xeb\xa5\xbc \xea\xb5\xac\xec\x84\xb1 => \xeb\xa3\xa8\xed\x8a\xb8\xeb\xb6\x80\xed\x84\xb0 \xea\xb3\x84\xec\xb8\xb5\xec\x9d\x84 \xec\x8c\x93\xeb\x8a\x94 \xeb\xb0\xa9\xec\x8b\x9d." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x8a\xa4\xed\x83\x9c\xed\x8b\xb1 \xeb\xa7\xa4\xec\x8b\x9c \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Mov_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x83\x9c\xed\x8b\xb1 \xeb\xa7\xa4\xec\x8b\x9c \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Plat_Mov" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x95\x84\xec\x88\x98\xea\xb3\xbc\xec\xa0\x9c 4. \xec\x86\x8d\xeb\x8f\x84 \xeb\xb3\x80\xea\xb2\xbd\xec\x9d\xb4 \xec\x8b\xa4\xec\x8b\x9c\xea\xb0\x84 \xeb\xb0\x98\xec\x9d\x91 \xeb\x90\x98\xeb\x82\x98 --> \xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \xec\x88\x98\xec\xa0\x95\xec\x9d\x84 \xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x96\xb4\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94 \xeb\xa6\xac\xed\x94\x8c\xeb\xa0\x89\xec\x85\x98 \xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4\n" },
#endif
		{ "ModuleRelativePath", "Public/Mov_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\x84\xec\x88\x98\xea\xb3\xbc\xec\xa0\x9c 4. \xec\x86\x8d\xeb\x8f\x84 \xeb\xb3\x80\xea\xb2\xbd\xec\x9d\xb4 \xec\x8b\xa4\xec\x8b\x9c\xea\xb0\x84 \xeb\xb0\x98\xec\x9d\x91 \xeb\x90\x98\xeb\x82\x98 --> \xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \xec\x88\x98\xec\xa0\x95\xec\x9d\x84 \xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xec\x96\xb4\xec\x95\xbc\xed\x95\x98\xeb\x8a\x94 \xeb\xa6\xac\xed\x94\x8c\xeb\xa0\x89\xec\x85\x98 \xeb\xb3\x80\xec\x88\x98\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Plat_Mov" },
		{ "ModuleRelativePath", "Public/Mov_Obs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveDirection_MetaData[] = {
		{ "Category", "Plat_Mov" },
		{ "ModuleRelativePath", "Public/Mov_Obs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleTime_MetaData[] = {
		{ "Category", "Plat_Hide" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x82\xac\xeb\x9d\xbc\xec\xa7\x80\xea\xb3\xa0 \xeb\x82\x98\xed\x83\x80\xeb\x82\x98\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\x98\xeb\x8a\x94 \xeb\xb3\x80\xec\x88\x98 \xec\xb6\x94\xea\xb0\x80!\n" },
#endif
		{ "ModuleRelativePath", "Public/Mov_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x82\xac\xeb\x9d\xbc\xec\xa7\x80\xea\xb3\xa0 \xeb\x82\x98\xed\x83\x80\xeb\x82\x98\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xec\xa1\xb0\xec\xa0\x88\xed\x95\x98\xeb\x8a\x94 \xeb\xb3\x80\xec\x88\x98 \xec\xb6\x94\xea\xb0\x80!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenTime_MetaData[] = {
		{ "Category", "Plat_Hide" },
		{ "ModuleRelativePath", "Public/Mov_Obs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MoveDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VisibleTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HiddenTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMov_Obs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMov_Obs_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMov_Obs, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMov_Obs_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMov_Obs, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMov_Obs_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMov_Obs, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMov_Obs_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMov_Obs, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMov_Obs_Statics::NewProp_MoveDirection = { "MoveDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMov_Obs, MoveDirection), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveDirection_MetaData), NewProp_MoveDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMov_Obs_Statics::NewProp_VisibleTime = { "VisibleTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMov_Obs, VisibleTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleTime_MetaData), NewProp_VisibleTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMov_Obs_Statics::NewProp_HiddenTime = { "HiddenTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMov_Obs, HiddenTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenTime_MetaData), NewProp_HiddenTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMov_Obs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMov_Obs_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMov_Obs_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMov_Obs_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMov_Obs_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMov_Obs_Statics::NewProp_MoveDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMov_Obs_Statics::NewProp_VisibleTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMov_Obs_Statics::NewProp_HiddenTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMov_Obs_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMov_Obs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Report3class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMov_Obs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMov_Obs_Statics::ClassParams = {
	&AMov_Obs::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMov_Obs_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMov_Obs_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMov_Obs_Statics::Class_MetaDataParams), Z_Construct_UClass_AMov_Obs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMov_Obs()
{
	if (!Z_Registration_Info_UClass_AMov_Obs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMov_Obs.OuterSingleton, Z_Construct_UClass_AMov_Obs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMov_Obs.OuterSingleton;
}
template<> REPORT3CLASS_API UClass* StaticClass<AMov_Obs>()
{
	return AMov_Obs::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMov_Obs);
AMov_Obs::~AMov_Obs() {}
// End Class AMov_Obs

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_Mov_Obs_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMov_Obs, AMov_Obs::StaticClass, TEXT("AMov_Obs"), &Z_Registration_Info_UClass_AMov_Obs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMov_Obs), 4083301766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_Mov_Obs_h_3716826235(TEXT("/Script/Report3class"),
	Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_Mov_Obs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_Mov_Obs_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
