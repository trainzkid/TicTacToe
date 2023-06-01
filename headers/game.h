#ifndef GAME_H
#define GAME_H

#include <vector>
#include <ostream>

namespace TicTacToe {
	class Game {
		public:
			Game();
			Game(long unsigned int boardSize);
			friend std::ostream& operator<<(std::ostream& os,const Game& game);
		private:
			std::vector<std::vector<char>> board;
	};
}

#endif //!GAME_H
