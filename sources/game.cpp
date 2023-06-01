#include <game.h>
#include <ostream>
#include <vector>

namespace TicTacToe {
	Game::Game(long unsigned int boardSize) : board{boardSize,std::vector<char>(boardSize,'_')} {}
	Game::Game() : Game(3) {};

	std::ostream& operator<<(std::ostream& os,const Game& game) {
		for(const std::vector<char>& row : game.board) {
			for(const char& cell : row) {
				os<<cell<<' ';
			}
			os<<std::endl;
		}
		return os;
	};
}
