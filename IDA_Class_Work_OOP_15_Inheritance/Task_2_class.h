#pragma once
#include <string>
#include <iostream>

enum class Color { red, green, yellow, black, brown, white };


class Fruit
{
	std::string _name;
	float _weight;
	Color _color;
public:
	Fruit(std::string name,	float weight, Color color): _name(name), _weight(weight), _color(color){}
	virtual ~Fruit() {}

	//std::string Get_name() { return _name; }
	auto Get_name() -> std::string	{ return _name; } 
	auto Get_weight() { return _weight; }
	auto Get_weight() const { return _weight; }
	auto Get_color() { return _color; }

	virtual void Info()
	{		
		std::cout << "\n_name   " << _name;
		std::cout << "\n_weight " << _weight;
		std::cout << "\n_color  " << int(_color);
	}

};

class MotherPlant
{
	enum plant_size {smalll, medium, tall} _size;
	Color _color;
	size_t _max_fruits;
public:
	//MotherPlant(plant_size size, Color plant_color, size_t max_fruits): _size(size), _color(plant_color), _max_fruits(max_fruits){}
	MotherPlant(size_t size, Color plant_color, size_t max_fruits) : _size(plant_size(size)), _color(plant_color), _max_fruits(max_fruits) {}
	virtual ~MotherPlant(){}
	
	auto Get_size() {	return _size;	}
	auto Get_color() { return _color; }
	auto Get_max_fruits() { return _max_fruits; }

	virtual void Info()
	{
		std::cout << "\n_size " << _size;
		std::cout << "\n_color " << int(_color);				 
	}

	virtual Fruit* Get_fruit() = 0;


};


