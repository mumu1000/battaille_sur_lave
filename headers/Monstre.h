#pragma once
#include <string>
#include "Combattant.h"
class Monstre : public Combattant
{
    public:
    Monstre();
    int m_pv;
    std::string m_nom;
    int m_degat;
    int m_armure;
    void attaquer(Combattant& cible);
    void defendre(int degat);
};