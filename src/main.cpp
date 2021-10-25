#include <iostream>
#include "nlohmann/json.hpp"

int main()
{
    nlohmann::json dict;
    dict["test"] = 10;
    std::cout << dict["test"] << std::endl;
}