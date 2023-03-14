#ifndef ANIMAUX_CPP
#define ANIMAUX_CPP

#include "animaux.h"

#include <iostream>
#include <string>

Animaux::Animaux(): nom("miaouw"), espece("pangolin"),cri("bonne question !"), nourriture("Alexandre"){}
Animaux::Animaux(std::string nom,std::string espece,std::string cri,std::string nourriture) : 
        nom(nom), espece(espece), cri(cri), faim(0) {}


std::string Animaux::getName(){
        return nom;
    }
    std::string Animaux::getSpecies(){
        return espece;
    }
    std::string Animaux::getCri(){
        return cri;
    }

    void Animaux::setName(std::string nouveauNom){
        nom = nouveauNom;
        }
    void Animaux::setFaim(){
        faim -= 1;
    }


#endif