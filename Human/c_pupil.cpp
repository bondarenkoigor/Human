#include "c_pupil.h"



c_pupil::c_pupil() : c_human()
{
	this->avg_grade = 0;
}

c_pupil::c_pupil(char* name, int age, float avg_grade) : c_human(name, age)
{
	this->avg_grade = avg_grade;
}

void c_pupil::setgrade(float avg_grade)
{
	this->avg_grade = avg_grade;
}

std::ostream& operator<<(std::ostream& out, c_pupil pupil)
{
	out << "name: " << pupil.name << "\tage: " << pupil.age << "\t average grade: " << pupil.avg_grade;
	return out;
}
