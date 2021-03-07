#include <iostream>
#include <string>
#include <vector>

int main(int argc, char** argv)
{

    
    std::cout<<"coucou elowan\n";
    std::string loltest;
    std::vector<std::string> tableauLignes;
    do
    { 
        std::getline(std::cin, loltest);
        if(loltest != "STOP!")
            tableauLignes.push_back(loltest) ;
        
    } while (loltest != "STOP!");
    
    for(unsigned int i = 0; i<tableauLignes.size();i++)
    {
        std::cout<<tableauLignes[i];
        if (!tableauLignes[i].empty())
        {
            std::cout<<"\n";
        }
    }
    std::cout << "J'ai fini\n";
    return 0;
}