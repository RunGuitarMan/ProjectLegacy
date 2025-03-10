﻿#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct LightPropagationVolumeRuntime.LightPropagationVolumeSettings
	 * Size -> 0x0038
	 */
	struct FLightPropagationVolumeSettings
	{
	public:
		bool                                                       bOverride_LPVIntensity : 1;                              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVDirectionalOcclusionIntensity : 1;          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVDirectionalOcclusionRadius : 1;             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVDiffuseOcclusionExponent : 1;               // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVSpecularOcclusionExponent : 1;              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVDiffuseOcclusionIntensity : 1;              // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVSpecularOcclusionIntensity : 1;             // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVSize : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVSecondaryOcclusionIntensity : 1;            // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVSecondaryBounceIntensity : 1;               // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVGeometryVolumeBias : 1;                     // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVVplInjectionBias : 1;                       // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverride_LPVEmissiveInjectionIntensity : 1;             // 0x0001(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GG9[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LPVIntensity;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVVplInjectionBias;                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSize;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSecondaryOcclusionIntensity;                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSecondaryBounceIntensity;                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVGeometryVolumeBias;                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVEmissiveInjectionIntensity;                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDirectionalOcclusionIntensity;                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDirectionalOcclusionRadius;                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDiffuseOcclusionExponent;                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSpecularOcclusionExponent;                            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVDiffuseOcclusionIntensity;                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LPVSpecularOcclusionIntensity;                           // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
