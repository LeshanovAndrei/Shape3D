#pragma once
#include "../includes.h"

class Shape
{
public:
	Shape();
	~Shape();
	virtual void Draw() = 0;
private:
	
};

Shape::Shape()
{
}

Shape::~Shape()
{
}