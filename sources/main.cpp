#include <vector>
#include <string_view>
#include <game.h>
#include <iostream>

int main(int argc,char* argv[]) {
	const std::vector<std::string_view> args(argv,argv+argc);

	TicTacToe::Game game{};
	std::cout<<game<<std::endl;
	game.run();

	return 0;
}
