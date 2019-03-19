#include "RealCalculator.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("Test with zero", "[classic]")
{
	REQUIRE(1-1 == 0);
}