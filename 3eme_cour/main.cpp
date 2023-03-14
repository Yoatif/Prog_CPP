#include "animaux.cpp"
#include "chat.cpp"
#include "chien.cpp"
#include <string>
#include <iostream>

int main(){
    Animaux * monAnimal;

    int choix;
    std::cin>> choix;

    if (choix == 1)
        monAnimal = new Chat();

    else
        monAnimal = new Chien();
}