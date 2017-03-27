#ifndef JEU_H
#define JEU_H

#include <iostream>
#include <irrlicht.h>
#include "GameGUI.h"

class MyEventReceiver;


using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class jeu
{
    public:
        jeu();
        virtual ~jeu();

        GameGUI *gui;
        MyEventReceiver *receiver;
        IrrlichtDevice * device;
        IVideoDriver * driver;
        IGUIEnvironment * guienv;

        int getNbEssais();
        void setNbEssais(int nbEssais);
        std::string getMot();
        void setMot(std::string mot);

        void run();
        void game();
        int resultatJeu();

    protected:

    private:
        int nbEssais;
        std::string mot;

};

#endif // JEU_H
