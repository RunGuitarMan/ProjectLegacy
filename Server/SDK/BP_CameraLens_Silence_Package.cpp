﻿/**
 * Name: Paragon
 * Version: v34
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CameraLens_Silence.BP_CameraLens_Silence_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_CameraLens_Silence_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraLens_Silence.BP_CameraLens_Silence_C.UserConstructionScript");
		
		ABP_CameraLens_Silence_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CameraLens_Silence.BP_CameraLens_Silence_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_CameraLens_Silence_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraLens_Silence.BP_CameraLens_Silence_C.ReceiveBeginPlay");
		
		ABP_CameraLens_Silence_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function BP_CameraLens_Silence.BP_CameraLens_Silence_C.ExecuteUbergraph_BP_CameraLens_Silence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CameraLens_Silence_C::ExecuteUbergraph_BP_CameraLens_Silence(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CameraLens_Silence.BP_CameraLens_Silence_C.ExecuteUbergraph_BP_CameraLens_Silence");
		
		ABP_CameraLens_Silence_C_ExecuteUbergraph_BP_CameraLens_Silence_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CameraLens_Silence_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CameraLens_Silence_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraLens_Silence.BP_CameraLens_Silence_C");
		return ptr;
	}

}


