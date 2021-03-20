#include "Personnage.h"
#include "utils.h"
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

void Personnage::attaquer(Combattant& cible)
{
    utils::ecrireConsole("Je suis le personnage " + m_nom + " et je tape sur une cible avec une force de "+ std::to_string(m_degat) +" !");
    cible.defendre(m_degat);
}

void Personnage::defendre(int degat)
{
    if(degat>m_armure)
    {
        m_pv-=degat-m_armure;
        utils::ecrireConsole("Je suis le personnage " + m_nom + " et j'ai subi " + std::to_string(degat-m_armure) + " degats. Il ne me reste que " + std::to_string(m_pv) + " points de vie !");
    }else{
        utils::ecrireConsole("Je suis le personnage " + m_nom + " et j'ai enduré une attaque sans prendre de dégat !");
    }
}