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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGE_CanShopWhileDead_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_CanShopWhileDead_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_CanShopWhileDead.GE_CanShopWhileDead_C");
		return ptr;
	}

}


