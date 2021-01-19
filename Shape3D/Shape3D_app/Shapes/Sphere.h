#pragma once
#include "Shape.h"
class Sphere:public Shape
{
public:
	Sphere();
	~Sphere();
	void Draw() override;
private:
	float* vertices;
	UINT VBO;
	UINT VAO;
};

Sphere::Sphere()
{
}

Sphere::~Sphere()
{
}