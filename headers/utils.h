#include <vector>
#include <tuple>
#include <string>

namespace utils
{
    //int menuConsole(std::vector<std::tuple<std::string, int (*)()>>& elements);
    void ecrireConsole(std::string aEcrire);
    void ecrireConsole(unsigned int aEcrire);
    unsigned int demanderNombre();
    std::string demander_string();
}