////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.36
//https://mikero.bytex.digital/Downloads
//'now' is Mon Jan 08 07:17:46 2024 : 'file' last modified on Tue May 10 23:10:10 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

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
