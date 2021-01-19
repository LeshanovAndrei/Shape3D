#pragma once
#include "../includes.h"

class Shape
{
public:
	Shape();
	~Shape();
	virtual void Draw() = 0;
	void Move(glm::vec3);
	void ChangeColor(glm::vec3);
	void ChangeSize(float);
private:
	glm::vec3 pos;
	glm::vec3 color;
	float scale;
	std::string vertexShader;
	std::string fragmentShader;
};

Shape::Shape()
{
}

Shape::~Shape()
{
}