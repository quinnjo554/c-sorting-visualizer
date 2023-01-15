#pragma once
#include <iostream>
#include <string.h>
#include <thread>
#include <chrono>
#include "Block.h"

class Level {

public:
	Level();
	~Level();
	int x;
	int greet(int &x);
	void initLevel();
	void initBlocks(int numOfBlocks);
	void drawBlock(int index);
	void setIsSorted(bool sorted);
	bool getIsSorted();
	void drawLevel();

private:
	std::string** levelBorders;
	Block* blockArr;
	bool isSorted;
};