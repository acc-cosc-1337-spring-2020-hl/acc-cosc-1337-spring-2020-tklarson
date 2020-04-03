//tic_taco_toe.h
#include<string>
using std::string;
using std::vector;
#include<vector>

class TicTacToe
{
public:

	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	string get_player() const { return player; };
	void display_board()const;
	bool get_winner();
private:
	void set_next_player();
	void clear_board();
	bool check_board_full();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void set_winner();
	string player;
	vector<string>pegs{ 9, " " };
	string winner;
};

class Error
{
public:
	Error(std::string msg) : message{ msg } {};
	string get_message()const { return message; };

private:
	string message;

};
