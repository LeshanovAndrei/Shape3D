#pragma once
#include "Shape.h"

class Cube : public Shape
{
public:
	Cube();
	~Cube();
	void Draw() override;

private:
	float* vertices;
	UINT VBO;
	UINT VAO;
};

Cube::Cube()
{
}

Cube::~Cube()
{
	delete[] vertices;
}