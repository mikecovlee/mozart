#include "../headers/memory.hpp"
#include <iostream>
int main()
{
	cov::storage<int> s;
	auto ptr=s.alloc(10);
	std::cout<<s.get(ptr)<<std::endl;
	s.free(ptr);
	return 0;
}
