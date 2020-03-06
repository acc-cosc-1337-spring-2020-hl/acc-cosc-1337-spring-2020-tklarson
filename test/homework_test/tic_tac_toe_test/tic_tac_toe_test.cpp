#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") 
{
	REQUIRE(true == true);
}

TEST_CASE("Test can’t call mark board before start game")
{
	TicTacToe mark_board(1);
	REQUIRE(mark_baord() == 1);

	REQUIRE_THROWS_AS(mark_baord(10),
		Error);
}

TEST_CASE("Test start game accepts only X or O")
{
	TicTacToe start_game("X");
	REQUIRE(first_player() == "X");

	REQUIRE_THROWS_AS(first_player("V"),
		Error);
}

TEST_CASE("Test set first player to X")
{
	TicTacToe start_game(X);
	REQUIRE(first_player() == X);

	REQUIRE_THROWS_AS(first_player(V),
		Error);
}

TEST_CASE("Test set first player to O")
{
	TicTacToe start_game("O");
	REQUIRE(first_player() == "O");

	REQUIRE_THROWS_AS(first_player("V"),
		Error);
}

TEST_CASE("Test start game with X game flow")
{

}

TEST_CASE("Test start game with O game flow")
{

}