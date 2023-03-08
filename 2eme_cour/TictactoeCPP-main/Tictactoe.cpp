#ifndef TICTACTOE_CPP
#define TICTACTOE_CPP

#include "Grille.h"
#include "Tictactoe.h"
#include <iostream>


    Tictactoe::Tictactoe() : _symboleCourant('X'),_numeroTour(0) {}

    void Tictactoe::afficheGrille(){
        // à compléter
        _grilleDeJeu.affiche();
    }

    void Tictactoe::ajouteSymbole(int x, int y){
        // à compléter
        if ( _grilleDeJeu.getContent(x,y)== ' '){
            _grilleDeJeu.setContent(x,y, _symboleCourant);
            if (_symboleCourant== 'X'){_symboleCourant = 'O';}
            else {_symboleCourant = 'X';}
        }
         else { // la case est déjà occupée (ou sort du tableau) 
            std::cout << "Coup incorrect. Veuillez entrer un nouveau numéro de case !";
            int numeroCase;
            std::cin >> numeroCase;
            this->ajouteSymbole((numeroCase - 1) % 3, (numeroCase - 1) / 3);
        }
            
    }

    bool Tictactoe::testeVictoireVerticale(){
        // à compléter

        while(_numeroTour !=9){
            for (int i = 0; i < 2; i++){
                if((_grilleDeJeu.getContent(i,0)==_grilleDeJeu.getContent(i,1))&&(_grilleDeJeu.getContent(i,1)==_grilleDeJeu.getContent(i,2))){
                    std:: cout << "gg0";
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        return false;

    }

    bool Tictactoe::testeVictoireHorizontale(){
        // à compléter 
        while(_numeroTour !=9){
            for (int i = 0; i < 2; i++){
                if((_grilleDeJeu.getContent(0,i)==_grilleDeJeu.getContent(1,i))&&(_grilleDeJeu.getContent(1,i)==_grilleDeJeu.getContent(2,i))){
                    std:: cout << "gg1";
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        return false;

    }

    bool Tictactoe::testeVictoireDiagonale(){
        
        // à compléter
        while(_numeroTour!=9){
            if(((_grilleDeJeu.getContent(0,0)==_symboleCourant)&&(_grilleDeJeu.getContent(1,1)==_symboleCourant)&&(_grilleDeJeu.getContent(2,2)==_symboleCourant))||
            ((_grilleDeJeu.getContent(0,2)==_symboleCourant)&&(_grilleDeJeu.getContent(1,1)==_symboleCourant)&&(_grilleDeJeu.getContent(2,0)==_symboleCourant))){
                std:: cout << "gg2";
                return true;
            }
            
            else{
                    return false;
                }
        }
    }

    bool Tictactoe::testeJeuNul(){
        // à compléter
        if (_numeroTour==9){
            return true;
        }
        return false;
    }

    void Tictactoe::finTour(){
        // à compléter
        if(_symboleCourant=='X'){
            _symboleCourant='O';
        }else{
        _symboleCourant='X';
        }
        _numeroTour=_numeroTour+1;
   }

#endif