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

}

string TicTacToe::get_player() const
{

}

void TicTacToe::set_next_player()
{

}

