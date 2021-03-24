#pragma once
#include <string>
#include "Combattant.h"
class Monstre : public Combattant
{
    public:
    Monstre();
    int m_pv;
    int m_degat;
    int m_armure;
    void attaquer(Combattant& cible);
    void defendre(int degat);
    std::string description();
    void set_pv(int pv);
};