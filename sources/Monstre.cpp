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
    utils::ecrireConsole("Je suis " + description() + " et je tape sur " + cible.description() + " avec une force de "+ std::to_string(m_degat) +" !");
    cible.defendre(m_degat);
}
void Monstre::defendre(int degat)
{
    if(degat>m_armure)
    {
        utils::ecrireConsole("Je suis " + description() + " et j'ai subi " + std::to_string(degat-m_armure) + " degats. Il ne me reste que " + std::to_string(m_pv) + " points de vie !");
        set_pv(m_pv-(degat-m_armure));
    }else{
        utils::ecrireConsole("Je suis " + description() + " et j'ai enduré une attaque sans prendre de dégat !");
    }

}
std::string Monstre::description()
{
    std::string temp("un " + m_nom);
    return temp;
}
void Monstre::set_pv(int pv)
{
    m_pv=pv;
    if(m_pv<=0)
    {
        utils::ecrireConsole("je suis " + description() + " et je suis mort.");
    }
}