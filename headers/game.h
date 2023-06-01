#ifndef GAME_H
#define GAME_H

#include <vector>
#include <array>

namespace TicTacToe {
	class Game {
		public:
			Game();
		private:
			std::array<std::array<char,3>,3> board;
	};
}

#endif //!GAME_H
