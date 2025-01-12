void ProcessDialogEvent()
{
	ref NPChar, PChar, d;
	PChar = GetMainCharacter();
	aref Link, Diag, NextDiag;

	DeleteAttribute(&Dialog, "Links");

	makeref(NPChar, CharacterRef);
	makearef(Link, Dialog.Links);
	makeref(d, Dialog);
	makearef(Diag, NPChar.Dialog);

	switch(Dialog.CurrentNode)
	{
		case "Intro":
			Dialog.defAni = "dialog_stay1";
			Dialog.defCam = "1";
			Dialog.defSnd = "dialogs\0\017";
			Dialog.defLinkAni = "dialog_1";
			Dialog.defLinkCam = "1";
			Dialog.defLinkSnd = "dialogs\woman\024";
			Dialog.ani = "dialog_stay2";
			Dialog.cam = "1";
			Dialog.snd = "dialogs\0\009";

			dialog.snd = "Voice\CLLA\CLLA001";
			dialog.text = "Mr. Radclyffe, Are you certain you do not wish me to accompany you? We are far from the shores of England, these Caribbean towns can be dangerous.";
			link.l1 = "Fear not, I have studied in detail the journals of many a traveller to these shores, there should befall me nothing that I have not prepared for mentally.";
			link.l1.go = "Intro2";
		break;

		case "Intro2":
			dialog.text = "I see. In that case, Mr. Radclyffe, I will search out those that packaged our goods, and have them come to the tavern. Come meet them after you have been to the store, and have copied the records of the owner.";
			link.l1 = "Splendid, we should be able to complete our investigation here in time for tea and biscuits.";
			link.l1.go = "Exit";
			AddDialogExitQuest("RC_intro2");
		break;

               case "Exit":
			DialogExit();
			NextDiag.CurrentNode = NextDiag.TempNode;
               break;
	}
}
