#include <iostream>
#include "../headers/memory.hpp"
#include "../headers/timer.hpp"
int main()
{
	cov::allocator<int,64> alloc;
	//alloc.disable_buffer();
	auto ts=cov::timer::time(cov::timer::time_unit::milli_sec);
	for(std::size_t i=0; i<100000; ++i) {
		int* ptr=alloc.alloc();
		alloc.free(ptr);
	}
	std::cout<<cov::timer::time(cov::timer::time_unit::milli_sec)-ts<<std::endl;
	return 0;
}
