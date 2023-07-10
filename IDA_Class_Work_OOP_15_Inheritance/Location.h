#pragma once
#include <vector>
#include "MotherPlant.h"
#include "Service functions.h"
#include "AppleTree.h"
#include "Raspberry_bush.h"


class TreeLocation
{
	std::vector<MotherPlant*> _plants_list;
public:
	TreeLocation(int trees_number)
	{
		MotherPlant* new_tree = nullptr;
		for (int i = 0; i < trees_number; i++)
		{
			if (Get_Random(0, 2)) { new_tree = new AppleTree(2, Color::white, 5e2); }
			else new_tree = new Raspberry_bush(2, Color::white, 5e2);
			_plants_list.push_back(new_tree);
		}	
	}
	~TreeLocation()
	{
		for (int i = 0; i < _plants_list.size(); i++)
			delete _plants_list[i];
		_plants_list.clear();
	}

	MotherPlant& operator [ ] (int index)	{ return *_plants_list[index]; }

	void Info()
	{
		for (int i = 0; i < _plants_list.size(); i++)
		{
			std::cout << "\n\nTree " << i + 1;
			_plants_list[i]->Info();
		}
	}
	class iterator
	{
		MotherPlant* _data_iterator;

	public:
		//iterator() = default; указание компилятору создать конструктор  по умолчанию
		iterator() = delete;
		iterator(MotherPlant* data) : _data_iterator(data) {}

		iterator& operator++()
		{
			_data_iterator++;
			return *this;
		}

		iterator& operator++(int)
		{
			iterator tmp(*this);
			_data_iterator++;
			return tmp;
		}

		iterator& operator--()
		{
			_data_iterator--;
			return *this;
		}

		iterator& operator--(int)
		{
			iterator tmp(*this);
			_data_iterator--;
			return tmp;
		}

		MotherPlant& operator*()
		{
			return *_data_iterator;
		}
		bool operator != (const iterator& obj)
		{
			return (this->_data_iterator != obj._data_iterator);
		}
		bool operator == (const iterator& obj)
		{
			return this->_data_iterator == obj._data_iterator;
		}

	};

	//iterator begin() { return _data; }
	//iterator begin() { return _plants_list.begin(); }
	iterator begin() { return _plants_list[0]; }
	iterator end() { return _plants_list[_plants_list.size()-1]; }
};

