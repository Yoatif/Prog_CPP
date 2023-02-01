#include <iostream>
#include <string>
using namespace std;

void maFonction(int * unPointeur){
    
    (*unPointeur)++;
    cout << "Dans la fonction : " 
        << *unPointeur << endl;
    cout << "Dans la fonction : " 
        << unPointeur << endl;

}


int main(){
    

    int uneVariableDuCodePrincipal = 12;

    cout << "Avant fonction : " 
        << uneVariableDuCodePrincipal << endl;
    cout << "Avant fonction : " 
        << &uneVariableDuCodePrincipal << endl;

    maFonction(&uneVariableDuCodePrincipal);

    cout << "Après fonction : " 
        << uneVariableDuCodePrincipal << endl;
    cout << "Après fonction : " 
        << &uneVariableDuCodePrincipal << endl;

    return 0;
}

int * monPointeur // se prononce "je déclare un pointeur vers un entier"
*monPointeur // se prononce "le contenu pointé par monPointeur"
&maVariable // se prononce "l'adresse de maVariable" / "la référence de maVariable"

