#pragma once
#include "../Shapes/Shape.h"
#include "../Shapes/Cube.h"
#include "../Shapes/Sphere.h"
#include "../Shapes/Prism.h"

class ShapeFactory
{
public:
	ShapeFactory();
	~ShapeFactory();
	Shape* CubeMake();
	Shape* SphereMake();
	Shape* PrismMake();
};

ShapeFactory::ShapeFactory()
{
}

ShapeFactory::~ShapeFactory()
{
}

