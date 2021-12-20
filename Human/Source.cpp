#include<iostream>
#include"c_pupil.h"
#include"c_student.h"
#include"c_worker.h"
int main()
{
	c_pupil pupil((char*)"name", 7, 10);
	std::cout << pupil << "\n";
	c_student student((char*)"name", 19, 1000);
	std::cout << student << "\n";
	c_worker worker((char*)"name", 25, 12345);
	std::cout << worker;
}