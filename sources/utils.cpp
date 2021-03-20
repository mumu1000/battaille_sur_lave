#include <iostream>
#include <string>
#include "utils.h"

void utils::ecrireConsole(std::string aEcrire)
{
    std::cout<<aEcrire;
    if (!aEcrire.empty())
    {
        std::cout<<"\n";
    }
}

void utils::ecrireConsole(unsigned int aEcrire)
{
    std::cout<<aEcrire;
    std::cout<<"\n";
}

unsigned int utils::demanderNombre()
{
    std::string temp;
    std::getline(std::cin, temp);
    return atoi(temp.c_str());
}

std::string utils::demander_string()
{
    std::string temp;
    std::getline(std::cin, temp);
    return temp;
}