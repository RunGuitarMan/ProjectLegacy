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
	 * 		Name   -> PredefinedFunction UGA_Card_Blink_Charm_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Card_Blink_Charm_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Card_Blink_Charm.GA_Card_Blink_Charm_C");
		return ptr;
	}

}


