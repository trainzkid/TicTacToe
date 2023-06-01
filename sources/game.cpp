#include <game.h>
#include <ostream>
#include <vector>
#include <iostream>

namespace TicTacToe {
	Game::Game(long unsigned int boardSize) : board{boardSize,std::vector<char>(boardSize,'_')},players{'x','o'},isRunning{true} {}
	Game::Game() : Game(3) {};

	std::ostream& operator<<(std::ostream& os,const Game& game) {
		os<<"Player marks: ";
		for(const char& player : game.players)
			os<<player<<' ';
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
		
		// check if requested place is valid (doesn't contain another player's mark)

		// check if last mark placed results in a win for that player
		 
	}
}
