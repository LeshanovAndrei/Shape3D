#pragma once
#include "includes.h"

class Camera
{
public:
	Camera();
	~Camera();
	void MoveCamera(glm::vec3);
private:
	glm::vec3 pos;
	glm::mat4 modelProj;
	glm::mat4 modelView;
	glm::vec3 direction;
};

Camera::Camera()
{
}

Camera::~Camera()
{
}