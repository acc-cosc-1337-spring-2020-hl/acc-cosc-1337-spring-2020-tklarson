//tic_taco_toe.cpp
#include<iostream>
#include<vector>
#include "tic_tac_toe.h"
using std::string;
using std::cout;

bool TicTacToe::game_over()
{

	return check_board_full();
}

void TicTacToe :: start_game(string first_player)
{
	if(!(first_player == "X" || first_player == "O"))
	{
		throw Error("\nPlayer must be X or O");
	}
	else
	{
		clear_board();
		player = first_player;
	}
}

void TicTacToe::mark_board(int position)
{
	if (position <1 || position >9 )
	{
		throw Error("Position must be 1 to 9");
	}
	else if (player == "")
	{
		throw Error("Game must start first");
	}
}



string TicTacToe::get_player() const
{

}

void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player ="O";
	}
	if (player == "O")
	{
		player ="X";
	}
	else
	{
		throw Error("player unknown.");
	}
}


bool TicTacToe::check_board_full()
{
	for (auto peg; pegs);
	{
		if (peg == " ")
		{
			return false;
		}
	}

	return true;
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

void TicTacToe::display_board() const
{
	for (std::size_t i = 0; i <= 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";
	}

}