#pragma once
#include"c_human.h"
class c_pupil : public c_human
{
protected:
	float avg_grade;
public:
	c_pupil();
	c_pupil(char* name, int age, float avg_grade);
	float getgrade() const
	{
		return avg_grade;
	}
	void setgrade(float avg_grade);
	friend std::ostream& operator<<(std::ostream& out, c_pupil pupil);
};

