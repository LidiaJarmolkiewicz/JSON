#include <iostream>
#include"json/json.hpp"
using json = nlohmann::json;

int main()
{
    std::string jsonString(R"(
{ 
   "company":{ 
      "employee":{ 
         "name":"Stefan",
         "payroll":{ 
            "salary":1500,
            "bonus":800
         }
      }
   }

})");

    json j = json::parse(jsonString);
    json emp = j["company"]["employee"];

    std::string employeeName = emp["name"];//.get<std::string>();..get<std::int>();
   
   int  salary = emp["payroll"]["salary"];
   int bonus= emp["payroll"]["bonus"];
   int sum = salary + bonus;
   std::cout << "zarobki " << employeeName << " wynosza " << sum;


}
