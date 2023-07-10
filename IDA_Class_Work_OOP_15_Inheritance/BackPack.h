#pragma once
#include "Fruit.h"
#include "memory"
#include "vector"

class BackPack
{
	std::vector<std::unique_ptr<Fruit>> _items_list;
public:
	
	BackPack() {};
	
	void push_back(const Fruit& new_fruit)
	{
		_items_list.emplace_back(std::make_unique<Fruit>);
	}

};

