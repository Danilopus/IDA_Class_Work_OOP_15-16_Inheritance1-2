#pragma once

#include "Task_2_class.h";


class Apple : public Fruit
{
	//std::string _current_fruit_name_ = "Apple";
public:
	//Apple(std::string name, float weight, Color color):Fruit(name, weight, color) {}
	Apple(float weight, Color color) : Fruit("Apple", weight, color) {}


};

