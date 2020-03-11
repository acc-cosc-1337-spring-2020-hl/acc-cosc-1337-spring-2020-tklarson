#include "tic_tac_toe.h"
#include<iostream>
#include<vector>

using std::cout; using std::cin;
using std::vector;

int main() 
{
	string player = "y";
	TicTacToe game;

	while (!(player =="O"||)
	{
		try
		{
			cout << "Enter player: ";
			cin >> playerl

				game.start_gmae(player);

		}
		catch (Error e)
		{
			cout << e.get_message();
		}
	}

	
	do
	{
		int pos;
		cout << "position:";
		cin >> pos;
		game.mark_board(pos);
		game.display_board;

	} while (!game.game_over());

	return 0;
}