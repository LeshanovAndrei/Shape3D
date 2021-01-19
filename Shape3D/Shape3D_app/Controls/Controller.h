#pragma once
#include "../includes.h"
class Controller
{
public:
	Controller();
	~Controller();
	virtual void Move() = 0;
	virtual void ChangeSize(float) = 0;
	virtual void ChangeColor() = 0;
	virtual void DrawObjects() = 0;
	virtual void NextObject() = 0;
	virtual void PrewObject() = 0;
	virtual void Aggregate() = 0;
	virtual void Undo() = 0;
private:

};

Controller::Controller()
{
}

Controller::~Controller()
{
}