#ifndef GAME_H
#define GAME_H

#include <array>
#include <ostream>

namespace TicTacToe {
	class Game {
		public:
			Game();
			friend std::ostream& operator<<(std::ostream& os,const Game& game);
		private:
			std::array<std::array<char,3>,3> board;
	};
}

#endif //!GAME_H
