
#include"json/json.hpp"
#include <iostream>
using json = nlohmann::json;
#include<fstream>

int main()
{
    json j;
    
    j["nazwisko"] = "Jarmolkiewicz";
    j["zajecie"] = "kursantka";
    j["firma"]["1"] = "SDA"; "abc";
    j["firma"]["2"] = "ASD"; "pol";
    j["imie"] ["pierwsze"] = "ALA";
    j["imie"] ["drugie"] = "ELA";
  
    std::ofstream o("moje.dane");
    o << std::setw(4) << j << std::endl;


    std::ifstream i("moje.dane");
    json jf = json::parse(i);
    std::cout << jf<<std::endl;
}