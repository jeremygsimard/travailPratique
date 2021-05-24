#include "Electricite.h"


Electricite::Electricite(std::string nom,int volt, int amp, int sous) : Cout(){
    this->nom = nom;
    this->volt = volt;
    this->amp = amp;
    this->sous = sous;
}


float Electricite::afficher(int jour) {
    valeur = (((volt * amp) / 1000.0) * 24  * (sous / 100.0))*jour;
    std::cout << nom << " : " << valeur << "$"<<'\n';
    return valeur;

}