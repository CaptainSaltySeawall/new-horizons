void CreateTActorsCharacters(ref n)
{
	object chobj;
	ref ch;
	makeref(ch, chobj);

			//
	ch.old.name = "Pirate";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Pirate");
	ch.lastname = "";
	ch.id		= "Treas_Pirate_1";
	ch.model	= "pirat1";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= PIRATE;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "";
	ch.greeting = "";
	ch.rank 	= 10;
	ch.reputation = "1";
	TakeNItems(ch,"medical1", Rand(4)+1);
	ch.experience = "205000";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "10";
	ch.skill.Sailing = "10";
	ch.skill.Accuracy = "5";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "8";
	ch.skill.Repair = "10";
	ch.skill.Defence = "10";
	ch.skill.Commerce = "5";
	ch.skill.Sneak = "10";
//	ch.perks.list.BasicDefence = true;
//	ch.perks.list.AdvancedDefence = true;
//	ch.perks.list.SwordplayProfessional = true;
//	ch.perks.list.CriticalHit = true;
//	ch.perks.list.Gunman = true;
//	ch.perks.list.ProfessionalGunman = true;
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_MONSTERS);
	LAi_SetHP(ch, 280.0, 280.0);
	LAi_NoRebirthEnable(ch);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Pirate";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Pirate");
	ch.lastname = "";
	ch.id		= "Treas_Pirate_2";
	ch.model	= "pirat2";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= PIRATE;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "";
	ch.greeting = "";
	ch.rank 	= 10;
	ch.reputation = "1";
	TakeNItems(ch,"medical1", Rand(4)+1);
	ch.experience = "205000";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "10";
	ch.skill.Sailing = "10";
	ch.skill.Accuracy = "5";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "8";
	ch.skill.Repair = "10";
	ch.skill.Defence = "10";
	ch.skill.Commerce = "5";
	ch.skill.Sneak = "10";
//	ch.perks.list.BasicDefence = true;
//	ch.perks.list.AdvancedDefence = true;
//	ch.perks.list.SwordplayProfessional = true;
//	ch.perks.list.CriticalHit = true;
//	ch.perks.list.Gunman = true;
//	ch.perks.list.ProfessionalGunman = true;
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_MONSTERS);
	LAi_SetHP(ch, 280.0, 280.0);
	LAi_NoRebirthEnable(ch);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Pirate";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Pirate");
	ch.lastname = "";
	ch.id		= "Treas_Pirate_3";
	ch.model	= "pirat3";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= PIRATE;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "";
	ch.greeting = "";
	ch.rank 	= 10;
	ch.reputation = "1";
	TakeNItems(ch,"medical1", Rand(4)+1);
	ch.experience = "205000";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "10";
	ch.skill.Sailing = "10";
	ch.skill.Accuracy = "5";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "8";
	ch.skill.Repair = "10";
	ch.skill.Defence = "10";
	ch.skill.Commerce = "5";
	ch.skill.Sneak = "10";
//	ch.perks.list.BasicDefence = true;
//	ch.perks.list.AdvancedDefence = true;
//	ch.perks.list.SwordplayProfessional = true;
//	ch.perks.list.CriticalHit = true;
//	ch.perks.list.Gunman = true;
//	ch.perks.list.ProfessionalGunman = true;
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_MONSTERS);
	LAi_SetHP(ch, 280.0, 280.0);
	LAi_NoRebirthEnable(ch);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Pirate";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Pirate");
	ch.lastname = "";
	ch.id		= "Treas_Pirate_4";
	ch.model	= "pirat4";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= PIRATE;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "";
	ch.greeting = "";
	ch.rank 	= 10;
	ch.reputation = "1";
	TakeNItems(ch,"medical1", Rand(4)+1);
	ch.experience = "205000";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "10";
	ch.skill.Sailing = "10";
	ch.skill.Accuracy = "5";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "8";
	ch.skill.Repair = "10";
	ch.skill.Defence = "10";
	ch.skill.Commerce = "5";
	ch.skill.Sneak = "10";
//	ch.perks.list.BasicDefence = true;
//	ch.perks.list.AdvancedDefence = true;
//	ch.perks.list.SwordplayProfessional = true;
//	ch.perks.list.CriticalHit = true;
//	ch.perks.list.Gunman = true;
//	ch.perks.list.ProfessionalGunman = true;
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_MONSTERS);
	LAi_SetHP(ch, 280.0, 280.0);
	LAi_NoRebirthEnable(ch);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Pirate";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Pirate");
	ch.lastname = "";
	ch.id		= "Treas_Pirate_5";
	ch.model	= "pirat5";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= PIRATE;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "";
	ch.greeting = "";
	ch.rank 	= 10;
	ch.reputation = "1";
	TakeNItems(ch,"medical1", Rand(4)+1);
	ch.experience = "205000";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "10";
	ch.skill.Sailing = "10";
	ch.skill.Accuracy = "5";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "8";
	ch.skill.Repair = "10";
	ch.skill.Defence = "10";
	ch.skill.Commerce = "5";
	ch.skill.Sneak = "10";
//	ch.perks.list.BasicDefence = true;
//	ch.perks.list.AdvancedDefence = true;
//	ch.perks.list.SwordplayProfessional = true;
//	ch.perks.list.CriticalHit = true;
//	ch.perks.list.Gunman = true;
//	ch.perks.list.ProfessionalGunman = true;
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_MONSTERS);
	LAi_SetHP(ch, 280.0, 280.0);
	LAi_NoRebirthEnable(ch);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Pirate";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Pirate");
	ch.lastname = "";
	ch.id		= "Treas_Pirate_6";
	ch.model	= "pirat6";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= PIRATE;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "";
	ch.greeting = "";
	ch.rank 	= 10;
	ch.reputation = "1";
	TakeNItems(ch,"medical1", Rand(4)+1);
	ch.experience = "205000";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "10";
	ch.skill.Sailing = "10";
	ch.skill.Accuracy = "5";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "8";
	ch.skill.Repair = "10";
	ch.skill.Defence = "10";
	ch.skill.Commerce = "5";
	ch.skill.Sneak = "10";
//	ch.perks.list.BasicDefence = true;
//	ch.perks.list.AdvancedDefence = true;
//	ch.perks.list.SwordplayProfessional = true;
//	ch.perks.list.CriticalHit = true;
//	ch.perks.list.Gunman = true;
//	ch.perks.list.ProfessionalGunman = true;
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_MONSTERS);
	LAi_SetHP(ch, 280.0, 280.0);
	LAi_NoRebirthEnable(ch);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Pirate";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Pirate");
	ch.lastname = "";
	ch.id		= "Treas_Pirate_7";
	ch.model	= "pirat7";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= PIRATE;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "";
	ch.greeting = "";
	ch.rank 	= 10;
	ch.reputation = "1";
	TakeNItems(ch,"medical1", Rand(4)+1);
	ch.experience = "205000";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "10";
	ch.skill.Sailing = "10";
	ch.skill.Accuracy = "5";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "8";
	ch.skill.Repair = "10";
	ch.skill.Defence = "10";
	ch.skill.Commerce = "5";
	ch.skill.Sneak = "10";
//	ch.perks.list.BasicDefence = true;
//	ch.perks.list.AdvancedDefence = true;
//	ch.perks.list.SwordplayProfessional = true;
//	ch.perks.list.CriticalHit = true;
//	ch.perks.list.Gunman = true;
//	ch.perks.list.ProfessionalGunman = true;
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_MONSTERS);
	LAi_SetHP(ch, 280.0, 280.0);
	LAi_NoRebirthEnable(ch);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Pirate";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Pirate");
	ch.lastname = "";
	ch.id		= "Treas_Pirate_8";
	ch.model	= "pirat8";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= PIRATE;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "";
	ch.greeting = "";
	ch.rank 	= 10;
	ch.reputation = "1";
	TakeNItems(ch,"medical1", Rand(4)+1);
	ch.experience = "205000";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "10";
	ch.skill.Sailing = "10";
	ch.skill.Accuracy = "5";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "8";
	ch.skill.Repair = "10";
	ch.skill.Defence = "10";
	ch.skill.Commerce = "5";
	ch.skill.Sneak = "10";
//	ch.perks.list.BasicDefence = true;
//	ch.perks.list.AdvancedDefence = true;
//	ch.perks.list.SwordplayProfessional = true;
//	ch.perks.list.CriticalHit = true;
//	ch.perks.list.Gunman = true;
//	ch.perks.list.ProfessionalGunman = true;
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_MONSTERS);
	LAi_SetHP(ch, 280.0, 280.0);
	LAi_NoRebirthEnable(ch);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Pirate";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Pirate");
	ch.lastname = "";
	ch.id		= "Treas_Pirate_9";
	ch.model	= "pirat9";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= PIRATE;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "";
	ch.greeting = "";
	ch.rank 	= 10;
	ch.reputation = "1";
	TakeNItems(ch,"medical1", Rand(4)+1);
	ch.experience = "205000";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "10";
	ch.skill.Sailing = "10";
	ch.skill.Accuracy = "5";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "8";
	ch.skill.Repair = "10";
	ch.skill.Defence = "10";
	ch.skill.Commerce = "5";
	ch.skill.Sneak = "10";
//	ch.perks.list.BasicDefence = true;
//	ch.perks.list.AdvancedDefence = true;
//	ch.perks.list.SwordplayProfessional = true;
//	ch.perks.list.CriticalHit = true;
//	ch.perks.list.Gunman = true;
//	ch.perks.list.ProfessionalGunman = true;
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_MONSTERS);
	LAi_SetHP(ch, 280.0, 280.0);
	LAi_NoRebirthEnable(ch);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Pirate";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Pirate");
	ch.lastname = "";
	ch.id		= "Treas_Pirate_10";
	ch.model	= "pirat10";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= PIRATE;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "";
	ch.greeting = "";
	ch.rank 	= 10;
	ch.reputation = "1";
	TakeNItems(ch,"medical1", Rand(4)+1);
	ch.experience = "205000";
	ch.skill.Leadership = "6";
	ch.skill.Fencing = "10";
	ch.skill.Sailing = "10";
	ch.skill.Accuracy = "5";
	ch.skill.Cannons = "5";
	ch.skill.Grappling = "8";
	ch.skill.Repair = "10";
	ch.skill.Defence = "10";
	ch.skill.Commerce = "5";
	ch.skill.Sneak = "10";
//	ch.perks.list.BasicDefence = true;
//	ch.perks.list.AdvancedDefence = true;
//	ch.perks.list.SwordplayProfessional = true;
//	ch.perks.list.CriticalHit = true;
//	ch.perks.list.Gunman = true;
//	ch.perks.list.ProfessionalGunman = true;
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_MONSTERS);
	LAi_SetHP(ch, 280.0, 280.0);
	LAi_NoRebirthEnable(ch);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Crewmember";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Crewmember");
	ch.lastname = "";
	ch.id		= "Treas_Crewmember_1";
	ch.model	= "Bocman";
	ch.sex = "man";
	ch.sound_type = "seaman";
	ch.nation	= CharNation;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "permanent_crewmember_dialog.c";
	ch.greeting = "";
	ch.rank 	= 1;
	ch.reputation = "45";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "1";
	LAi_SetWarriorType(ch);
	LAi_warrior_DialogEnable(ch, true);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_PLAYER);
	LAi_SetHP(ch, 280.0, 280.0);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Crewmember";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Crewmember");
	ch.lastname = "";
	ch.id		= "Treas_Crewmember_2";
	ch.model	= "Sailor4";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= CharNation;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "permanent_crewmember_dialog.c";
	ch.greeting = "";
	ch.rank 	= 1;
	ch.reputation = "45";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "1";
	LAi_SetWarriorType(ch);
	LAi_warrior_DialogEnable(ch, true);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_PLAYER);
	LAi_SetHP(ch, 280.0, 280.0);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Crewmember";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Crewmember");
	ch.lastname = "";
	ch.id		= "Treas_Crewmember_3";
	ch.model	= "Sailor5";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= CharNation;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "permanent_crewmember_dialog.c";
	ch.greeting = "";
	ch.rank 	= 1;
	ch.reputation = "45";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "1";
	LAi_SetWarriorType(ch);
	LAi_warrior_DialogEnable(ch, true);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_PLAYER);
	LAi_SetHP(ch, 280.0, 280.0);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Crewmember";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Crewmember");
	ch.lastname = "";
	ch.id		= "Treas_Crewmember_4";
	ch.model	= "Sailor6";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= CharNation;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "permanent_crewmember_dialog.c";
	ch.greeting = "";
	ch.rank 	= 1;
	ch.reputation = "45";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "1";
	LAi_SetWarriorType(ch);
	LAi_warrior_DialogEnable(ch, true);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_PLAYER);
	LAi_SetHP(ch, 280.0, 280.0);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Crewmember";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Crewmember");
	ch.lastname = "";
	ch.id		= "Treas_Crewmember_5";
	ch.model	= "Sailor7";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= CharNation;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "permanent_crewmember_dialog.c";
	ch.greeting = "";
	ch.rank 	= 1;
	ch.reputation = "45";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "1";
	LAi_SetWarriorType(ch);
	LAi_warrior_DialogEnable(ch, true);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_PLAYER);
	LAi_SetHP(ch, 280.0, 280.0);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Crewmember";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Crewmember");
	ch.lastname = "";
	ch.id		= "Treas_Crewmember_6";
	ch.model	= "Pirtt7";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= CharNation;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "permanent_crewmember_dialog.c";
	ch.greeting = "";
	ch.rank 	= 1;
	ch.reputation = "45";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "1";
	LAi_SetWarriorType(ch);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_warrior_DialogEnable(ch, true);
	LAi_group_MoveCharacter(ch, LAI_GROUP_PLAYER);
	LAi_SetHP(ch, 280.0, 280.0);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Crewmember";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Crewmember");
	ch.lastname = "";
	ch.id		= "Treas_Crewmember_7";
	ch.model	= "Sailor1";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= CharNation;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "permanent_crewmember_dialog.c";
	ch.greeting = "";
	ch.rank 	= 1;
	ch.reputation = "45";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "1";
	LAi_SetWarriorType(ch);
	LAi_warrior_DialogEnable(ch, true);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_PLAYER);
	LAi_SetHP(ch, 280.0, 280.0);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Crewmember";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Crewmember");
	ch.lastname = "";
	ch.id		= "Treas_Crewmember_8";
	ch.model	= "Bocman3";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= CharNation;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "permanent_crewmember_dialog.c";
	ch.greeting = "";
	ch.rank 	= 1;
	ch.reputation = "45";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "1";
	LAi_SetWarriorType(ch);
	LAi_warrior_DialogEnable(ch, true);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_PLAYER);
	LAi_SetHP(ch, 280.0, 280.0);
	AddGameCharacter(n, ch);

			//
	ch.old.name = "Crewmember";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Crewmember");
	ch.lastname = "";
	ch.id		= "Treas_Crewmember_9";
	ch.model	= "Black_corsair";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= CharNation;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "permanent_crewmember_dialog.c";
	ch.greeting = "";
	ch.rank 	= 1;
	ch.reputation = "45";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "1";
	LAi_SetWarriorType(ch);
	LAi_warrior_DialogEnable(ch, true);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_PLAYER);
	LAi_SetHP(ch, 280.0, 280.0);
	AddGameCharacter(n, ch);

		//
	ch.old.name = "Crewmember";
	ch.old.lastname = "";
	ch.name = TranslateString("", "Crewmember");
	ch.lastname = "";
	ch.id		= "Treas_Crewmember_10";
	ch.model	= "50evl2in";
	ch.sex = "man";
	//ch.alignment = "bad";
	ch.sound_type = "seaman";
	ch.nation	= CharNation;
	ch.location	= "";
	ch.location.group = "";
	ch.location.locator = "";
	ch.Dialog.Filename = "permanent_crewmember_dialog.c";
	ch.greeting = "";
	ch.rank 	= 1;
	ch.reputation = "45";
	ch.experience = "0";
	ch.skill.Leadership = "1";
	ch.skill.Fencing = "1";
	ch.skill.Sailing = "1";
	ch.skill.Accuracy = "1";
	ch.skill.Cannons = "1";
	ch.skill.Grappling = "1";
	ch.skill.Repair = "1";
	ch.skill.Defence = "1";
	ch.skill.Commerce = "1";
	ch.skill.Sneak = "1";
	ch.money = "1";
	LAi_SetWarriorType(ch);
	LAi_warrior_DialogEnable(ch, true);
	LAi_SetLoginTime(ch, 0.0, 24.0);
	LAi_group_MoveCharacter(ch, LAI_GROUP_PLAYER);
	LAi_SetHP(ch, 280.0, 280.0);
	AddGameCharacter(n, ch);
}
