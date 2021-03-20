#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Personnage.h"
#include "utils.h"
#include "Monstre.h"
#include "Personnage.h"
#include "Squelette.h"
#include "Zombie.h"

unsigned int nombreAleatoire(unsigned int min , unsigned int max)
{
    srand(time(0));
    for (int i =0;i<100;i++)
    {
        rand();
    }
    return min + (rand() % (max+1-min));
}

int main(int argc, char** argv)
{
    Personnage perso_principal(utils::demander_string());
    utils::ecrireConsole(perso_principal.m_nom);
    Monstre monstre_test=Zombie();
    while (monstre_test.m_pv>0 && perso_principal.m_pv>0)
    {
        perso_principal.attaquer(monstre_test);
        if (monstre_test.m_pv>0)
            monstre_test.attaquer(perso_principal);
    }
    if (perso_principal.m_pv<=0)
    {
        utils::ecrireConsole("vous etre mort. prout.");
        return 0;
    }
    if (monstre_test.m_pv<=0)
    {
        utils::ecrireConsole("protchproutbleurk");
        return 0;
    }
    return 0;
}