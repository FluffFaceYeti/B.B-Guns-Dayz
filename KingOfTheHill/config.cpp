class CfgPatches
{
	class KR_KingOfTheHill
	{
		units[]=
		{
			"KingOfTheHillRewardChest"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class KR_KingOfTheHill
	{
		dir="KR_KingOfTheHill";
		picture="";
		action="";
		hideName=0;
		hidePicture=1;
		name="King of the hill";
		credits="";
		author="";
		authorID="0";
		version="1.1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"LBmaster_Groups/scripts/Common",
					"NotificationsDefine/scripts/Common",
					"BasicMapDefine/scripts/Common",
					"PVEZ/Common",
					"KR_KingOfTheHill/scripts/Common",
					"KR_KingOfTheHill/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"LBmaster_Groups/scripts/Common",
					"NotificationsDefine/scripts/Common",
					"BasicMapDefine/scripts/Common",
					"PVEZ/Common",
					"KR_KingOfTheHill/scripts/Common",
					"KR_KingOfTheHill/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"LBmaster_Groups/scripts/Common",
					"NotificationsDefine/scripts/Common",
					"BasicMapDefine/scripts/Common",
					"PVEZ/Common",
					"KR_KingOfTheHill/scripts/Common",
					"KR_KingOfTheHill/scripts/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{
	class M18SmokeGrenade_Green;
	class Container_Base;
	class KR_KingOfTheHillSmoke: M18SmokeGrenade_Green
	{
		scope=1;
	};
	class KingOfTheHillRewardChest: Container_Base
	{
		scope=2;
		displayName="King of The Hill";
		descriptionShort="King of the Hill Reward chest.";
		model="\DZ\gear\camping\sea_chest.p3d";
		attachments[]=
		{
			"Shoulder1",
			"Shoulder2"
		};
		itemsCargoSize[]={15,100};
		weight=40000;
		physLayer="item_large";
		simulation="inventoryItem";
		carveNavmesh=1;
		canBeDigged=0;
		hiddenSelections[]=
		{
			"camoGround"
		};
		hiddenSelectionsTextures[]=
		{
			"\dz\gear\camping\data\sea_chest_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100000000000;
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={15,100};
			openable=0;
			allowOwnedCargoManipulation=1;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class movement
				{
					soundSet="seachest_movement_SoundSet";
					id=1;
				};
				class pickUpItem_Light
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpSeaChest_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="seachest_drop_SoundSet";
					id=898;
				};
			};
		};
	};
};
