#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"

using std::vector;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test Vector of Primes")
{
	vector_of_primes(2, 3, 5, 7);
	REQUIRE(vector() == 10);

	vector_of_primes(2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47);
	REQUIRE(vector() == 50);
}