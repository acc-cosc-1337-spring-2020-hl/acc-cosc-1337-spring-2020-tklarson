#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Factorial Function")
{
	int num3 = 6, num4 = 24, num5 = 120;

	factorial(num3, num4, num5);

	REQUIRE(num3 == 6);
	REQUIRE(num4 == 24);
	REQUIRE(num5 == 120);

}
