#include "Location.h"

Location::Location(std::string nom,int espaceMachine,int sous30Jours) : Cout() {
    this->nom = nom;
    this->espaceMachine = espaceMachine;
    this->sous30Jours= sous30Jours;
}

float Location::afficher(int jour) {
    valeur = ((sous30Jours / 100.0) / 30.0 * espaceMachine)*jour;
    std::cout << nom << " : " << valeur << "$"<<'\n';
    return valeur;
}