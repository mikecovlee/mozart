#include "../mozart/any.hpp"
#include <iostream>
#include <unordered_map>
int main()
{
	std::unordered_map<cov::any,cov::any> map;
	map.emplace(typeid(int),"Hello");
	std::cout<<map.at(typeid(int))<<std::endl;
	return 0;
}
