// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Report3class/Public/Fall_Obs.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFall_Obs() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
REPORT3CLASS_API UClass* Z_Construct_UClass_AFall_Obs();
REPORT3CLASS_API UClass* Z_Construct_UClass_AFall_Obs_NoRegister();
UPackage* Z_Construct_UPackage__Script_Report3class();
// End Cross Module References

// Begin Class AFall_Obs Function OnPlayerStep
struct Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics
{
	struct Fall_Obs_eventOnPlayerStep_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xec\x98\xa4\xeb\xb2\x84\xeb\xa0\x99. \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 Step\xed\x95\x98\xeb\xa9\xb4.\n" },
#endif
		{ "ModuleRelativePath", "Public/Fall_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xb2\x84\xeb\xa0\x99. \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 Step\xed\x95\x98\xeb\xa9\xb4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fall_Obs_eventOnPlayerStep_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fall_Obs_eventOnPlayerStep_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fall_Obs_eventOnPlayerStep_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fall_Obs_eventOnPlayerStep_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Fall_Obs_eventOnPlayerStep_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Fall_Obs_eventOnPlayerStep_Parms), &Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fall_Obs_eventOnPlayerStep_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFall_Obs, nullptr, "OnPlayerStep", nullptr, nullptr, Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::Fall_Obs_eventOnPlayerStep_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::Fall_Obs_eventOnPlayerStep_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFall_Obs_OnPlayerStep()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFall_Obs_OnPlayerStep_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFall_Obs::execOnPlayerStep)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerStep(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AFall_Obs Function OnPlayerStep

// Begin Class AFall_Obs
void AFall_Obs::StaticRegisterNativesAFall_Obs()
{
	UClass* Class = AFall_Obs::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayerStep", &AFall_Obs::execOnPlayerStep },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFall_Obs);
UClass* Z_Construct_UClass_AFall_Obs_NoRegister()
{
	return AFall_Obs::StaticClass();
}
struct Z_Construct_UClass_AFall_Obs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xed\x94\x8c\xeb\x9f\xac\xea\xb7\xb8\xec\x9d\xb8\xeb\x8f\x84 \xeb\x82\x98\xec\x9d\xb4\xec\x95\x84\xea\xb0\x80\xeb\x9d\xbc\xea\xb0\x80 \xed\x95\x84\xec\x9a\x94\xed\x95\xa0\xea\xb9\x8c? \xed\x95\x9c\xeb\xb2\x88 \xeb\x82\x98\xec\x9d\xb4\xec\x95\x84\xea\xb0\x80\xeb\x9d\xbc \xec\x84\xa4\xec\xa0\x95\xed\x95\x9c \xeb\x8b\xa4\xec\x9d\x8c \xec\x8d\xa8\xeb\xb3\xb4\xea\xb3\xa0, \xec\x82\xad\xec\xa0\x9c\xed\x95\x9c \xeb\x8b\xa4\xec\x9d\x8c \xed\x95\xb4\xeb\xb3\xb4\xea\xb3\xa0.\n" },
#endif
		{ "IncludePath", "Fall_Obs.h" },
		{ "ModuleRelativePath", "Public/Fall_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\x9f\xac\xea\xb7\xb8\xec\x9d\xb8\xeb\x8f\x84 \xeb\x82\x98\xec\x9d\xb4\xec\x95\x84\xea\xb0\x80\xeb\x9d\xbc\xea\xb0\x80 \xed\x95\x84\xec\x9a\x94\xed\x95\xa0\xea\xb9\x8c? \xed\x95\x9c\xeb\xb2\x88 \xeb\x82\x98\xec\x9d\xb4\xec\x95\x84\xea\xb0\x80\xeb\x9d\xbc \xec\x84\xa4\xec\xa0\x95\xed\x95\x9c \xeb\x8b\xa4\xec\x9d\x8c \xec\x8d\xa8\xeb\xb3\xb4\xea\xb3\xa0, \xec\x82\xad\xec\xa0\x9c\xed\x95\x9c \xeb\x8b\xa4\xec\x9d\x8c \xed\x95\xb4\xeb\xb3\xb4\xea\xb3\xa0." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(VisibleAnywhere, Category = \"Components\")\n//USphereComponent* CollisionComp;\n//\xec\xb6\xa9\xeb\x8f\x8c \xec\x95\x88 \xeb\x84\xa3\xec\x96\xb4\xeb\x8f\x84 \xeb\x90\x98\xeb\x82\x98? \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 \xeb\xb0\x9f\xeb\x8b\xa4 = \xec\xb6\xa9\xeb\x8f\x8c \xec\x9d\xb4\xed\x9b\x84 \xeb\x82\x99\xed\x95\x98 \xec\x8b\x9c\xec\x9e\x91\xec\x9d\xb8\xeb\x8d\xb0?\n// => \xec\x9d\xb4\xeb\xaf\xb8 MeshComp\xeb\xa1\x9c \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x99\x80 \xec\x9e\x91\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 \xeb\xac\xbc\xeb\xa6\xac(Block)\xec\x9d\xb4 \xed\x8f\xac\xed\x95\xa8. \xec\xa0\x91\xec\xb4\x89\xec\x9d\x80 TriggerBox\xea\xb0\x80 \xeb\x8c\x80\xec\xb2\xb4.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fall_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, Category = \"Components\")\nUSphereComponent* CollisionComp;\n\xec\xb6\xa9\xeb\x8f\x8c \xec\x95\x88 \xeb\x84\xa3\xec\x96\xb4\xeb\x8f\x84 \xeb\x90\x98\xeb\x82\x98? \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 \xeb\xb0\x9f\xeb\x8b\xa4 = \xec\xb6\xa9\xeb\x8f\x8c \xec\x9d\xb4\xed\x9b\x84 \xeb\x82\x99\xed\x95\x98 \xec\x8b\x9c\xec\x9e\x91\xec\x9d\xb8\xeb\x8d\xb0?\n => \xec\x9d\xb4\xeb\xaf\xb8 MeshComp\xeb\xa1\x9c \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x99\x80 \xec\x9e\x91\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 \xeb\xac\xbc\xeb\xa6\xac(Block)\xec\x9d\xb4 \xed\x8f\xac\xed\x95\xa8. \xec\xa0\x91\xec\xb4\x89\xec\x9d\x80 TriggerBox\xea\xb0\x80 \xeb\x8c\x80\xec\xb2\xb4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x8a\x94, \xec\x96\x98\xeb\xa1\x9c. \xed\x8a\xb8\xeb\xa6\xac\xea\xb1\xb0 => \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 \xeb\xb0\x9f\xec\x9d\x84 \xec\x8b\x9c.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fall_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8a\x94, \xec\x96\x98\xeb\xa1\x9c. \xed\x8a\xb8\xeb\xa6\xac\xea\xb1\xb0 => \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xea\xb0\x80 \xeb\xb0\x9f\xec\x9d\x84 \xec\x8b\x9c." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallDelay_MetaData[] = {
		{ "Category", "Plat_Fall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x8f\x84\xec\xa0\x84\xea\xb3\xbc\xec\xa0\x9c : 1. \xec\x8b\x9c\xea\xb0\x84 \xea\xb8\xb0\xeb\xb0\x98 \xeb\xa1\x9c\xec\xa7\x81 \xea\xb5\xac\xed\x98\x84. FTimerHandle\xec\x9d\x80 private\xec\x97\x90.\n" },
#endif
		{ "ModuleRelativePath", "Public/Fall_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8f\x84\xec\xa0\x84\xea\xb3\xbc\xec\xa0\x9c : 1. \xec\x8b\x9c\xea\xb0\x84 \xea\xb8\xb0\xeb\xb0\x98 \xeb\xa1\x9c\xec\xa7\x81 \xea\xb5\xac\xed\x98\x84. FTimerHandle\xec\x9d\x80 private\xec\x97\x90." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallSpeed_MetaData[] = {
		{ "Category", "Plat_Fall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Trigger \xeb\xb0\x9c\xeb\x8f\x99 \xed\x9b\x84(\xeb\xb0\x9f\xec\x9d\x80 \xed\x9b\x84) Timer. \xeb\xb0\x9f\xea\xb3\xa0 \xeb\x82\x98\xec\x84\x9c \xeb\x96\xa8\xec\x96\xb4\xec\xa7\x80\xea\xb8\xb0\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\x8b\x9c\xea\xb0\x84(\xec\xb4\x88)\n" },
#endif
		{ "ModuleRelativePath", "Public/Fall_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger \xeb\xb0\x9c\xeb\x8f\x99 \xed\x9b\x84(\xeb\xb0\x9f\xec\x9d\x80 \xed\x9b\x84) Timer. \xeb\xb0\x9f\xea\xb3\xa0 \xeb\x82\x98\xec\x84\x9c \xeb\x96\xa8\xec\x96\xb4\xec\xa7\x80\xea\xb8\xb0\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\x8b\x9c\xea\xb0\x84(\xec\xb4\x88)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xeb\x96\xa8\xec\x96\xb4\xec\xa7\x80\xeb\x8a\x94 \xec\x86\x8d\xeb\x8f\x84.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fall_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x96\xa8\xec\x96\xb4\xec\xa7\x80\xeb\x8a\x94 \xec\x86\x8d\xeb\x8f\x84." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Plat_Fall" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// MaxDistance\xeb\x8a\x94 \xed\x95\x84\xec\x9a\x94\xed\x95\x98\xec\xa7\x80 \xec\x95\x8a\xeb\x82\x98? \xeb\x8b\xa4 \xeb\x96\xa8\xec\x96\xb4\xec\xa7\x84 \xeb\x92\xa4, \xed\x98\xb9\xec\x9d\x80 \xeb\xb0\x94\xeb\x8b\xa5\xea\xb3\xbc \xeb\xa7\x9e\xeb\x8b\xbf\xec\x9d\x80 \xeb\x92\xa4 \xec\x82\xac\xeb\x9d\xbc\xec\xa7\x80\xea\xb2\x8c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x82\x98?\n" },
#endif
		{ "ModuleRelativePath", "Public/Fall_Obs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MaxDistance\xeb\x8a\x94 \xed\x95\x84\xec\x9a\x94\xed\x95\x98\xec\xa7\x80 \xec\x95\x8a\xeb\x82\x98? \xeb\x8b\xa4 \xeb\x96\xa8\xec\x96\xb4\xec\xa7\x84 \xeb\x92\xa4, \xed\x98\xb9\xec\x9d\x80 \xeb\xb0\x94\xeb\x8b\xa5\xea\xb3\xbc \xeb\xa7\x9e\xeb\x8b\xbf\xec\x9d\x80 \xeb\x92\xa4 \xec\x82\xac\xeb\x9d\xbc\xec\xa7\x80\xea\xb2\x8c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x82\x98?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallDelay;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFall_Obs_OnPlayerStep, "OnPlayerStep" }, // 947022720
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFall_Obs>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFall_Obs_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFall_Obs, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFall_Obs_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFall_Obs, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFall_Obs_Statics::NewProp_FallDelay = { "FallDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFall_Obs, FallDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallDelay_MetaData), NewProp_FallDelay_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFall_Obs_Statics::NewProp_FallSpeed = { "FallSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFall_Obs, FallSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallSpeed_MetaData), NewProp_FallSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFall_Obs_Statics::NewProp_NiagaraComp = { "NiagaraComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFall_Obs, NiagaraComp), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NiagaraComp_MetaData), NewProp_NiagaraComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFall_Obs_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFall_Obs, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistance_MetaData), NewProp_MaxDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFall_Obs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFall_Obs_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFall_Obs_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFall_Obs_Statics::NewProp_FallDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFall_Obs_Statics::NewProp_FallSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFall_Obs_Statics::NewProp_NiagaraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFall_Obs_Statics::NewProp_MaxDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFall_Obs_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFall_Obs_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Report3class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFall_Obs_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFall_Obs_Statics::ClassParams = {
	&AFall_Obs::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFall_Obs_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFall_Obs_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFall_Obs_Statics::Class_MetaDataParams), Z_Construct_UClass_AFall_Obs_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFall_Obs()
{
	if (!Z_Registration_Info_UClass_AFall_Obs.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFall_Obs.OuterSingleton, Z_Construct_UClass_AFall_Obs_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFall_Obs.OuterSingleton;
}
template<> REPORT3CLASS_API UClass* StaticClass<AFall_Obs>()
{
	return AFall_Obs::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFall_Obs);
AFall_Obs::~AFall_Obs() {}
// End Class AFall_Obs

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_Fall_Obs_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFall_Obs, AFall_Obs::StaticClass, TEXT("AFall_Obs"), &Z_Registration_Info_UClass_AFall_Obs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFall_Obs), 325792686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_Fall_Obs_h_3129334874(TEXT("/Script/Report3class"),
	Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_Fall_Obs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_UE_Cpp_3D_Class_Report3class_Source_Report3class_Public_Fall_Obs_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
