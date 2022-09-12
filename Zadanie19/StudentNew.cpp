#include "StudentNew.hpp"
#include"json/json.hpp"
namespace ns {
	

	StudentNew::StudentNew(std::string firstName, std::string lastName, int number) :_firstName(firstName), _lastName(lastName), _number(number) {};
	StudentNew::StudentNew()
	{};
	std::string StudentNew::getFirstName() const
	{
		return _firstName;
	}
	std::string StudentNew::getLastName() const
	{
		return _lastName;
	}
	int StudentNew::getNumber() const
	{
		return _number;
	}
	void StudentNew::setFirstName(std::string firstName)
	{
		_firstName = firstName;
	}
	void StudentNew::setLastName(std::string lastName)
	{
		_lastName = lastName;
	}
	void StudentNew::setNumber(int number)
	{
		_number = number;
	}
	
	void to_json(json& j, const StudentNew& s)
	{
		j = json{ {"firstName",s.getFirstName()},{"lastName",s.getLastName()},{"number",s.getNumber()} };
	}

	void from_json(const json& j, StudentNew& s)
	{
		s.setFirstName(j["firstName"]);
		s.setLastName(j["lastName"]);
		s.setNumber(j["number"]);
	}

}