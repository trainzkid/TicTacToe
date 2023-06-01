#include <game.h>
#include <array>

TicTacToe::Game::Game() {
	for(std::array row : board)
		row.fill('_');
};
