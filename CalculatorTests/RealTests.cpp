#include "Calculator.h"
#include "RealCalculator.h"
#include "gtest/gtest.h"

TEST(CalculatorTests, Sum) {
	RealCalculator calc;

	double res = calc.calculate(2.0, 3.0, SUM);

	EXPECT_EQ(5, res);
}