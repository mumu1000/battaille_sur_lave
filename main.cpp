#include <iostream>
#include <string>

int main(int argc, char** argv)
{
    std::cout<<"coucou elowan\n";
    std::string loltest;
    std::getline(std::cin, loltest);
    std::cout<<loltest;
    if (!loltest.empty())
    {
        std::cout<<"\n";
    }
    return 0;
}