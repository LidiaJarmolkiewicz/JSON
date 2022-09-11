#pragma once
#include"json/json.hpp"
#include <string>


namespace ns
{
	using json = nlohmann::json;


	class StudentNew
	{
	public:
		StudentNew(std::string firstName, std::string lastName, int number);
		StudentNew();
		std::string getFirstName()const;
		std::string getLastName()const;
		int getNumber()const;
		void setFirstName(std::string fName);
		void setLastName(std::string lName);
		void setNumber(int number);
	private:
		std::string _firstName;
		std::string _lastName;
		int _number;
	};
	void to_json(json& j, const StudentNew& s);
	void from_json(const json& j, StudentNew& s);
}

