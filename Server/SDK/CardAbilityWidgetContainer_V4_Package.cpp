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
	 * 		Name   -> Function CardAbilityWidgetContainer-V4.CardAbilityWidgetContainer-V4_C.InitInHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UOrionBaseHUDWidget*                         Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardAbilityWidgetContainerV4_C::InitInHUD(class UOrionBaseHUDWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidgetContainer-V4.CardAbilityWidgetContainer-V4_C.InitInHUD");
		
		UCardAbilityWidgetContainerV4_C_InitInHUD_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityWidgetContainer-V4.CardAbilityWidgetContainer-V4_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UCardAbilityWidgetContainerV4_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidgetContainer-V4.CardAbilityWidgetContainer-V4_C.Construct");
		
		UCardAbilityWidgetContainerV4_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CardAbilityWidgetContainer-V4.CardAbilityWidgetContainer-V4_C.ExecuteUbergraph_CardAbilityWidgetContainer-V4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCardAbilityWidgetContainerV4_C::ExecuteUbergraph_CardAbilityWidgetContainerV4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CardAbilityWidgetContainer-V4.CardAbilityWidgetContainer-V4_C.ExecuteUbergraph_CardAbilityWidgetContainer-V4");
		
		UCardAbilityWidgetContainerV4_C_ExecuteUbergraph_CardAbilityWidgetContainerV4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCardAbilityWidgetContainerV4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCardAbilityWidgetContainerV4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CardAbilityWidgetContainer_V4.CardAbilityWidgetContainer-V4_C");
		return ptr;
	}

}


