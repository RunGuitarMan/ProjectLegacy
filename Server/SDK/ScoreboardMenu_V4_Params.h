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
	 * Function ScoreboardMenu-V4.ScoreboardMenu-V4_C.On Open
	 */
	struct UScoreboardMenuV4_C_OnOpen_Params
	{	};

	/**
	 * Function ScoreboardMenu-V4.ScoreboardMenu-V4_C.On Close
	 */
	struct UScoreboardMenuV4_C_OnClose_Params
	{	};

	/**
	 * Function ScoreboardMenu-V4.ScoreboardMenu-V4_C.ExecuteUbergraph_ScoreboardMenu-V4
	 */
	struct UScoreboardMenuV4_C_ExecuteUbergraph_ScoreboardMenuV4_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QSTK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
