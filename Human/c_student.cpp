#include "c_student.h"

c_student::c_student() : c_human()
{
	stipend = 0;
}

c_student::c_student(char* name, int age, int stipend) : c_human(name,age)
{
	this->stipend = stipend;
}

void c_student::setstipend(int stipend)
{
	this->stipend = stipend;
}

std::ostream& operator<<(std::ostream& out, c_student student)
{
	out << "name: " << student.name << "\tage: " << student.age << "\tstipend: " << student.stipend;
	return out;
}
