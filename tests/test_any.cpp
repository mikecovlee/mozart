#include "../headers/any.hpp"
#include <iostream>
static int count=0;
struct foo {
	int dat;
	int mc;
	foo()
	{
		++count;
		mc=count;
		std::cerr<<__func__<<mc<<std::endl;
	}
	foo(const foo& obj):dat(obj.dat)
	{
		++count;
		mc=count;
		std::cerr<<__func__<<mc<<std::endl;
	}
	~foo()
	{
		std::cerr<<__func__<<mc<<std::endl;
	}
};
int main()
{
	cov::any var=10;
	var=(10>1);
	var.const_val<bool>();
	return 0;
}