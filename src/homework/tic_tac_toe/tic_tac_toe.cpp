//tic_taco_toe.cpp
#include<iostream>
#include<vector>
#include "tic_tac_toe.h"
using std::string;
using std::cout;

bool TicTacToe::game_over()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i, 0] == cell && board[i, 1] == cell && board[i, 2] == cell)
			{
				return true;
			}
			else if (board[0, j] == cell && board[1, j] == cell && board[2, j] == cell)
			{
				return true;
			}
		}
	}

	if (board[0, 0] == cell && board[1, 1] == cell && board[2, 2] == cell)
	{
		return true;
	}
	else if (board[0, 2] == cell && board[1, 1] == cell && board[2, 0] == cell)
	{
		return true;
	}
	return false;
	
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

bool TicTacToe::get_winner()
{
	if (check_row_win(p) || check_column_win(p) || check_diagonal_win(p)) 
	{
		return true;
	}
	return false;
}


bool TicTacToe::check_column_win()
{
	for (int col = 0; col < 3; col++) {
		if (board[0][col] != ' ') {
			if (board[0][col] == board[1][col] &&
				board[1][col] == board[2][col]) {
				p = board[0][col];
				return true;
			}
		}
	}
	return false;
}

bool TicTacToe::check_row_win()
{
	for (int row = 0; row < 3; row++) {
		if (board[row][0] != ' ') {
			if (board[row][0] == board[row][1] &&
				board[row][1] == board[row][2]) {
				p = board[row][0];
				return true;
			}
		}
	}
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (board[1][1] != ' ') {
		if (board[0][0] == board[1][1] &&
			board[1][1] == board[2][2]) {
			p = board[0][0];
			return true;
		}
		if (board[0][2] == board[1][1] &&
			board[1][1] == board[2][0]) {
			p = board[0][0];
			return true;
		}
	}
	return false;
}

void TicTacToe::set_winner()
{
	
}