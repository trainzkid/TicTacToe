#include <game.h>
#include <ostream>
#include <vector>
#include <iostream>
#include <utility>
#include <limits>

namespace TicTacToe {
	Game::Game(long unsigned int boardSize) : board{boardSize,std::vector<char>(boardSize,'_')},players{'x','o'},isRunning{true} {
		// "Pick your mark: "
		// x
		// o
		// b
		// d
		// custom
	}
	Game::Game() : Game(3) {};

	std::ostream& operator<<(std::ostream& os,const Game& game) {
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
		while(isRunning) {
			// ask players one at a time where they'd like to place their mark
			for(const char player : players) {
				std::cout<<"Player "<<player<<", please choose a space to place your mark. "<<std::endl;
				std::pair<int,int> coordinate{};

				bool moveAllowed = false;
				 while(!moveAllowed) {
					std::cout<<"Column: ";
					std::cin>>coordinate.first;
					// std::cin.ignore(std::numeric_limits<std::streamsize>::max()); causes stall
					std::cout<<"Row: ";
					std::cin>>coordinate.second;
					// std::cin.ignore(std::numeric_limits<std::streamsize>::max()); causes stall

					// correct for 0-based index
					coordinate.first--;
					coordinate.second--;

					// check if requested place is valid (doesn't contain another player's mark)
					if(board[coordinate.second][coordinate.first]=='_')
						moveAllowed = true;
					else
						std::cout<<"That space has already been taken! Pick another. "<<std::endl;
				} 	

				board[coordinate.second][coordinate.first]=player;

				// display board
				std::cout<<*this<<std::endl;

				// check if last mark placed results in a win for that player
				if(check4Win()) {
					std::cout<<"Win!"<<std::endl;
					isRunning = false;
				}
			}
		}
	}

	bool Game::check4Win() {
		for(const char player : players) {
			// top -> bottom along center line
			int matches{};
			for(std::vector<char> row : board) {
				int center = (board.size() / 2);
				if(row[center] == player)
					matches++;
			}
			if(matches == board.size())
				return true;
		}
		return false;
	}
}
