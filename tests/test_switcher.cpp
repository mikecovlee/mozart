#include <iostream>
#include "../mozart/switcher.hpp"
int main()
{
	std::string str;
	std::getline(std::cin,str);
	CovSwitch(str) {
		CovCase("Hello") {
			std::cout<<"Hahaha"<<std::endl;
		}
		EndCovCase;
		CovDefault {
			std::cout<<"Default"<<std::endl;
		} EndCovCase;
	}
	EndCovSwitch;
	return 0;
}
