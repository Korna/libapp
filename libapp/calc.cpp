#include "calc.hpp"
#include <cmath>
float Calc::poly(float x, std::uint32_t n) {

	float res = 0;
	for (std::uint32_t i = 0; i < n; ++i) {
		res += pow(x, i + 1);
	}

	return res;
}