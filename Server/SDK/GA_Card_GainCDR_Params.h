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
	 * Function GA_Card_GainCDR.GA_Card_GainCDR_C.OnApplied_4F896E9F4F802B755F71D3BF01A010A0
	 */
	struct UGA_Card_GainCDR_C_OnApplied_4F896E9F4F802B755F71D3BF01A010A0_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGameplayEffectSpecHandle                           SpecHandle;                                              // 0x0008(0x0018)  (Parm)
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0020(0x0008)  (Parm)
	};

	/**
	 * Function GA_Card_GainCDR.GA_Card_GainCDR_C.K2_ActivateAbility
	 */
	struct UGA_Card_GainCDR_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Card_GainCDR.GA_Card_GainCDR_C.ExecuteUbergraph_GA_Card_GainCDR
	 */
	struct UGA_Card_GainCDR_C_ExecuteUbergraph_GA_Card_GainCDR_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
