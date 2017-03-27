#include "GameGUI.h"

GameGUI::GameGUI(IGUIEnvironment *guienv)
{
    //ctor
    this->guienv = guienv;

    IGUISkin* skin = guienv->getSkin();
	IGUIFont* font = guienv->getFont("../../media/fonthaettenschweiler.bmp");
	if (font)
		skin->setFont(font);

	skin->setFont(guienv->getBuiltInFont(), EGDF_TOOLTIP);


    textPresentation = guienv->addStaticText(L"Bienvenue dans le jeu du PENDU !", rect<s32>(20,30,620,30 +30), true);
    textPresentation->setTextAlignment(EGUIA_CENTER, EGUIA_CENTER);

    //fenetre de jeu
    labelMotATrouver = guienv->addStaticText(L"", rect<s32>(300, 30 + 30, 300 + 40, 60 + 30));
    lettreJoueur = guienv->addEditBox(L"", rect<int>(20, 90 , 115, 90 + 40));
    buttonValider = guienv->addButton(rect<s32>(65 , 130 + 20, 115 , 150 + 40),0, GUI_ID_VALIDER, L"Valider");
    cadreEssais = guienv->addStaticText(L" Essais Restants : ", rect<s32>(20 , 190 + 30, 115 , 210 + 30));
    nbEssais = guienv->addStaticText(L"7", rect<s32>(115 + 10 , 190 + 30, 125 + 20 , 210 + 30));
}

GameGUI::~GameGUI()
{
    //dtor
}
