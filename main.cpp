#include "jeu.h"

int main(int argc, char** argv)
{

    //Cr�ation de la partie
    jeu *pendu = new jeu();

    //On charge la partie
    pendu->run();

    //Delete de la partie
    delete pendu;

    return 0;
}

