#include "MyEventReceiver.h"

MyEventReceiver::MyEventReceiver(jeu * game)
{
    //ctor
    this->game = game;
}

MyEventReceiver::~MyEventReceiver()
{
    //dtor
}

bool MyEventReceiver::OnEvent(const SEvent& event)
{
    if (event.EventType == EET_GUI_EVENT)
    {
        s32 id = event.GUIEvent.Caller->getID();

        switch(event.GUIEvent.EventType)
        {
        case EGET_BUTTON_CLICKED:
            switch(id)
            {
            case GUI_ID_VALIDER:
				    game->gui->lettreJoueur->getText();
				    break;
                return true;
            default:
                return false;
            }
            break;
        default:
            break;
        }
    }
    return false;
}
