#pragma once
#include <string>
#include <vector>
class Block {
public:
	Block(double p_value, int p_height, int p_x_pos);
	Block(double p_value);
	Block();
	double getValue();
	int getX();
	int getHeight();
	void setValue(double v);
	void setX(int x);
	void setHeight(int h);
private:
	double value;
	int height;
	int x_pos;
};