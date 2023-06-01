#include <game.h>
#include <ostream>
#include <array>

namespace TicTacToe {
	Game::Game() : board{{{},{},{}}} {		// no clue why 2 sets of {} are required, but it errors out about too many init lists otherwise /shrug
		for(std::array<char,3>& row : board)
			row.fill('_');
	};

	std::ostream& operator<<(std::ostream& os,const TicTacToe::Game& game) {
		for(const std::array<char,3>& row : game.board) {
			for(const char& cell : row) {
				os<<cell<<' ';
			}
			os<<std::endl;
		}
		return os;
	};
}
