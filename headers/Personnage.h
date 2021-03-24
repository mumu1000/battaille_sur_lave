#pragma once
#include <string>
#include "Combattant.h"
class Personnage : public Combattant
{
    public:
    Personnage();
    Personnage(std::string nom);
    int m_pv;
    int m_degat;
    int m_armure;
    void attaquer(Combattant& cible);
    void defendre(int degat);
    std::string description();
};