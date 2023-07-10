#pragma once
#include "Fruit.h";


class raspberry : public Fruit
{
	//std::string _current_fruit_name_ = "Apple";
public:
	//Apple(std::string name, float weight, Color color):Fruit(name, weight, color) {}
	raspberry(float weight, Color color) : Fruit("raspberry", weight, color) {}


};

