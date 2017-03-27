#include "jeu.h"
#include "enumld.h"
#include "MyEventReceiver.h"
#include <fstream>
#include <windows.h>
#include <cstring>
#include <iostream>
#include "time.h"

jeu::jeu()
{
    //ctor
    nbEssais = 7;

    //Cr�er le device irrlicht
    device = createDevice(EDT_SOFTWARE, dimension2d<u32>(640, 480), 16,
            false, false, false, 0);

    driver = device->getVideoDriver();
    guienv = device->getGUIEnvironment();

    //Cr�ation de la classe GUI
    gui = new GameGUI(guienv);

    receiver = new MyEventReceiver(this);

    //Lien entre le Device et l'event reciever
    device->setEventReceiver(receiver);
}

jeu::~jeu()
{
    //dtor
}

int jeu::getNbEssais()
{
    return nbEssais;
}

void jeu::setNbEssais(int nbEssais)
{
    this->nbEssais = nbEssais;
}

std::string jeu::getMot()
{
        return mot;
}

void jeu::setMot(std::string mot)
{
    this->mot = mot;
}

void jeu::run()
{
    //Boucle de rendu principale
    while (device->run())
    {
        driver->beginScene(true, true, SColor(0,200,200,200));

        guienv->drawAll();

        driver->endScene();
    }
}

void jeu::game()
{
    //initialisation du random dans le jeu
    srand(time(NULL));


        std::string motOrdi;

        //Utilisation du fichier ou les mots sont �crit (en mode lecture)

        std::ifstream pendu("C:\\Users\\C�dric\\Desktop\\ControleperfCedricTellier\\Mots.txt", std::ofstream::in | std::ofstream::app); ;
        //Attention le chemin devra surement �tre modifi�

        //On v�rifi� si le fichier existe
        if (pendu)
        {
            //On va chercher al�atoirement un mot
            int i = rand()%10+1;

            //On cr�e un test pour obtenir un mot dans la variable Mot Ordi
            int j = 0;
            while (j < i)
            {
                //On met l'int�gralit� du fichier
                getline(pendu, motOrdi);
                j++;
            }
            //On r�cup�re le mot choisi par l'ordinateur dans le fichier texte
            this->setMot(motOrdi);
            //On rentre dans le label, le mot choisi de mani�re al�atoire
           // gui->labelMotATrouver->setText(this->getMot());
        }
        else
        {
            std::cerr << "Erreur lors de l'ouverture du fichier!" << std::endl;
        }

        //Tour de jeu
        while (this->nbEssais >0)
        {

        //rentr�e du joueur

        //gui->lettreJoueur->setText()

        }

        //Test de l'utilisateur et des lettres
        //To Do

        //resolution du jeu
        //A faire
}

