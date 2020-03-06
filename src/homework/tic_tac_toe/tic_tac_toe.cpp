//tic_taco_toe.cpp

#include "tic_tac_toe.h"
using std::string;

void TicTacToe :: start_game(string first_player)
{
	if(first_player == "X" || first_player == "O")
	{
		player = first_player;
		
	}
	else
	{
		throw Error("\nPlayer must be X or O");
	}
}

void TicTacToe::mark_board(int position)
{
	if (position == 1, 2, 3, 4, 5, 6, 7, 8, 9 )
	{
		position = position;
	}
	else
	{
		throw Error("Position must be 1 to 9");
	}
}

string TicTacToe::get_player() const
{

}

void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		set_next_player("O");
	}
	else
	{
		player = "X";
	}
}

