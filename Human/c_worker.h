#pragma once
#include"c_human.h"
class c_worker : c_human
{
protected:
	int pay;
public:
	c_worker();
	c_worker(char* name, int age, int pay);
	int getpay() const
	{
		return pay;
	}
	void setpay(int pay);
	friend std::ostream& operator<<(std::ostream& out, c_worker worker);
};

