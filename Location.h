#ifndef __LOCATION_H__
#define __LOCATION_H__
#include <iostream>
#include "Cout.h"

class Location : public Cout {
private:
    std::string nom;
    int espaceMachine;
    int sous30Jours;
public:
    Location(std::string nom,int espaceMachine,int sous30Jours);

    float afficher(int jour);
};
#endif