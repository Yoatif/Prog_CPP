#ifndef ANIMAUX_H
#define ANIMAUX_H

#include <string>

class Animaux {

    protected:
    std:: string nom;
    std:: string espece;
    std:: string cri;
    std:: string nourriture;
    int faim = 0;

    public:
    Animaux();
    Animaux(std::string nom,std::string espece,std::string cri,std::string nourriture);
    std:: string getName();
    std:: string getSpecies();
    std:: string getCri();

    void setName(std::string nouveauNom);
    void setFaim();

};

#endif