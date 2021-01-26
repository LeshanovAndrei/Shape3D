#pragma once
#include "../includes.h"
#include "Controller.h"
#include "../Shapes/Shape.h"
#include "ShapeFactory.h"
class Controller1 : public Controller
{
public:
	Controller1();
	~Controller1();
	void AddObject() override;
	void Move() override;
	void ChangeSize(float) override;
	void ChangeColor() override;
	void DrawObjects() override;
	void NextObject() override;
	void PrewObject() override;
	void Aggregate() override;
	void Undo() override;
private:
	std::unique_ptr<ShapeFactory> shapeFactory;
	std::vector <std::unique_ptr<Shape>> objects;
	std::unique_ptr<Shape> oldCurent;
	int selectedNumber;
};

Controller1::Controller1()
{
	shapeFactory = std::make_unique<ShapeFactory>();
	selectedNumber = -1;
}

Controller1::~Controller1()
{
}

void Controller1::AddObject()
{
	int press = _getch();
	try
	{
		objects.push_back(std::make_unique<Shape>(shapeFactory->ShapeMake(press)));//Not sure
	}
	catch (const std::exception&)
	{
		//shape creation error
	}
}

void Controller1::Move()
{
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define UP 72
	while (true)
	{
		if (objects.size() > 0)//may be exception
		{
			int press = _getch();
			switch (press)
			{
			case LEFT:
				objects[selectedNumber]->Move(glm::vec3(-1, 0, 0));
				break;
			case RIGHT:
				objects[selectedNumber]->Move(glm::vec3(1, 0, 0));
				break;
			case DOWN:
				objects[selectedNumber]->Move(glm::vec3(0, -1, 0));
				break;
			case UP:
				objects[selectedNumber]->Move(glm::vec3(0, 1, 0));
				break;
			default:
				break;
			}
		}
	}
}

void Controller1 ::ChangeSize(float sizeD)
{
	oldCurent = std::make_unique<Shape>(objects[selectedNumber].get());//Not sure
	if (objects.size() > 0)
	{
		objects[selectedNumber]->ChangeSize(sizeD);
	}
}

void Controller1::ChangeColor()
{
	oldCurent = std::make_unique<Shape>(objects[selectedNumber].get());//Not sure
	objects[selectedNumber]->ChangeColor();
}

void Controller1::DrawObjects()
{
	if (objects.size() > 0)//may be exception
	{
		for (size_t i = 0; i < objects.size(); i++)
		{
			objects[i]->Draw();
		}
	}
}

void Controller1::NextObject()
{
	selectedNumber++;
}

void Controller1::PrewObject()
{
	if (selectedNumber > 0)//may be exception
		selectedNumber--;
}

void Controller1::Aggregate()
{

}

void Controller1::Undo()
{

}
