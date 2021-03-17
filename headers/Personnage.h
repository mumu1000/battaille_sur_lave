#pragma once
#include <string>
class Personnage
{
    public:
    Personnage();
    Personnage(std::string nom);
    int m_pv;
    std::string m_nom;
    int m_degat;
    int m_armure;
};