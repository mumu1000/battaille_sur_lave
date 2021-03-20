#include "Monstre.h"
#include "utils.h"

Monstre::Monstre()
{
    m_pv=10;
    m_nom="monstre par defaut";
    m_armure=0;
    m_degat=2;
}
void Monstre::attaquer(Combattant& cible)
{
    utils::ecrireConsole("Je suis un " + m_nom + " et je tape sur une cible avec une force de "+ std::to_string(m_degat) +" !");
    cible.defendre(m_degat);
}
void Monstre::defendre(int degat)
{
    if(degat>m_armure)
    {
        m_pv-=degat-m_armure;
        utils::ecrireConsole("Je suis un " + m_nom + " et il ne me reste que " + std::to_string(m_pv) + " points de vie !");
    }else{
        utils::ecrireConsole("Je suis un " + m_nom + " et j'ai esquivé une attaque !");
    }
}