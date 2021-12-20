#include "c_human.h"

c_human::c_human()
{
	this->name = (char*)"unknown";
	this->age = 0;
}

c_human::c_human(char* name, int age)
{
	this->name = name;
	this->age = age;
}

void c_human::setname(char* name)
{
	this->name = name;
}

void c_human::setage(int age)
{
	this->age = age;
}

std::ostream& operator<<(std::ostream& out, c_human human)
{
	out << "name: " << human.name << "\tage: " << human.age;
	return out;
}
