//tic_taco_toe.h
#include<string>
using std::string;
#include<vector>

class TicTacToe
{
public:

	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	string get_player() const { return player; };
	void display_board()const;
private:
	void set_next_player();
	void clear_board();
	bool check_board_full();
	std::string player;
	std::vector<std::string>pegs{ 9, " " };
};

class Error
{
public:
	Error(std::string msg) : message{ msg } {};
	std::string get_message()const { return message; };

private:
	std::string message;

};
