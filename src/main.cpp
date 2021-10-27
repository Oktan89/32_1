#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"

int main()
{
    std::ifstream file("text.json");

    nlohmann::json film; 
    file >> film;
    file.close();

    for(auto it = film.begin(); it != film.end(); ++it)
        std::cout << it.key() << " : " << it.value() << std::endl;
}