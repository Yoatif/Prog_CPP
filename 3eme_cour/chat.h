#ifndef CHAT_H
#define CHAT_H

#include <string>
#include "animaux.h"

class Chat :public Animaux {

    protected:
    std:: string nom;
    std:: string espece;
    std:: string cri;
    std:: string nourriture;
    int faim = 0;

};

#endif