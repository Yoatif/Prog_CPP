#ifndef CHIEN_H
#define CHIEN_H

#include <string>
#include "animaux.h"

class Chien :public Animaux {

    protected:
    std:: string nom;
    std:: string espece;
    std:: string cri;
    std:: string nourriture;
    int faim =0;

};

#endif