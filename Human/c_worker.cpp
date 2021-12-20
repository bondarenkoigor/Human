#include "c_worker.h"

c_worker::c_worker() : c_human()
{
	this->pay = 0;
}

c_worker::c_worker(char* name, int age,int pay) : c_human(name,age)
{
	this->pay = pay;
}

void c_worker::setpay(int pay)
{
	this->pay = pay;
}

std::ostream& operator<<(std::ostream& out, c_worker worker)
{
	out << "name: " << worker.name << "\tage: " << worker.age << "\tpay: " << worker.pay;
	return out;
}
