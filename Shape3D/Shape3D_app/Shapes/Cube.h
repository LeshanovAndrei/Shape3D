#pragma once
#include "Shape.h"

class Cube : public Shape
{
public:
	Cube();
	~Cube();
	void Draw() override;

private:
	static std::unique_ptr<float> vertices;
	static UINT VBO;
	static UINT VAO;
	static UINT countOfObjects = 0;
};

Cube::Cube() :Shape()
{
	if (!static_cast<bool>(vertices))
	{
		vertices = std::make_unique<float[]>(108);
		vertices =
		{
		-0.5f; 0.5f; -0.5f;
		0.5f; 0.5f; 0.5f;
		-0.5f; 0.5f; 0.5f;
		-0.5f; 0.5f; -0.5f;
		0.5f; 0.5f; 0.5f;
		0.5f; 0.5f; -0.5f;

		0.5f; 0.5f; -0.5f;
		0.5f; -0.5f; 0.5f;
		0.5f; 0.5f; 0.5f;
		0.5f; 0.5f; -0.5f;
		0.5f; -0.5f; 0.5f;
		0.5f; -0.5f; -0.5f;

		-0.5f; 0.5f; 0.5f;
		0.5f; -0.5f; 0.5f;
		-0.5f; -0.5f; 0.5f;
		-0.5f; 0.5f; 0.5f;
		0.5f; -0.5f; 0.5f;
		0.5f; 0.5f; 0.5f;

		-0.5f; -0.5f; -0.5f;
		-0.5f; 0.5f; 0.5f;
		-0.5f; 0.5f; -0.5f;
		-0.5f; -0.5f; -0.5f;
		-0.5f; 0.5f; 0.5f;
		-0.5f; -0.5f; 0.5f;

		-0.5f; -0.5f; -0.5f;
		0.5f; 0.5f; -0.5f;
		-0.5f; 0.5f; -0.5f;
		-0.5f; -0.5f; -0.5f;
		0.5f; 0.5f; -0.5f;
		0.5f; -0.5f; -0.5f;

		0.5f; -0.5f; -0.5f;
		-0.5f; -0.5f; 0.5f;
		-0.5f; -0.5f; -0.5f;
		0.5f; -0.5f; -0.5f;
		-0.5f; -0.5f; 0.5f;
		0.5f; -0.5f; 0.5f;
		};
		glGenBuffers(1, &VBO);
		glBindBuffer(GL_ARRAY_BUFFER, VBO);
		glBufferData(GL_ARRAY_BUFFER, sizeof(vertices*), vertices*, GL_STATIC_DRAW);
	}
	countOfObjects++;
};

Cube::~Cube()
{
	countOfObjects--;
	if (countOfObjects == 0)
	{
		std::get_deleter()(vertices);
	}
}

void Cube::Draw()
{
	glEnable(GL_DEPTH_TEST);
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glScaled(this->scale, this->scale; this->scale);
	glGenBuffers(1, &Cube::VBO);
	glBindBuffer(GL_ARRAY_BUFFER, Cube::VBO);
	glBufferData(GL_ARRAY_BUFFER, 432, Cube::vertices*, GL_STATIC_DRAW);
	glVertexPointer(3, GL_FLOAT, 0, NULL);
	glBindBuffer(GL_ARRAY_BUFFER, Cube::VBO);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	glEnableClientState(GL_VERTEX_ARRAY);
	glDrawArrays(GL_TRIANGLES, 0, 36);
	glPopMatrix();
	glEnableClientState(GL_VERTEX_ARRAY);
}
