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
			void run();
		private:
			std::vector<std::vector<char>> board;
			bool check4Win();
			std::vector<char> players;
			bool isRunning;
	};
}

#endif //!GAME_H
