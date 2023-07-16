#include "Offsets.h"

Offsets::Offsets() {};

int Offsets::deref_pointer_in_game_space_fn = 0X10169C0; //ok 13.13

int Offsets::GameTime = 0x521EE00; //0x51E8C70; //ok 13.13

int Offsets::HudInstance = 0x2173230; //0x213DB58; //ok 13.13

int Offsets::ObjectManager = 0x2173220; //0x213DB48;  //ok 13.13
int Offsets::LocalPlayer = 0x522B768; //0x51F52D0;  //ok 13.13
int Offsets::UnderMouseObject = 0x39CDED8; //0x39987F8; //ok 13.13

int Offsets::ActiveTargetIndex = 0x3880; //0x3888; //ok 13.13

int Offsets::OHeroList = 0x2173340; //64 13.13
int Offsets::OMinionList = 0x39CDCE0; //0x3998608; //64 13.13
int Offsets::OTurretList = 0x521A3F0; //0x51E4D20; //64 13.13
int Offsets::MissileMap = 0x522B828; //0x51F6CD0; //64 13.13

int Offsets::ZoomClass = 0x521B180; //0x51E5AB8; //64 13.13
int Offsets::MaxZoom = 0x28; // 64

int Offsets::Chat = 0x522B928; //0x51F6DD0; //64 13.13
int Offsets::ChatIsOpen = 0xC90; //64

int Offsets::Ping = 0x51AD648; //64 NOT USED
int Offsets::OffPing = 0x178; //64 NOT USED
int Offsets::ShowPing = 0x6D8; //64 NOT USED

int Offsets::ViewProjMatrices = 0x526C1B0; //0x5236720; //64 13.13
int Offsets::Renderer = 0x5274650; //0x523EBC8; //64 13.13
int Offsets::RendererWidth = 0xC; //64
int Offsets::RendererHeight = 0X10; //64

int Offsets::MinimapObject = 0x521EE60; //0x51E8CD0; //64 13.13
int Offsets::MinimapObjectHud = 0x320; //64
int Offsets::MinimapHudPos = 0x60; //64
int Offsets::MinimapHudSize = 0x68; //64

//For objects
int Offsets::ObjectMapCount = 0x48; //64
int Offsets::ObjectMapRoot = 0x40; //64
int Offsets::ObjectMapNodeNetId = 0x20; //64
int Offsets::ObjectMapNodeObject = 0x28; //64

int Offsets::ObjIndex = 0x10; //13.10
int Offsets::ObjTeam = 0x3C;//13.10
int Offsets::ObjMissileName = 0x54; //0x6C;
int Offsets::ObjNetworkID = 0xC8; //13.10
int Offsets::ObjPos = 0x220; //0x280; //13.10
int Offsets::ObjVisibility = 0x310;
int Offsets::ObjSpawnCount = 0x328;
int Offsets::ObjSrcIndex = 0x294; //0x290;
int Offsets::ObjMana = 0x0340; //13.10
int Offsets::ObjMaxMana = 0x0358; //13.10
int Offsets::ObjRecallState = 0xF40; //13.10
int Offsets::ObjHealth = 0x1068; //13.10 
int Offsets::ObjMaxHealth = 0x1080; //13.10
int Offsets::ObjAbilityHaste = 0x14A8; //0x1A00; //13.10
int Offsets::ObjLethality = 0x15A8; //0x1580;
int Offsets::ObjArmor = 0x16A4; //13.10
int Offsets::ObjBonusArmor = 0x16A8; //0x1680;    
int Offsets::ObjMagicRes = 0x16AC; //13.10
int Offsets::ObjBonusMagicRes = 0x16B0; //0x1688;
int Offsets::ObjBaseAtk = 0x167C; //0x1BC8; //13.10
int Offsets::ObjBonusAtk = 0x15E8; //0x1AA8; //13.10
int Offsets::ObjMoveSpeed = 0x16BC; //13.10
int Offsets::ObjTransformation = 0x3070; //0X16A0;//0x3040; //0x3040;
int Offsets::ObjName = 0x3848; //0x3850; //0x38C8; //0x38D0; //13.13 
int Offsets::ObjLvl = 0x3FF0; //0x4030; //0x4038; //13.13
int Offsets::ObjExpiry = 0x298; //0x298;
int Offsets::ObjCrit = 0x1C88; //13.10
int Offsets::ObjCritMulti = 0x1B58; //13.10
int Offsets::ObjAbilityPower = 0x15F8; //13.10 
int Offsets::ObjAtkSpeedMulti = 0x1678; //13.10
int Offsets::ObjAtkRange = 0x16C4; //13.10
int Offsets::ObjTargetable = 0xEB0; //13.10
int Offsets::ObjInvulnerable = 0x4F0; //13.10
int Offsets::ObjIsMoving = 0x3F00;
int Offsets::ObjDirection = 0x2198; //0x3EB4; //0x3EB9; //13.13
int Offsets::ObjItemList = 0x35F8; //0x35F0; //0x35E8;
int Offsets::ObjExpierience = 0x359C; //0x337C; //0x33CC;
int Offsets::ObjMagicPen = 0x158C; //0x11C0; //13.10
int Offsets::ObjArmorPen = 0X1DF0; //13.10 How: 1.0 - This = 0.700 = 30%
int Offsets::ObjMagicPenMulti = 0x11C8; //13.10
int Offsets::ObjAdditionalApMulti = 0x1B20; //0x12E8; //
int Offsets::ObjManaRegen = 0x14DC; //13.10
int Offsets::ObjHealthRegen = 0x16B8; //13.10

//For Spells
int Offsets::ObjSpellBook = 0x30C8; //0x3148; //64 13.12
int Offsets::SpellBookActiveSpellCast = 0x2A30;  //64 13.12

int Offsets::activeCastAutoAtack = 0x10; //64 
int Offsets::activeCastStarPos = 0xAC; //64 
int Offsets::activeCastEndPos = 0xB8; //64
int Offsets::activeCastEndPos2 = 0xC4; //64
int Offsets::AttackDelay = 0xF8; //64 
int Offsets::AttackCast = 0x108; //64 

int Offsets::SpellCastSpellInfo = 0x8; //ok
int Offsets::SpellCastStartTime = 0x15C; //0x41; //0x544; //ok
int Offsets::SpellCastStartTimeAlt = 0x534; //ok
int Offsets::SpellCastCastTime = 0x4C0; //ok
int Offsets::SpellCastStart = 0x80 + 0x4; //ok
int Offsets::SpellCastEnd = 0x8C + 0x4; //ok
int Offsets::SpellCastSrcIdx = 0x68; //ok
int Offsets::SpellCastDestIdx = 0xC0; //ok

int Offsets::SpellBookSpellSlots = 0x4C8; //0x478; //0x478;

int Offsets::SpellSlotLevel = 0x28; //64;
int Offsets::SpellSlotAmmo = 0x54;
int Offsets::SpellSlotTime = 0x30; //64;
int Offsets::SpellSlotCharges = 0x5C; //64
int Offsets::SpellSlotTimeCharge = 0x6C; //0x74; //64
int Offsets::SpellSlotDamage = 0x90; //64;
int Offsets::SpellSlotSpellInfo = 0x130; //64
int Offsets::SpellInfoSpellData = 0x60; //64
int Offsets::SpellDataSpellName = 0x80; //64
int Offsets::SpellDataMissileName = 0xB0; //064
int Offsets::SpellSlotSmiteTimer = 0x60; //0x64;
int Offsets::SpellSlotSmiteCharges = 0x5C; //64


//For Buff
int Offsets::ObjBuffManager = 0x27C0; //64  [[[[<League of Legends.exe>+0x51945B8]+0x2790+0x18+(0x10*0)]+0x0]+0x10]
int Offsets::BuffManagerEntriesArray = 0x18;//;
int Offsets::BuffEntryBuff = 0x10; //ok
int Offsets::BuffType = 0x8; //ok
int Offsets::BuffEntryBuffStartTime = 0x18; //ok
int Offsets::BuffEntryBuffEndTime = 0x1C; //ok
int Offsets::BuffEntryBuffCount = 0x8C; //ok
int Offsets::BuffEntryBuffCountAlt = 0x38; //ok
int Offsets::BuffEntryBuffCountAlt2 = 0x3C;
int Offsets::BuffName = 0x8; //0x8;
int Offsets::BuffEntryBuffNodeStart = 0x20; //ok
int Offsets::BuffEntryBuffNodeCurrent = 0x24; //ok

//For Itens
int Offsets::ItemListItem = 0xC; //ok
int Offsets::ItemInfo = 0x20; //ok
int Offsets::ItemInfoId = 0x68; //ok

// For Missile
int Offsets::MissileMapCount = 0X10;
int Offsets::MissileMapRoot = 0x8;
int Offsets::MissileMapKey = 0x20;
int Offsets::MissileMapVal = 0x28;

int Offsets::MissileSpellInfo = 0x2E8; //64
int Offsets::MissileSrcIdx = 0x370; //64
int Offsets::MissileDestIdx = 0x3C8; //64
int Offsets::MissileDestCheck = 0x320; // not verified
int Offsets::MissileStartPos = 0x38C; //64
int Offsets::MissileEndPos = 0x398; //64
int Offsets::ObjMissileSpellCast = 0x250; //Not Utilized

//For AIManager
int Offsets::AiManager = 0x3700; //64  https://www.unknowncheats.me/forum/league-of-legends/310587-league-legends-reversal-structs-offsets-464.html#post3735791
int Offsets::AiManagerStartPath = 0x02D0; //64
int Offsets::AiManagerEndPath = 0x02DC; //64
int Offsets::AiManagerTargetPosition = 0x10;
int Offsets::AiManagerIsMoving = 0x02BC; //64
int Offsets::AiManagerIsDashing = 0x214;
int Offsets::AiManagerCurrentSegment = 0x1C4;
int Offsets::AiManagerDashSpeed = 0x0300; //64

int Offsets::ServerPos = 0x040C; //64
int Offsets::Velocity = 0x02B8; //64