#include "mot.h"
#include <string>


mot::mot()
{
    //ctor
}

mot::~mot()
{
    //dtor
}

std::string mot::getMot()
{
    return mot;
}

void mot::setMot(int mot)
{
    this->mot() = mot;
}
