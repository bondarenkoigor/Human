#pragma once
#include"c_human.h"
class c_student : public c_human
{
protected:
	int stipend;
public:
	c_student();
	c_student(char* name, int age, int stipend);
	int getstipend() const
	{
		return stipend;
	}
	void setstipend(int stipend);
	friend std::ostream& operator<<(std::ostream& out, c_student student);
};

