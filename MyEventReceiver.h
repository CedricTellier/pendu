#ifndef MYEVENTRECEIVER_H
#define MYEVENTRECEIVER_H

#include <irrlicht.h>
#include "enumld.h"
#include "jeu.h"

class Game;

using namespace irr;
using namespace core;
using namespace scene;
using namespace video;
using namespace io;
using namespace gui;

class MyEventReceiver : public IEventReceiver
{
    public:
        MyEventReceiver(jeu * game);
        virtual ~MyEventReceiver();

        virtual bool OnEvent(const SEvent& event);
    protected:

    private:
        jeu *game;
};

#endif // MYEVENTRECEIVER_H
