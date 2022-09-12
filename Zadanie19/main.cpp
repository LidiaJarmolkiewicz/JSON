#include"json/json.hpp"
#include <algorithm>
#include <iostream>
#include"StudentNew.hpp"
#include<fstream>
#include<list>
#include<vector>

int main()
{
    using json = nlohmann::json;
   
    std::vector<ns::StudentNew> list1 = {};
    list1.emplace_back("John", "Dear", 1234);
    list1.emplace_back("Kate", "Brown", 5469);
    list1.push_back(ns::StudentNew("Tom", "Johns", 7412));

    //wpisanie do jsona
    json j;
    j["Students"] = list1;
    std::ofstream o("students.json");
    o << std::setw(4) << j << std::endl;

    //odczyt z jsona
    std::ifstream ifs("students.json");
    json jf = json::parse(ifs);
    std::list<ns::StudentNew> list2;
    for (auto& elem : jf["Students"])
    {
       
        list2.push_back(elem.get<ns::StudentNew>());
    }
    for_each(list2.begin(), list2.end(), [](const ns::StudentNew& x) {std::cout << x.getFirstName() << " " << x.getLastName() << " " << x.getNumber() << std::endl; });
}
