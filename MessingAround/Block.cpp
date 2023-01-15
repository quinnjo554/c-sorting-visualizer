#pragma once
#include "Block.h"

Block::Block(double p_value, int p_height, int p_x_pos)
	:value(p_value), height(p_height), x_pos(p_x_pos)
{

}

Block::Block(double p_value)
     :value(p_value), height(0), x_pos(0)
{

}

Block::Block()
	:value(0), height(0), x_pos(0)
{

}

int Block::getX() {
	return this->x_pos;
}

double Block::getValue() {
	return this->value;
}

int Block::getHeight() {
	return this->height;
}

void Block::setX(int x) {
	this->x_pos = x;
}

void Block::setValue(double v) {
	this->value = v;
}

void Block::setHeight(int h) {
	this->height = h;
}