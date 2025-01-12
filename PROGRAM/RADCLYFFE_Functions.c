bool isRadclyffe(ref chr)
{
  bool isBR false;

  if (GetMySimpleOldName(chr) == "Bertram Radclyffe" && GetCurrentFlag() == ENGLAND && GetDataYear() == 1710 && CharPlayerType == PLAYER_TYPE_MERCHANT) {
    isBR = true;
  }
  //pchar.model == "..."

  return isBR;
}

void RadclyffeStartStory()
{
	ref PChar = GetMainCharacter();
	string loadPort = "Philipsburg_port";
	sTeleportLocName = "Philipsburg_port";
	string rldGroup = "reload";
	string rldLocator = "reload1";

	string cabinID = GetCharacterShipCabin(PChar);
	if (cabinID != "Cabin_none")
	{
		iShipCaptain = GetMainCharacterIndex();
		SetUpCabin(PChar);

		Locations[FindLocation("Tutorial_deck")].models.always.l2 = "cabinchest";	//JRH
		Locations[FindLocation("Tutorial_deck")].models.always.l3 = "trunk";		//JRH
	}

	// Simple set of items for merchant
	TakeItemFromCharacter(PChar, "commonarmor");
	if (IsCharacterEquipByGroup(PChar, ARMOR_ITEM_TYPE))
	{
	  string armor = GetCharacterEquipByGroup(PChar, ARMOR_ITEM_TYPE);
	  RemoveCharacterEquip(PChar, ARMOR_ITEM_TYPE);
	  TakeItemFromCharacter(PChar, armor);
	}
	TakeNItems(PChar, "spyglass2", 1);
	TakeNItems(PChar, "medical1", 2);
	TakeNItems(PChar, "gunpowder", 6);
	TakeNItems(PChar, "pistolbullets", 6);
	TakeItemFromCharacter(Pchar, FindCharacterItemByGroup(&PChar, BLADE_ITEM_TYPE));

	// copypaste

	Reinit_KhaelRoa();

	Islands[FindIsland("IslaMona")].smuggling_nation = ENGLAND;					// GR: Required for soldiers to be English

	// Ship log setup

	DeleteAttribute(PChar, "shiplog");
	PChar.shiplog.Date.log0 = GetStringDate(GetDataYear(), GetDataMonth(), GetDataDay());
	PChar.shiplog.Title.log0 = "Journey log entry #1";
	PChar.shiplog.Entry.log0 = "Circumstances outside my predictions have led me to leave the routine and predictability that has been my existence thus far. We have reached the end of a sea journey that have brought us all the way across the Atlantic Ocean. The toll it took on my body, not accustomed to such punishment as only the mountainous waves of the deep Sea far removed from the safety of safe harbors can inflict, is such that if I had possessed knowledge of its debilitating effects beforehand, I would have remained cocooned in that comforting haven of my previous life. But, lacking such foreknowledge and having now shed that skin of inexperience, and, as our ship again nears the embers of civilization, like Hercules returning from the Underworld, I feel myself again in control of my physical aspect and having regained the power of locomotion, in addition to the ability to keep a consistent thought for a duration sufficient to string a meaningful sequence of words together in a sentence, the desire to document my travels in these strange lands has made known its presence in my consciousness. This journal will serve as a witness to my experiences for my future self, to aid in their reenactment on the stage of my mind, in such time as my memories are found lacking. Ah, there it is, those sweet, long-awaited words, of terra firma once again being within gaze-distance of those aboard this wooden vessel that has brought us across the vast seas. Philipsburg awaits! I will return to this narrative once my affairs in this outpost has been concluded. Let's make the numbers dance again!";
	PChar.shiplog.Category.log0 = "Personal";
	PChar.shiplog.Visible.log0 = true;

	// Initial events in Philipsburg

	PChar.quest.Radclyffe = "";
	PChar.quest.Radclyffe.win_condition.l1 = "location";
	PChar.quest.Radclyffe.win_condition.l1.character = PChar.id;
	PChar.quest.Radclyffe.win_condition.l1.location = "Philipsburg_port";
	PChar.quest.Radclyffe.win_condition = "RC_intro";

	SetNextWeather("Clear");

	// more copypaste

	ReloadProgressUpdate();

	AllDaysCount = 1;//MAXIMUS: calculates days amount (updating in calendar.c)
	PChar.newGameStart = true;//MAXIMUS: for adding new locators

	LoadMainCharacterInFirstLocation(sTeleportLocName, rldGroup, rldLocator, loadPort); // KK

	// PB: Modify Default Relations
	SetNationRelationBoth(ENGLAND, FRANCE,   RELATION_ENEMY); // Bartolomeu: Required for story
	SetNationRelationBoth(ENGLAND, PORTUGAL, RELATION_FRIEND); // Bartolomeu: Required for story
	SetNationRelationBoth(FRANCE,  SPAIN,    RELATION_FRIEND); // Bartolomeu: Required for story
	SetNationRelationBoth(FRANCE,  PORTUGAL, RELATION_NEUTRAL); // Required for story
	SetNationRelationBoth(ENGLAND, HOLLAND,  RELATION_NEUTRAL); // No Anglo-Dutch war in 1660
	SetRelationsAsNation(GetCurrentFlag()); // Set nations as per selected flag
}

void RadclyffeQuestComplete(string sQuestName)
{
	ref sld;
	ref pchar = GetMainCharacter();

	switch(sQuestName)
	{
		case "RC_intro":
		        GiveModel2Player("Blaze7",true);
			sld = LAi_CreateFantomCharacter(false, 0, true, true, 0.25, "Sailor15", "goto", "goto19");
			LAi_SetHP(sld, 80.0, 80.0);
			sld.dialog.filename = "Evan_Dixley_dialog.c";
			sld.dialog.currentnode = "Intro";
			sld.name = "Evan";
			sld.lastname = "Dixley";
			sld.id = "RCCREW";
			LAi_SetActorType(characterfromID("RCCREW"));
			LAi_ActorDialog(characterfromID("RCCREW"), pchar, "", 6.0, 1.0);
		break;

	case "RC_intro2":
	  SetQuestHeader("Radclyffe");
	  AddQuestRecord("Radclyffe", "1");
	  CloseQuestHeader("Radclyffe");

	  LAi_SetActorType(characterfromID("RCCREW"));
	  LAi_ActorRunToLocation(characterfromID("RCCREW"), "reload", "reload2", "none", "", "", "", 20.0);
	  //PChar.quest.salgada = "encontro";
	  //Pchar.quest.salgada.win_condition.l1 = "location";
	  //Pchar.quest.salgada.win_condition.l1.location = "Cuba_shore_04";
	  //PChar.quest.salgada.win_condition = "meetsalgada";
	  break;
	}
}
