#pragma once
#include <string>

enum class Color { red, green, yellow, black, brown, white };


class Fruit
{
	std::string _name;
	float _weight;
	Color _color;
public:
	Fruit(std::string name,	float weight, Color color): _name(name), _weight(weight), _color(color){}
	//std::string Get_name() { return _name; }
	auto Get_name() -> std::string	{ return _name; } 
	auto Get_weight() { return _weight; }
	auto Get_weight() const { return _weight; }
	auto Get_color() { return _color; }

};

class MotherPlant
{
	enum plant_size {small, medium, tall} _size;
	Color _color;
	size_t _max_fruits;
public:
	MotherPlant(plant_size size, Color plant_color, size_t max_fruits): _size(size), _color(plant_color), _max_fruits(max_fruits){}
	auto Get_size() {	return _size;	}
	auto Get_color() { return _color; }
	auto Get_max_fruits() { return _max_fruits; }
};

