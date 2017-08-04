#include "calc.hpp"
#include <cmath>
#include <gtest\gtest.h>

TEST(libapp, poly)
{
	Calc calc;

	auto x = 2;
	auto n = 5;

	float res = 0;
	for (std::uint32_t i = 0; i < n; ++i) {
		res += pow(x, i + 1);
	}
	EXPECT_EQ(calc.poly(x, n), res);

}