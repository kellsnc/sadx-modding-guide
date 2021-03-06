#pragma once

enum SonicActions : Uint8 {
	MD_SONIC_INIT, Act_Sonic_Init = MD_SONIC_INIT,
	MD_SONIC_STND, Act_Sonic_Stand = MD_SONIC_STND,
	MD_SONIC_WALK, Act_Sonic_Walk = MD_SONIC_WALK,
	MD_SONIC_1DWK, Act_Sonic_Path = MD_SONIC_1DWK,
	MD_SONIC_SPIN, Act_Sonic_Spindash = MD_SONIC_SPIN,
	MD_SONIC_SPDS, Act_Sonic_Roll = MD_SONIC_SPDS,
	MD_SONIC_LSDS, Act_Sonic_LightSpeedDash = MD_SONIC_LSDS,
	MD_SONIC_1DSP, Act_Sonic_DashSpeedPanel = MD_SONIC_1DSP,
	MD_SONIC_JUMP, Act_Sonic_Jump = MD_SONIC_JUMP,
	MD_SONIC_SPRG, Act_Sonic_Spring = MD_SONIC_SPRG,
	MD_SONIC_LNCH, Act_Sonic_Launch = MD_SONIC_LNCH,
	MD_SONIC_PARA, Act_Sonic_Paralyzed = MD_SONIC_PARA,
	MD_SONIC_FALL, Act_Sonic_Fall = MD_SONIC_FALL,
	MD_SONIC_STOP, Act_Sonic_Brake = MD_SONIC_STOP,
	MD_SONIC_SPAT, Act_Sonic_HomingAttack = MD_SONIC_SPAT,
	MD_SONIC_PUSH, Act_Sonic_Push = MD_SONIC_PUSH,
	MD_SONIC_DAMG, Act_Sonic_Damage = MD_SONIC_DAMG,
	MD_SONIC_BACK, Act_Sonic_Back = MD_SONIC_BACK,
	MD_SONIC_CRSH, Act_Sonic_Knocked = MD_SONIC_CRSH,
	MD_SONIC_SLID, Act_Sonic_Slide = MD_SONIC_SLID,
	MD_SONIC_PLON, Act_Sonic_ObjectControl = MD_SONIC_PLON,
	MD_SONIC_PICK, Act_Sonic_Pick = MD_SONIC_PICK,
	MD_SONIC_PUT_, Act_Sonic_Put = MD_SONIC_PUT_,
	MD_SONIC_HOLD, Act_Sonic_Hold = MD_SONIC_HOLD,
	MD_SONIC_TOCH, Act_Sonic_HoldTree = MD_SONIC_TOCH,
	MD_SONIC_HWLK, Act_Sonic_ObjectWalk = MD_SONIC_HWLK,
	MD_SONIC_THRW, Act_Sonic_Throw = MD_SONIC_THRW,
	MD_SONIC_HSTP, Act_Sonic_ObjectBrake = MD_SONIC_HSTP,
	MD_SONIC_HFLL, Act_Sonic_ObjectFall = MD_SONIC_HFLL,
	MD_SONIC_HJMP, Act_Sonic_ObjectJump = MD_SONIC_HJMP,
	MD_SONIC_HSPR, Act_Sonic_ObjectSpring = MD_SONIC_HSPR,
	MD_SONIC_HLNC, Act_Sonic_ObjectLaunched = MD_SONIC_HLNC,
	MD_SONIC_PULL, Act_Sonic_Pull = MD_SONIC_PULL,
	MD_SONIC_THRU, Act_Sonic_AirThrow = MD_SONIC_THRU,
	MD_SONIC_SHAK, Act_Sonic_ShakeTree = MD_SONIC_SHAK,
	MD_SONIC_ESHK, Act_Sonic_Shaken = MD_SONIC_ESHK,
	MD_SONIC_HGWT, Act_Sonic_MonkeyBars = MD_SONIC_HGWT,
	MD_SONIC_HGGO, Act_Sonic_MonkeyBarsOn = MD_SONIC_HGGO,
	MD_SONIC_LDWT, Act_Sonic_Ladder = MD_SONIC_LDWT,
	MD_SONIC_LDGO, Act_Sonic_LadderOn = MD_SONIC_LDGO,
	MD_SONIC_PNJP, Act_Sonic_JumpPanel = MD_SONIC_PNJP,
	MD_SONIC_PNWT, Act_Sonic_JumpPanelOn = MD_SONIC_PNWT,
	MD_SONIC_CAPT, Act_Sonic_Captured = MD_SONIC_CAPT,
	MD_SONIC_ICED, Act_Sonic_Frozen = MD_SONIC_ICED,
	MD_SONIC_LSA_, Act_Sonic_LightSpeedAttack = MD_SONIC_LSA_,
	MD_SONIC_S3A2_CART, Act_Sonic_BumperCar = MD_SONIC_S3A2_CART,
	MD_SONIC_S4A2_WALK, Act_Sonic_SHBuildingRun = MD_SONIC_S4A2_WALK,
	MD_SONIC_S4A2_SPDS, Act_Sonic_SHBuildingRoll = MD_SONIC_S4A2_SPDS,
	MD_SONIC_S4A2_FALL, Act_Sonic_SHBuildingFall = MD_SONIC_S4A2_FALL,
	MD_SONIC_S4A2_JUMP, Act_Sonic_SHBuildingJump = MD_SONIC_S4A2_JUMP,
	MD_SONIC_S4A2_CRSH, Act_Sonic_SHBuildingHurt = MD_SONIC_S4A2_CRSH,
	MD_SONIC_S6A1_WAIT, Act_Sonic_SkyDeckCyl = MD_SONIC_S6A1_WAIT,
	MD_SONIC_S6A1_SLID, Act_Sonic_SkyDeckCylDown = MD_SONIC_S6A1_SLID,
	MD_SONIC_S6A1_LROT, Act_Sonic_SkyDeckCylLeft = MD_SONIC_S6A1_LROT,
	MD_SONIC_S6A1_RROT, Act_Sonic_SkyDeckCylRight = MD_SONIC_S6A1_RROT,
	MD_SONIC_S8A2_WAIT, Act_Sonic_IcicleHang = MD_SONIC_S8A2_WAIT,
	MD_SONIC_S8A2_SLIP, Act_Sonic_IcicleSlip = MD_SONIC_S8A2_SLIP,
	MD_SONIC_S8A2_LROT, Act_Sonic_IcicleRotL = MD_SONIC_S8A2_LROT,
	MD_SONIC_S8A2_RROT, Act_Sonic_IcicleRotR = MD_SONIC_S8A2_RROT,
	MD_SONIC_S8A2_JUMP, Act_Sonic_IcicleJump = MD_SONIC_S8A2_JUMP,
	MD_SONIC_S8A2_CLMB, Act_Sonic_IcicleClimb = MD_SONIC_S8A2_CLMB,
	MD_SONIC_S8A2_FLY_, Act_Sonic_IcicleLaunch = MD_SONIC_S8A2_FLY_,
	MD_SONIC_S8A3_SLID, Act_Sonic_BoardSlide = MD_SONIC_S8A3_SLID,
	MD_SONIC_S8A3_FSLD, Act_Sonic_BoardSlideF = MD_SONIC_S8A3_FSLD,
	MD_SONIC_S8A3_BRAK, Act_Sonic_BoardBrake = MD_SONIC_S8A3_BRAK,
	MD_SONIC_S8A3_FALL, Act_Sonic_BoardFall = MD_SONIC_S8A3_FALL,
	MD_SONIC_S8A3_JUMP, Act_Sonic_BoardJump = MD_SONIC_S8A3_JUMP,
	MD_SONIC_S8A3_SPEC, Act_Sonic_BoardTrick = MD_SONIC_S8A3_SPEC,
	MD_SONIC_S8A3_CRSH, Act_Sonic_BoardHurt = MD_SONIC_S8A3_CRSH,
	MD_SONIC_S9A1_PINB, Act_Sonic_PinBall = MD_SONIC_S9A1_PINB,
	MD_SONIC_S9A1_PINF, Act_Sonic_PinBallFall = MD_SONIC_S9A1_PINF,
	MD_SONIC_CNADE_START, Act_Sonic_PetStart = MD_SONIC_CNADE_START,
	MD_SONIC_CNADE_LOOP, Act_Sonic_Pet = MD_SONIC_CNADE_LOOP,
	MD_SONIC_CNADE_END, Act_Sonic_PetStop = MD_SONIC_CNADE_END,
	MD_SONIC_CFUE, Act_Sonic_Whistle = MD_SONIC_CFUE,
	MD_SUPER_STND, Act_SuperSonic_Stand = MD_SUPER_STND,
	MD_SUPER_WALK, Act_SuperSonic_Walk = MD_SUPER_WALK,
	MD_SUPER_1DWK, Act_SuperSonic_Path = MD_SUPER_1DWK,
	MD_SUPER_FALL, Act_SuperSonic_Fall = MD_SUPER_FALL,
	MD_SUPER_LNCH, Act_SuperSonic_Launched = MD_SUPER_LNCH,
	MD_SUPER_SPRG, Act_SuperSonic_Spring = MD_SUPER_SPRG,
	MD_SUPER_SPAT, Act_SuperSonic_Homing = MD_SUPER_SPAT,
	MD_SUPER_JUMP, Act_SuperSonic_Jump = MD_SUPER_JUMP,
	MD_SONIC_POSE, Act_Sonic_Shower = MD_SONIC_POSE,
	MD_SONIC_EVENT, Act_Sonic_Event = MD_SONIC_EVENT,
	MD_SONIC_DOZA, Act_Sonic_Drown = MD_SONIC_DOZA,
	MD_SONIC_KILL, Act_Sonic_Death = MD_SONIC_KILL,
	MD_SONIC_EDIT, Act_Sonic_Debug = MD_SONIC_EDIT
};

enum SonicAnimations : Uint16 {
	Anm_Sonic_Stand,
	Anm_Sonic_StandToStance,
	Anm_Sonic_Stance,
	Anm_Sonic_LookAround,
	Anm_Sonic_BoredComment1,
	Anm_Sonic_BoredComment2,
	Anm_Sonic_BoredCommentToStand,
	Anm_Sonic_StandUpwardSlope,
	Anm_Sonic_StandDownwardSlope,
	Anm_Sonic_Walk1,
	Anm_Sonic_Walk2,
	Anm_Sonic_Walk3,
	Anm_Sonic_Run1,
	Anm_Sonic_Run2,
	Anm_Sonic_JumpOrSpin,
	Anm_Sonic_Roll,
	Anm_Sonic_Spring,
	Anm_Sonic_SpringToFall,
	Anm_Sonic_Fall,
	Anm_Sonic_Land,
	Anm_Sonic_Brake,
	Anm_Sonic_PushStart,
	Anm_Sonic_Push,
	Anm_Sonic_Damage,
	Anm_Sonic_DamageRecover,
	Anm_Sonic_Brake2,
	Anm_Sonic_Updraft,
	Anm_Sonic_HitWall,
	Anm_Sonic_HitWallRecover,
	Anm_Sonic_Uncurl,
	Anm_Sonic_TurnAround,
	Anm_Sonic_Skidding,
	Anm_Sonic_SpinBall,
	Anm_Sonic_PickUp,
	Anm_Sonic_ObjectRun,
	Anm_Sonic_ObjectBrake,
	Anm_Sonic_ObjectBrakeTurn,
	Anm_Sonic_ObjectIdle,
	Anm_Sonic_ObjectWalk,
	Anm_Sonic_TrampolineFlight1,
	Anm_Sonic_TrampolineBackflip1,
	Anm_Sonic_TrampolineFlight2,
	Anm_Sonic_TrampolineBackflip2,
	Anm_Sonic_TrampolineFlight3,
	Anm_Sonic_TrampolineLand1,
	Anm_Sonic_TrampolineLand2,
	Anm_Sonic_BuildingHurt,
	Anm_Sonic_Hang,
	Anm_Sonic_Pull,
	Anm_Sonic_ShakeTree,
	Anm_Sonic_Pick,
	Anm_Sonic_Shake,
	Anm_Sonic_ShakeStop,
	Anm_Sonic_StandToPick,
	Anm_Sonic_HoldTree,
	Anm_Sonic_ObjectJump,
	Anm_Sonic_ObjectJumpToFall,
	Anm_Sonic_ObjectFall,
	Anm_Sonic_ObjectLand,
	Anm_Sonic_ObjectThrow,
	Anm_Sonic_ObjectToss,
	Anm_Sonic_AirThrow,
	Anm_Sonic_AirToss,
	Anm_Sonic_ObjectPut,
	Anm_Sonic_LightDashFlight,
	Anm_Sonic_BumperCar,
	Anm_Sonic_MonkeyBarsMove,
	Anm_Sonic_MonkeyBarsHoldLeft,
	Anm_Sonic_MonkeyBarsHoldRight,
	Anm_Sonic_LadderClimb,
	Anm_Sonic_Cannon,
	Anm_Sonic_IceSlip,
	Anm_Sonic_JumpPanelFlip,
	Anm_Sonic_JumpPanelFlight,
	Anm_Sonic_JumpPanelStand,
	Anm_Sonic_Win,
	Anm_Sonic_WinToStand,
	Anm_Sonic_StandToRocket,
	Anm_Sonic_Rocket,
	Anm_Sonic_HorizontalRocket,
	Anm_Sonic_VerticalRocket,
	Anm_Sonic_Captured, // Egg Keeper enemy
	Anm_Sonic_Frozen, // Ice Ball enemy
	Anm_Sonic_Bowling,
	Anm_Sonic_Bubble,
	Anm_Sonic_Drown,
	Anm_Sonic_DeathAir,
	Anm_Sonic_DeathGround,
	Anm_Sonic_Waterslide,
	Anm_Sonic_SDCylinderGrab,
	Anm_Sonic_SDCylinderLeft,
	Anm_Sonic_SDCylinderRight,
	Anm_Sonic_SDCylinderSlide,
	Anm_Sonic_SDCylinderSlideToGrab,
	Anm_Sonic_IcicleHold,
	Anm_Sonic_IcicleSlide,
	Anm_Sonic_IcicleJump,
	Anm_Sonic_IcicleFlight,
	Anm_Sonic_IcicleLatching,
	Anm_Sonic_IcicleLeft,
	Anm_Sonic_IcicleRight,
	Anm_Sonic_IcicleClimb,
	Anm_Sonic_Board,
	Anm_Sonic_BoardBrakeRight,
	Anm_Sonic_BoardBrakeLeft,
	Anm_Sonic_BoardJumpFall,
	Anm_Sonic_Jump,
	Anm_Sonic_LeanRight,
	Anm_Sonic_LeanLeft,
	Anm_Sonic_BoardHitLR,
	Anm_Sonic_BoardHitRL,
	Anm_Sonic_BoardBumpFall,
	Anm_Sonic_BoardFall,
	Anm_Sonic_BoardHit,
	Anm_Sonic_BoardStand,
	Anm_Sonic_BoardBalance,
	Anm_Sonic_BoardTrick1,
	Anm_Sonic_BoardTrick2,
	Anm_Sonic_BoardTrick3,
	Anm_Sonic_BoardTrick4,
	Anm_Sonic_BoardTrickSpin1,
	Anm_Sonic_BoardTrickSpin2,
	Anm_Sonic_BoardTrickSpinToFall,
	Anm_Sonic_BoardTrickRampJump,
	Anm_Sonic_BoardCrouch,
	Anm_Sonic_PinBall,
	Anm_Sonic_Shower1,
	Anm_Sonic_Shower2,
	Anm_Sonic_Shower3,
	Anm_Sonic_ShakeOffWater,
	Anm_Sonic_PetChaoStart,
	Anm_Sonic_PetChao,
	Anm_Sonic_PetChaoStop,
	Anm_Sonic_Whistle,
	Anm_SuperSonic_Stand,
	Anm_SuperSonic_StandToMove,
	Anm_SuperSonic_Move1,
	Anm_SuperSonic_Move2,
	Anm_SuperSonic_Move3,
	Anm_SuperSonic_Spring,
	Anm_SuperSonic_SpringFall,
	Anm_SuperSonic_Fall,
	Anm_SuperSonic_Land,
	Anm_SuperSonic_Win,
	Anm_SuperSonic_WinToStand,
	Anm_SuperSonic_Jump,
	Anm_MetalSonic_Hover
};