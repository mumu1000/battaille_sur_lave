#include "Monstre.h"

Monstre::Monstre()
{
    m_pv=10;
    m_nom="monstre par defaut";
    m_armure=0;
    m_degat=2;
}
void Monstre::attaquer(Combattant& cible)
{
    cible.defendre(m_degat);
}
void Monstre::defendre(int degat)
{
    if(degat>m_armure)
        m_pv-=degat-m_armure;
}