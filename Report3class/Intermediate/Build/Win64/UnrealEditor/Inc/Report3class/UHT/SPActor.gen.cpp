// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report3class/Public/SPActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
REPORT3CLASS_API UClass* Z_Construct_UClass_ASPActor();
REPORT3CLASS_API UClass* Z_Construct_UClass_ASPActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report3class();
// End Cross Module References

// Begin Class ASPActor
void ASPActor::StaticRegisterNativesASPActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASPActor);
UClass* Z_Construct_UClass_ASPActor_NoRegister()
{
	return ASPActor::StaticClass();
}
struct Z_Construct_UClass_ASPActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SPActor.h" },
		{ "ModuleRelativePath", "Public/SPActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlatformClassToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 1. \xeb\xb3\x80\xec\x88\x98 \xea\xb0\x9c\xeb\xb0\xa9 : \xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xeb\x94\x94\xed\x85\x8c\xec\x9d\xbc \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \"\xec\x96\xb4\xeb\x96\xa4 \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 \xeb\xb0\x9c\xed\x8c\x90\xec\x9d\x84 \xec\x8a\xa4\xed\x8f\xb0\xed\x95\xa0\xea\xb9\x8c\".\n" },
#endif
		{ "ModuleRelativePath", "Public/SPActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "1. \xeb\xb3\x80\xec\x88\x98 \xea\xb0\x9c\xeb\xb0\xa9 : \xec\x97\x90\xeb\x94\x94\xed\x84\xb0 \xeb\x94\x94\xed\x85\x8c\xec\x9d\xbc \xed\x8c\xa8\xeb\x84\x90\xec\x97\x90\xec\x84\x9c \"\xec\x96\xb4\xeb\x96\xa4 \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8 \xeb\xb0\x9c\xed\x8c\x90\xec\x9d\x84 \xec\x8a\xa4\xed\x8f\xb0\xed\x95\xa0\xea\xb9\x8c\"." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfPlatforms_MetaData[] = {
		{ "Category", "Spawning" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// 2. \xea\xb0\x9c\xec\x88\x98 \xec\xa7\x80\xec\xa0\x95 : \xec\xb4\x9d \xeb\xaa\x87 \xea\xb0\x9c\xec\x9d\x98 \xeb\x9e\x9c\xeb\x8d\xa4 \xeb\xb0\x9c\xed\x8c\x90.\n" },
#endif
		{ "ModuleRelativePath", "Public/SPActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "2. \xea\xb0\x9c\xec\x88\x98 \xec\xa7\x80\xec\xa0\x95 : \xec\xb4\x9d \xeb\xaa\x87 \xea\xb0\x9c\xec\x9d\x98 \xeb\x9e\x9c\xeb\x8d\xa4 \xeb\xb0\x9c\xed\x8c\x90." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BarrClassToSpawn_MetaData[] = {
		{ "Category", "Spawning|OBarr" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x83\x84\xeb\xa7\x89 \xeb\x9e\x9c\xeb\x8d\xa4.\n" },
#endif
		{ "ModuleRelativePath", "Public/SPActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x83\x84\xeb\xa7\x89 \xeb\x9e\x9c\xeb\x8d\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfBarr_MetaData[] = {
		{ "Category", "Spawning|OBarr" },
		{ "ModuleRelativePath", "Public/SPActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlatformClassToSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfPlatforms;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BarrClassToSpawn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfBarr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASPActor_Statics::NewProp_PlatformClassToSpawn = { "PlatformClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPActor, PlatformClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlatformClassToSpawn_MetaData), NewProp_PlatformClassToSpawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASPActor_Statics::NewProp_NumberOfPlatforms = { "NumberOfPlatforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPActor, NumberOfPlatforms), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfPlatforms_MetaData), NewProp_NumberOfPlatforms_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASPActor_Statics::NewProp_BarrClassToSpawn = { "BarrClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPActor, BarrClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BarrClassToSpawn_MetaData), NewProp_BarrClassToSpawn_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASPActor_Statics::NewProp_NumberOfBarr = { "NumberOfBarr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASPActor, NumberOfBarr), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfBarr_MetaData), NewProp_NumberOfBarr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPActor_Statics::NewProp_PlatformClassToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPActor_Statics::NewProp_NumberOfPlatforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPActor_Statics::NewProp_BarrClassToSpawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPActor_Statics::NewProp_NumberOfBarr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASPActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Report3class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASPActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASPActor_Statics::ClassParams = {
	&ASPActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASPActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASPActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASPActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASPActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASPActor()
{
	if (!Z_Registration_Info_UClass_ASPActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASPActor.OuterSingleton, Z_Construct_UClass_ASPActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASPActor.OuterSingleton;
}
template<> REPORT3CLASS_API UClass* StaticClass<ASPActor>()
{
	return ASPActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASPActor);
ASPActor::~ASPActor() {}
// End Class ASPActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_SPActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASPActor, ASPActor::StaticClass, TEXT("ASPActor"), &Z_Registration_Info_UClass_ASPActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASPActor), 3138623247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_SPActor_h_961148048(TEXT("/Script/Report3class"),
	Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_SPActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_SPActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
