#include <iostream>
#include <string>

int main(int argc, char** argv)
{

    
    std::cout<<"coucou elowan\n";
    do
    { 
        std::string loltest;
        std::getline(std::cin, loltest);
        std::cout<<loltest;
        if (!loltest.empty())
        {
            std::cout<<"\n";
        }
    } while ();
    

    return 0;
}