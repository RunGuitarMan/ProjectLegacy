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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass GA_Core_Aggro_Minion.GA_Core_Aggro_Minion_C
	 * Size -> 0x0010 (FullSize[0x0A60] - InheritedSize[0x0A50])
	 */
	class UGA_Core_Aggro_Minion_C : public UOrionAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                Tutorial_1v1_Core_Aggro_Minion;                          // 0x0A58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnStateInterrupted_10E34C73415AAD6945BE20A38E66C52B();
		void OnStateEnded_10E34C73415AAD6945BE20A38E66C52B();
		void K2_ActivateAbility();
		void OnStop_Bind();
		void ExecuteUbergraph_GA_Core_Aggro_Minion(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
