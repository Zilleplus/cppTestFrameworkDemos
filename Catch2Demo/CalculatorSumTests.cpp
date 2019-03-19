#include "catch.hpp"
#include "RealCalculator.h"

TEST_CASE("Test sum of two real numbers", "[Calculator]")
{
	RealCalculator calculator;

	SECTION("Add 2 numbers") 
	{
		REQUIRE(calculator.calculate(1,2,SUM)==3.0);
	}
}

TEST_CASE("Generators") {
	auto i = GENERATE(1, 2, 3);
	auto j = GENERATE(3, 2, 1);
	RealCalculator calculator;

	SECTION("Sum of posssive is always possive") {
		REQUIRE(0 <= calculator.calculate(i,j,SUM));
	}
}

TEST_CASE("parameter based SUM test")
{
	RealCalculator calculator;

	for (const auto[left, right,result] : {
		   std::make_tuple(1, 2,3),
		   std::make_tuple(2, 4,6),
		   std::make_tuple(3, 6,9),
		   std::make_tuple(4, 8,12),
		})
	{
		SECTION("SUM OF " + std::to_string(left) +"and "+ std::to_string(right))
		{
			CHECK(calculator.calculate(left,right,SUM)==result);
		}
	}
}

TEMPLATE_TEST_CASE("Generic parameter based SUM test","Calculator<T> tests",int,float)
{
	RealCalculator calculator;

	for (const auto[left, right, result] : {
		   std::make_tuple(1, 2,3),
		   std::make_tuple(2, 4,6),
		   std::make_tuple(3, 6,9),
		   std::make_tuple(4, 8,12),
		})
	{
		SECTION("SUM OF " + std::to_string(left) + "and " + std::to_string(right))
		{
			CHECK(calculator.calculate(left, right, SUM) == result);
		}
	}
}
