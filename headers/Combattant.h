#pragma once
#include <string>
class Combattant
{
    public:
    virtual void attaquer(Combattant& cible)=0;
    virtual void defendre(int degat)=0;
    std::string m_nom;
    virtual std::string description();
};