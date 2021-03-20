#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "headers/Personnage.h"
#include "utils.h"

unsigned int nombreAleatoire(unsigned int min , unsigned int max)
{
    srand(time(0));
    for (int i =0;i<100;i++)
    {
        rand();
    }
    return min + (rand() % (max+1-min));
}

int main(int argc, char** argv)
{
    Personnage perso_principal(utils::demander_string());
    utils::ecrireConsole(perso_principal.m_nom);
}