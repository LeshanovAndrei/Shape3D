#pragma once
#include "Shape.h"
class Prism:public Shape
{
public:
	Prism();
	~Prism();
	void Draw() override;
private:
	float* vertices;
	UINT VBO;
	UINT VAO;
};

Prism::Prism()
{
}

Prism::~Prism()
{
}