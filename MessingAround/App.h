#pragma once
#include <iostream>
#include <string.h>
#include <vector>
#include "Level.h"

class App {
public:

	App();
	void run();

private:
	Level level;
	std::vector<Block> blocks;
	//level-increment speed of block y position
	//player-if you lose and two player was selected alternate player 
	//timer-how long you have been playing
	//score-cuurent score
	//currentBlock-block your moving?
	//QueuedBlock-block you will move
	//storeBlocks in a queue
};