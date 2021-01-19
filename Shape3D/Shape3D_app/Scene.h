#pragma once
#include "includes.h"
#include "Controls/Controller.h"
#include "Camera.h"

class Scene
{
public:
	Scene();
	~Scene();
	void RedrawEverything();
	void EventsCheck();

private:
	std::unique_ptr<Controller> mainControl;
	std::unique_ptr<Camera> mainCamera;
};

Scene::Scene()
{
}

Scene::~Scene()
{
}