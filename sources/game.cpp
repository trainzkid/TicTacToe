#include <game.h>
#include <ostream>
#include <vector>
#include <iostream>
#include <utility>

namespace TicTacToe {
	Game::Game(long unsigned int boardSize) : board{boardSize,std::vector<char>(boardSize,'_')},players{'x','o'},isRunning{true} {
		// "Pick your mark: "
		// x
		// o
		// b
		// d
		// custom
	}
	Game::Game() : Game(3) {};

	std::ostream& operator<<(std::ostream& os,const Game& game) {
		os<<std::endl<<"Board: "<<std::endl;
		for(const std::vector<char>& row : game.board) {
			for(const char& cell : row) {
				os<<cell<<' ';
			}
			os<<std::endl;
		}
		return os;
	};

	void Game::run() {
		// ask players one at a time where they'd like to place their mark
		for(const char player : players) {
			std::pair<int,int> coordinate{};
			std::cout<<"Column: ";
			std::cin>>coordinate.first;
			std::cout<<"Row: ";
			std::cin>>coordinate.second;

			// correct for 0-based index
			coordinate.first--;
			coordinate.second--;
		// check if requested place is valid (doesn't contain another player's mark)
			if(board[coordinate.second][coordinate.first]=='_')
				board[coordinate.second][coordinate.first]=player;

		// check if last mark placed results in a win for that player

		// display board
			std::cout<<*this<<std::endl;
		}
	}
}
