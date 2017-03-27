#ifndef GAMEGUI_H
#define GAMEGUI_H

#include <irrlicht.h>
#include "enumld.h"

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class GameGUI
{
    public:
        GameGUI(IGUIEnvironment *guienv);
        virtual ~GameGUI();

        //Envionnement GUI
        IGUIEnvironment *guienv;
        IGUIStaticText * textPresentation;

        //Fenetre de Jeu
        IGUIStaticText * fenetreJeu;
        IGUIButton * buttonValider;
        IGUIEditBox * lettreJoueur;
        IGUIStaticText * labelMotATrouver;
        IGUIStaticText * cadreEssais;
        IGUIStaticText * nbEssais;


    protected:

    private:
};

#endif // GAMEGUI_H
