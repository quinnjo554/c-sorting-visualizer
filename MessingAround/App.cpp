#include "App.h"
#include <Windows.h>

App::App()
{
	
	//player
	//blocks
	//level
	//score
}

void App::run()
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.dwSize = 100;
	cursorInfo.bVisible = false;
	SetConsoleCursorInfo(consoleHandle, &cursorInfo);
	//menu prompt
	//choose sort or search algo
	//choose number wished to sort
	int x = 0;
	std::cout << "Hello Welcome to sort visualizer\n";
	std::cout << "Please enter the number of random numbers to be sorted(max:100 min:3)\n#-";
	std::cin >> x;
	int count = x;
	this->level.initLevel();
	this->level.initBlocks(x);
	while (true) {
		system("cls"); // Windows
		system("color a");
		this->level.drawLevel();
		for (int i = 0; i < x; i++) {
			this->level.drawBlock(i);
			this->level.drawLevel();
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(400));
	}
}
