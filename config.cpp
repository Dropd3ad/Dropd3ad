class CfgPatches
{
	class SteamNameSupport_Scripts
	{
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class SteamNameSupport
	{
		type = "mod";
		name = "SteamNameSupport";
		author = "DROPD3AD";
		dir = "SteamNameSupport";
		dependencies[] = {"Game"};
		class defs
		{
			class gameScriptModule
			{
				files[] = {"SteamNameSupport/Scripts/3_Game"};
			};
		};
	};
};