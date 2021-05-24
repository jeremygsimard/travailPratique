#include <iostream>
#include "Menu.h"
#include "Cout.cpp"
#include "Location.cpp"
#include "Electricite.cpp"
#include "Eau.cpp"




int main() {
    Cout *tab1[250];
int nb_cout = 0;
Cout cout;
    int choix = 0;
    bool fin = false;
    while (!fin) {
        menu::menuMain();
        std::cout << "\nFaites votre choix: " << std::endl;
        std::cin >> choix;
        switch (choix) {

            case 0:
                std::cout << "Fin de l'application!" << std::endl;
                fin = true;
                break;

            case 1: {
                //Ajouter un coût de location avec ses informations
                std::string nom;
                int espaceMachine;
                int sous30Jours;
                std::cout << "Entrez le nom de la machine" << std::endl;
                std::cin >> nom;
                std::cout << " Entrez l'espace requis par la machine en metres-carres (m2)" << std::endl;
                std::cin >> espaceMachine;
                std::cout
                        << " Entrez Un entier correspondant au cout en sous pour la location d'un metre-carre pour une periode de\n"
                           "30 jours" << std::endl;
                std::cin >> sous30Jours;
                tab1[nb_cout] = new Location(nom, espaceMachine, sous30Jours);
                nb_cout++;
                break;
            }

            case 2: {
                //Ajouter un coût en électricité avec ses informations
                std::string nom;
                int volt;
                int amp;
                int sous;
                std::cout << "Entrez le nom de la machine" << std::endl;
                std::cin >> nom;
                std::cout << "Entrez un entier corresponsant au voltage de la machine en volts (V)" << std::endl;
                std::cin >> volt;
                std::cout << " Entrez un entier correspondant a l'amperage de la machine en amperes (A)" << std::endl;
                std::cin >> amp;
                std::cout
                        << "Entrez un entier correspondant au cout en sous de l'electricite par kilowatt-heures (c/kWh)"
                        << std::endl;
                std::cin >> sous;
                tab1[nb_cout] = new Electricite(nom, volt, amp,sous);
                nb_cout++;
            }
             
                break;

            case 3: {
                //Ajouter un coût pour la consommation d'eau avec ses informations
                std::string nom;
                float debit;
                float sousLitre;
                std::cout << "Entrez le nom de la machine" << std::endl;
                std::cin >> nom;
                std::cout << "Entrez une valeur flottante corrspondant au debit en litres par seconde (L/s)"
                          << std::endl;
                std::cin >> debit;
                std::cout << " Un entier correspondant au cout de l'eau en sous par litre (c/L)" << std::endl;
                std::cin >> sousLitre;
                tab1[nb_cout] = new Eau(nom, debit, sousLitre);
                nb_cout++;
                break;
            }

            case 4:
                //Afficher un compte-rendu de la machine avec les coûts entrés, ainsi que les coûts totaux
                //d'utilisation de la machine pour une période déterminée par la personne utilisatrice
                int jour;
                float total;
                std::cout << "Entrez nombre de jours a utiliser pour le calcul" << std::endl;
                std::cin >> jour;
                for(int i=0 ; i<nb_cout ; i++) {
                     total+= tab1[i]->afficher(jour);

                }
                std::cout <<"--------------------------------"<<std::endl;
                std::cout <<"Cout total = "<<total<<"$ pour "<<jour<<" jours"<<std::endl;


                break;
            default:
                std::cout << "Choix invalide" << std::endl;
                break;
        }

    }
    for(int i;i<nb_cout;i++){
        delete tab1[i];
    }

}
