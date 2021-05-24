#ifndef __ELECTRICITE_H__
#define __ELECTRICITE_H__
#include <iostream>
#include "Cout.h"


class Electricite : public Cout {
private:
    std::string nom;
    int volt;
    int amp;
    int sous;
public:
    Electricite(std::string nom,int volt,int amp,int sous);

    float afficher(int jour);
};
#endif
