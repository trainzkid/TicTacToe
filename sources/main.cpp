#include <vector>
#include <string_view>
#include <array>
#include <iostream>

int main(int argc,char* argv[]) {
	const std::vector<std::string_view> args(argv,argv+argc);

	// initialize board
	std::array<std::array<char,3>,3> board{{		// no clue why 2 sets of {} are required, but it errors otherwise..
		{'_','_','_'},
		{'_','_','_'},
		{'_','_','_'}
	}};

	// display board
	for(std::array row : board) {
		for(char cell : row) {
			std::cout<<cell<<' ';
		}
		std::cout<<std::endl;
	}

	return 0;
}
