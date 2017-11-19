#include "../mozart/bind.hpp"
#include <cstdio>
int test(int i, double &d, bool b)
{
	if (b)
		printf("%d %lf\n", i, d);
	d = 1.123;
	return 0;
}
int main()
{
	double v=0;
	auto a = cov::bind(&test, cov::_2, cov::_1, true);
	a(v, 2);
	printf("%lf\n", v);
	auto b = cov::bind(&test, 4, v, true);
	b();
	return 0;
}
