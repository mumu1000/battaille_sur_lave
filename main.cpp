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
        // std::cout<<loltest;
        // if (!loltest.empty())
        // {
        //     std::cout<<"\n";
        // }
    } while (loltest != "STOP!");
    

    return 0;
}