#include "\vbs2\basic_defines.hpp"
#define __CurrentDir__ \vbs2\customer\plugins\behaviors_borecky_jan

//Class necessary for VBS to load the new addon correctly
class CfgPatches
{
	class vbs2_vbs_plugins_behaviors_borecky_jan
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {
			vbs2_editor, 
			vbs2_people
		};
		modules[] =
		{
			vbs_core_content_module
		};
	};
};

// Adds btset to list of btsets which are loaded automatically
class CfgBehaviorTrees
{
	class behaviors_borecky_jan //this is an arbitrary className, it needs to be unique though
	{
		path = "\vbs2\customer\plugins\behaviors_borecky_jan\data\behaviors_borecky_jan\behaviors_borecky_jan.btset"; //This is the relative path to the BT-set file to load
		name = "behaviors_borecky_jan"; // This is the btset name duplicated in the configuration
	};
};

class vbs_functions_base;
class CfgFunctions
{
	// Macro to build a function in sripts top folder
	#define MAKE_CORE_FUNCTION(functionName)                                 \
	class fn_vbs_borecky_jan_##functionName : vbs_functions_base                     \
	{                                                                       \
		path = __CurrentDir__\data\scripts\fn_vbs_borecky_jan__##functionName##.sqf;  \
	}

};

// formations
class CfgFormations
{
	class West
	{
		#include "cfgFormations.hpp"
	};

	class East : West
	{
		#include "cfgFormations.hpp"
	};

	class Civ : West
	{
		#include "cfgFormations.hpp"
	};

	class Guer : West
	{
		#include "cfgFormations.hpp"
	};
};

// Defines the new order as available from the Control AI - Military
class CfgAvailableBehaviors
{
	class borecky_team_occupy_public
	{
		icon = "\vbs2\customer\plugins\behaviors_borecky_jan\data\borecky_jan_team_occupy.paa";
		allowRotate = true;

		identity = "generic_team";
		displayname = "Borecky FT Occupy";
		description = "Borecky fireteam occupy";				

		//displayCondition = "\core\addons\plugins\generic_behaviors_public\data\scripts\waypointDisplayCondition.sqf";

		newOrderSubject = "NewOrder";
		
		class RootBehaviors
		{
			group[] = {"ai_core_public", "genericRoot"};
			entity[] = {"ai_core_public", "genericRoot"};
		};
		
		class Parameters
		{
			class orderName
			{
				displayName = "orderName";
				value = "Idle";
				type = "string";
			}
			class orderParameters
			{
				displayName = "orderParameters";
				value = "";
				type = "table";
			};
			class reportCompletedToExternal
			{
				displayName = "reportCompletedToExternal";
				value = "true";
				type = "boolean";
			};
			class debugEnabled
			{
				displayName = "debugEnabled";
				value = "false";
				type = "boolean";
			};
		};
	};
};
