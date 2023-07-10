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
	Fruit(std::string name, float weight, Color color) : _name(name), _weight(weight), _color(color) {}
	virtual ~Fruit() {}

	//std::string Get_name() { return _name; }
	auto Get_name() -> std::string { return _name; }
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
