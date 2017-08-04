#include "calc.hpp"

#include <iostream>

int main() {
	Calc calc;
	std::cout << calc.poly(5, 3) << std::endl;
	std::cin.get();
	return 0;
}