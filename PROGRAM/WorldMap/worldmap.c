#define MAPSPEED	1.0	// ccc mapships - Petros: reset to 1.0 to prevent trouble, was 0.6
//#define MAP_VOYAGELENGTH	8.0 // TIH moved to BS.h	// ccc maptweak, lets voyages take longer, original 4.0

/*
	Program interface:

	Init world map in start
		void wdmInitWorldMap();
	Create world map object
		void wdmCreateMap();
	Release world map object
		void wdmReleaseMap();


	SPI (Script program interface):
	��������� ������ �� �����
	(const) ���� ������ ��� ���������
	(var) ���� ������ ��� ������ � ���������, ������ � ��� �������� � ���������� ��������� �����,
	      ������������� ���� ������

	������
	worldMap.storm.num - ������� ���������� ������� � ����� (const)
	worldMap.storm.cur - ������ �������� ������ 0..num-1, ���� �������������� ��� ���������� ����� (var)
	worldMap.storm.x - ������� ������ �� x (const)
	worldMap.storm.z - ������� ������ �� z (const)
	worldMap.storm.time - ���������� ����� ����� � �������� (const)

	��������� �������
	worldMap.encounter.num - ������� ���������� ���������� � ����� (const)
	worldMap.encounter.cur - ������ �������� ��������� � ����� (var)
	worldMap.encounter.x - ������� ��������� �� x (const)
	worldMap.encounter.z - ������� ��������� �� z (const)
	worldMap.encounter.time - ���������� ����� ����� � �������� (const)
	worldMap.encounter.type - ��� �������, ������������ ���� ���������� (define � ������� ����� �����������)
	worldMap.encounter.attack - ������ ���������, ������� ������� (���� �� �����)

	������ ����������
	worldMap.info.playerInStorm - ���� 1 �� ����� ���������� � ������
	worldMap.info.updateinfo - ������ ����������


	//��������� ���������� - !!!���������, �� ����� ��������!!!
	worldMap.enemyshipViewDistMin;		//��������� �� ������� ������� �������� ��������
	worldMap.enemyshipViewDistMax;		//��������� �� ������� ������� �������� ���������
	worldMap.enemyshipDistKill;			//���������� �� ������� ������� �������
	worldMap.enemyshipBrnDistMin;		//����������� ��������� �� ������� �������� �������
	worldMap.enemyshipBrnDistMax;		//������������ ��������� �� ������� �������� �������

	worldMap.stormViewDistMin;			//��������� �� ������� ����� �������� ��������
	worldMap.stormViewDistMax;			//��������� �� ������� ����� �������� ���������
	worldMap.stormDistKill;				//���������� �� ������� ������� �����
	worldMap.stormBrnDistMin;			//����������� ��������� �� ������� �������� �����
	worldMap.stormBrnDistMax;			//������������ ��������� �� ������� �������� �����

*/

#include "worldmap\worldmap_globals.c"
#include "worldmap\worldmap_events.c"
#include "worldmap\worldmap_reload.c"
#include "worldmap\worldmap_encgen.c"
#include "worldmap\DailyCrewUpdate.c" // NK

//=========================================================================================

extern void wdmInitWorldMap();

#event_handler("WorldMap_EncounterCreate", "wdmEvent_EncounterCreate");
#event_handler("WorldMap_inside_islandzone", "wdmEvent_InsideIsland");
#event_handler("WorldMap_outside_islandzone", "wdmEvent_OutsideIsland");
#event_handler("WorldMap_PlayerInStorm", "wdmEvent_PlayerInStorm");
#event_handler("WorldMap_ShipEncounter", "wdmEvent_ShipEncounter");
#event_handler("WorldMap_EventWindowChangeSelectoin", "wdmEvent_EventWindowChangeSelectoin");
#event_handler("WorldMap_EventWindowSelect", "wdmEvent_EventWindowSelect");
#event_handler("WorldMap_WaitMenuChangeSelectoin", "wdmEvent_WaitMenuChangeSelectoin");
#event_handler("WorldMap_WaitMenuSelect", "wdmEvent_WaitMenuSelect");
#event_handler("WorldMap_DeleteShipEncounter", "wdmEvent_DeleteShipEncounter");
#event_handler("WorldMap_UpdateDate", "wdmEvent_UpdateDate");
#event_handler("ExitFromWorldMap", "wdmReloadToSea");
#event_handler("EventLoadLocation", "wdmOpenLocation");

//=========================================================================================
// Programm interface
//=========================================================================================
bool wdmNoClearEncountersTable = false;

void wdmCreateMap(float dx, float dz, float ay)
{
	float fadeInTime = 0.5; // KK
	wdmDisableTornadoGen = true;
	worldMap.playerShipAY = ay;
	ClearAllLogStrings();
	wdmDisableRelease = true;
	//Create world map engine object
	ReloadProgressStart();
// KK -->
	if (bNewInterface)
		CreateEntity(&worldMap, "wrldmap2");
	else
		CreateEntity(&worldMap,"worldmap");
// <-- KK
	worldMap.isLoaded = "true";
	//Set player ship position
	worldMap.playerShipDispX = dx / WDM_MAP_TO_SEA_SCALE;
	worldMap.playerShipDispZ = dz / WDM_MAP_TO_SEA_SCALE;
	//Update parameters
	worldMap.update = "";
	//Reset encounters data
	wdmReset();
	worldMap.playerShipUpdateDisp = "";
	if (wdmNoClearEncountersTable == false) ReleaseMapEncounters();
	wdmNoClearEncountersTable = false; 
	//Fade in
// KK -->
	if (!IsEntity(&wdm_fader)) {
		CreateEntity(&wdm_fader, "fader");
		if (IsEntity(&wdm_fader)) {	
			SendMessage(&wdm_fader, "lfl", FADER_IN, fadeInTime, true);
			SendMessage(&wdm_fader, "ls", FADER_PICTURE0, FindReloadPicture("sea.tga")); // KK
		} else {
			trace("Fader not created!!!");
		}
	}
// <-- KK
	SetSchemeForMap();
	Event("EventWorldMapInit"); // KK
	ReloadProgressEnd();

	// ccc maptweak
	worldMap.date.hourPerSec = MAP_VOYAGELENGTH;	// ccc maptweak original 4.0
	SetTimeScale(MAPSPEED);			// slow motion
	SetWeatherScheme("seashore_weather");		
	// ccc maptweak end
}

void wdmCreateWorldMap()
{
	float dshipX = MakeFloat(worldMap.playerShipDispX)*WDM_MAP_TO_SEA_SCALE;
	float dshipZ = MakeFloat(worldMap.playerShipDispZ)*WDM_MAP_TO_SEA_SCALE;
	float shipAY = MakeFloat(worldMap.playerShipAY);
	wdmCreateMap(dshipX, dshipZ, shipAY);
}

void wdmLoadSavedMap()
{
	float dshipX = MakeFloat(worldMap.playerShipDispX)*WDM_MAP_TO_SEA_SCALE;
	float dshipZ = MakeFloat(worldMap.playerShipDispZ)*WDM_MAP_TO_SEA_SCALE;
	float shipAY = MakeFloat(worldMap.playerShipAY);
	wdmNoClearEncountersTable = true;
	wdmCreateMap(dshipX, dshipZ, shipAY);
}

void wdmOpenLocation()
{
	//��������� �������� �������
	if(!TestRef(loadedLocation)) return;
	if(!IsEntity(loadedLocation)) return;
	if(!CheckAttribute(loadedLocation, "worldmap")) return;
	//�������� ��� �������
	aref islands;
	makearef(islands, worldMap.islands);
	int num = GetAttributesNum(islands);
	for(int i = 0; i < num; i++)
	{
		aref isl = GetAttributeN(islands, i);
		if(!CheckAttribute(isl, "locations")) continue;
		aref locations;
		makearef(locations, isl.locations);
		wdmOpenIslandLocation(locations, loadedLocation.worldmap);
	}
}

void wdmOpenIslandLocation(aref locations, string name)
{
	//�������� ��� ������
	int num = GetAttributesNum(locations);
	for(int i = 0; i < num; i++)
	{
		aref loc = GetAttributeN(locations, i);
		if(!CheckAttribute(loc, "name")) continue;
		if(loc.name == name)
		{
			loc.visible = "true";
			if(CheckAttribute(loc, "label"))
			{
				loc.label.visible = "true";
			}
		}
	}
}

// WM NK wdmap/island interop 05-05-03
string wdmGetIslandNameFromID(string islandid)
{
	if(islandid == "") return islandid;
	int idx = FindIsland(islandid);
	if(idx >= 0 && idx < ISLANDS_QUANTITY)
	{
		ref island = GetIslandByIndex(idx);
		if(CheckAttribute(island,"worldmap")) return island.worldmap;
		return islandid;
	}
	return "";
}
// WM <--

// KK -->
void wdmSetIcon(string town, string new_name, int iNation)
{
	int island_idx, i, num;
	string island, wdmisland;
	aref wdmislandlocs, loc;

	if (!TownExist(town)) return;
	if (iNation >= NATIONS_QUANTITY) return;
	if (new_name == "" && iNation < -1) return;

	island = GetIslandIDFromTown(town);
	island_idx = FindIsland(island);
	if (island_idx < 0) return;
	wdmisland = wdmGetIslandNameFromID(island);
	if (!CheckAttribute(worldMap, "islands." + wdmisland + ".locations")) return;
	makearef(wdmislandlocs, worldMap.islands.(wdmisland).locations);
	num = GetAttributesNum(wdmislandlocs);
	for (i = 0; i < num; i++) {
		loc = GetAttributeN(wdmislandlocs, i);
		if (!CheckAttribute(loc, "name")) continue;
		if (loc.name == town) {
			if (IsIslandDisabled(island)) {
				trace("wdmSetIcon: island "+island+" is disabled.");
				loc.modelName = "";
				loc.label.text = "";
				loc.label.icon = -1;
				DeleteAttribute(loc, "real");
			} else {
				if (new_name != "") loc.label.text = new_name;
				loc.label.icon = wdmTownFlag(iNation);
			}
			return;
		}
	}
}

int wdmTownFlag(int iNation)
{
	if (iNation == PERSONAL_NATION)	return 8;
	if (iNation >= 0 && iNation < NATIONS_QUANTITY) return GetFlagIndex(iNation);
	return -1;
}

bool wdmGetShorePos(string locid, ref x, ref z)
{
	x = 0.0;
	z = 0.0;
	int locidx = FindLocation(locid);
	if (locidx < 0) return false;
	string wrlmapcity = locid;
	if (CheckAttribute(&Locations[locidx], "worldmap")) wrlmapcity = Locations[locidx].worldmap;
	string island = Locations[locidx].island;
	aref arShores; makearef(arShores, worldMap.islands.(island).locations);
	int iNum = GetAttributesNum(arShores);
	for (int i = 0; i < iNum; i++)
	{
		aref arShore = GetAttributeN(arShores, i);
		if (CheckAttribute(arShore, "name") == true && arShore.name == wrlmapcity) {
			if (CheckAttribute(arShore, "ship.pos.x") && CheckAttribute(arShore, "ship.pos.z")) {
				x = stf(arShore.ship.pos.x);
				z = stf(arShore.ship.pos.z);
				return true;
			}
			break;
		}
	}
	return false;
}

void wdmInit()
{
	if(LoadSegment("worldmap\worldmap_init.c"))
	{
		wdmInitWorldMap();
		UnloadSegment("worldmap\worldmap_init.c");
	}
}
// <-- KK
