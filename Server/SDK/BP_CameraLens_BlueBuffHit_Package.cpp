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
	 * 		Name   -> PredefinedFunction ABP_CameraLens_BlueBuffHit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CameraLens_BlueBuffHit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CameraLens_BlueBuffHit.BP_CameraLens_BlueBuffHit_C");
		return ptr;
	}

}


