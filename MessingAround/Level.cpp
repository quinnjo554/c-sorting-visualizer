#include "Level.h"

Level::Level()
	:x(0)
{
	

}
Level::~Level() {
	for (int i = 0; i < x; i++) {
		delete[] levelBorders[i];
	}
	delete[] levelBorders;
	
}

void Level::setIsSorted(bool sorted) {
	 this->isSorted = sorted;
}
bool Level::getIsSorted() {
	return this->isSorted;
}

int Level::greet(int& x)
{
	std::cout << "Hello Welcome to sort visualizer\n";
	std::cout << "Please enter the number of random numbers to be sorted(max:100 min:3)\n#-";
	std::cin >> x;
	while (x > 100 || x < 2) {
		std::cout << "Please enter the number of random numbers to be sorted\n#-";
		std::cin >> x;
	}

	return x;
}


void Level::initLevel()
{
	//creating an array of pointers to arrays
	this->levelBorders = new std::string * [20];
	for (int row = 0; row < 20; row++) {
		//each index points to a string pointer
		this->levelBorders[row] = new std::string[100];
		for (int col = 0; col < 100; col++) {
			if (row == 19 || col == 0) { this->levelBorders[row][col] = "#"; }
			else { this->levelBorders[row][col] = " "; }
			std::cout << this->levelBorders[row][col];
		}
		std::cout << "\n";

		}
}

void Level::drawLevel() {
	for (int row = 0; row < 20; row++) {
		for (int col = 0; col < 100; col++) {
			std::cout << this->levelBorders[row][col];
		}
		std::cout << std::endl;
	}
}


void Level::initBlocks(int numOfBlocks) {
	//allocated blockarr
	 this->blockArr = new Block[numOfBlocks];

	 // Seed the random number generator
	 srand(time(0));
	 // Generate a random number between 1 and 100
	 int randomNumber = rand() % numOfBlocks;

	//iterated through blockarr and initialize
	for (int i = 0; i < numOfBlocks; i++) {
		this->blockArr[i] = Block(numOfBlocks,i,3);
	}

}

void Level::drawBlock(int index) {
		this->levelBorders[18][index] = "P";
		
}
