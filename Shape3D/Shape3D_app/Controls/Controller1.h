#pragma once
#include "Controller.h"
#include "../Shapes/Shape.h"
#include "ShapeFactory.h"
class Controller1 : public Controller
{
public:
	Controller1();
	~Controller1();
private:
	std::unique_ptr<ShapeFactory> shapeFactory;
	std::vector <std::unique_ptr<Shape>> objects;
	std::unique_ptr<Shape> oldCurent;
	int selectedNumber;
};

Controller1::Controller1()
{
}

Controller1::~Controller1()
{
}