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
	 * BlueprintGeneratedClass GC_DamageReflectShield.GC_DamageReflectShield_C
	 * Size -> 0x0000 (FullSize[0x04C0] - InheritedSize[0x04C0])
	 */
	class UGC_DamageReflectShield_C : public UOrionGameplayCueNotify_Burst
	{
	public:
		void OnBurst(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters, class UParticleSystemComponent* BurstParticleSystem, TArray<class UParticleSystemComponent*> AdditionalParticleSystems, class UCameraShake* BurstCameraShakeInstance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
