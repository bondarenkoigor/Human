#pragma once
#include<iostream>
class c_human
{
protected:
	char* name;
	int age;
public:
	c_human();
	c_human(char* name, int age);
	char* getname() const
	{
		return name;
	}
	int getage() const
	{
		return age;
	}
	void setname(char* name);
	void setage(int age);
	friend std::ostream& operator<<(std::ostream& out, c_human human);
};