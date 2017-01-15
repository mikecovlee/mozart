#include "../headers/bind.hpp"
#include <cstdio>
int test(int i, double &d, bool b)
{
	if (b)
		printf("%d %lf\n", i, b);
	d = 1.123;
}
int main()
{
	double v;
	auto a = cov::bind(&test, cov::_2, cov::_1, true);
	a(v, 2);
	printf("%lf\n", v);
	auto b = cov::bind(&test, 4, 1.2, true);
	b();
	return 0;
}