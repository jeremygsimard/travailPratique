#ifndef __EAU_H__
#define __EAU_H__
#include <iostream>
#include "Cout.h"

class Eau : public Cout {
private:
    std::string nom;
    float debit;
    float sousLitre;
public:
    Eau(std::string nom,float debit,float sousLitre);

    float afficher(int jour);
};
#endif
