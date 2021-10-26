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

    std::string name = "the matrix";

    auto it = film.find(name);

    if(it != film.end())
    {
        //std::cout<< it.value() << std::endl;
        auto it2 = it->find("production_year");

        if(it2 != it->end())
        {
            std::cout << *it2 << std::endl;
        }
    }
}