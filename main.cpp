#include <iostream>
#include <string>
#include <vector>
#include <time.h>

unsigned int nombreAleatoire(unsigned int min , unsigned int max)
{
    srand(time(0));
    for (int i =0;i<100;i++)
    {
        rand();
    }
    return min + (rand() % (max+1-min));
}

unsigned int demanderNombre()
{
    std::string temp;
    std::getline(std::cin, temp);
    return atoi(temp.c_str());
}

void ecrireConsole(std::string aEcrire)
{
    std::cout<<aEcrire;
    if (!aEcrire.empty())
    {
        std::cout<<"\n";
    }
}

void ecrireConsole(unsigned int aEcrire)
{
    std::cout<<aEcrire;
    std::cout<<"\n";
}


int main(int argc, char** argv)
{
    
}
