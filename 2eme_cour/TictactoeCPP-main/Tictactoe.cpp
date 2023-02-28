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
        y=x%3;
        x=x/3;
        _grilleDeJeu.setContent(x,y,_symboleCourant);
    }

    bool Tictactoe::testeVictoireVerticale(){
        // à compléter

        while(_numeroTour !=9){
            if((_grilleDeJeu.getContent(0,0)==_grilleDeJeu.getContent(0,1)&&_grilleDeJeu.getContent(0,1)==_grilleDeJeu.getContent(0,2))||(_grilleDeJeu.getContent(1,0)==_grilleDeJeu.getContent(1,1)&&_grilleDeJeu.getContent(1,1)==_grilleDeJeu.getContent(1,2))||(_grilleDeJeu.getContent(2,0)==_grilleDeJeu.getContent(2,1)&&_grilleDeJeu.getContent(2,1)==_grilleDeJeu.getContent(2,2))){
                std:: cout << "gg0";
                return true;
            }
            else{
                return false;
            }
            
        }

    }

    bool Tictactoe::testeVictoireHorizontale(){
        // à compléter 
        while(_numeroTour != 9 ){
            if((_grilleDeJeu.getContent(0,0)==_grilleDeJeu.getContent(1,0)&&_grilleDeJeu.getContent(1,0)==_grilleDeJeu.getContent(2,0))||(_grilleDeJeu.getContent(0,2)==_grilleDeJeu.getContent(1,2)&&_grilleDeJeu.getContent(1,2)==_grilleDeJeu.getContent(2,2))||(_grilleDeJeu.getContent(0,1)==_grilleDeJeu.getContent(1,1)&&_grilleDeJeu.getContent(1,1)==_grilleDeJeu.getContent(2,1))){
                std:: cout << "gg1";
                return true;
            }
            else{
                return false;
            }       
        }
    }

    bool Tictactoe::testeVictoireDiagonale(){
        
        // à compléter
        while(_numeroTour!=9){
            if((_grilleDeJeu.getContent(0,0)==_grilleDeJeu.getContent(1,1)&&_grilleDeJeu.getContent(1,1)==_grilleDeJeu.getContent(2,2))||(_grilleDeJeu.getContent(2,0)==_grilleDeJeu.getContent(1,1)&&_grilleDeJeu.getContent(1,1)==_grilleDeJeu.getContent(0,2))){
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