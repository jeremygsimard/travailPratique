#include "Eau.h"

Eau::Eau(std::string nom,float debit,float sousLitre) : Cout(){
    this->nom = nom;
    this->debit = debit;
    this->sousLitre = sousLitre;
}

float Eau::afficher(int jour) {
    valeur = (debit*24.0*60.0*60.0*sousLitre/100.0)*jour;
    std::cout << nom << " : " << valeur << "$"<<'\n';
    return valeur;
}
