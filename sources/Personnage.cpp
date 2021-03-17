#include "Personnage.h"

Personnage::Personnage()
{
    m_pv=100;
    m_nom="nom par defaut";
    m_armure=1;
    m_degat=5;
}

Personnage::Personnage(std::string nom)
{
    m_pv=100;
    m_nom=nom;
    m_armure=1;
    m_degat=5;
}