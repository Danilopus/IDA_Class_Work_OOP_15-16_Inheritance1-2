//class template version 4.0 //20.06.2023//
#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <algorithm>
#include <conio.h>
//My own headers
#include "Service functions.h"
#include "classes.h"
//#include "Task_2_class.h"
#include "AppleTree.h"
#include "Apple.h"
#include "Raspberry_bush.h"
#include "Location.h"





// Class Work 03.07.2023 -------------------------------------------	

// INHERITANCE

/*
Содержимое классов:
- поля
- методы
- категории доступа

Логика наследования:
1. Наследование
2. Реализация интерфейсов

Типы наследования:
- public
- private
- protected
-* virtual (модификатор наследования) для решения проблемы наследования "ромб"

Специальные ключевые слова для методов при наследовании:

Для родителя
- virtual (пометка для дальнейшей проверки из наследника при создании полиморфного метода)

Для наследника:
- override (для проверки на соответствие правилам полиморфизма: 
	1) совпадение сигнатуры (имя, состав аргументов)
	2) в базовом классе этот метод помечен как virtual





*/




//Task 1
void Task_1()
{
	//Base objBase; - стал абстрактным классом, создание объектов невозможно
	//Base objBase_2(1,2,3);

	Derived objDer;

	Derived2 objDer_2;

	Derived3 objDer_3;

	_getch();
}
//Task 2
void Task_2()
{
	//Указатель на тип абстрактного класса возможен!
	Base* Base_obj_ptr;

	Base_obj_ptr = new Derived{ 2,5,6 };

	delete Base_obj_ptr;


}
//Task 3
void Task_3()
{
	//AppleTree appletree_obj(0, Color::white, 5e2);
	AppleTree appletree_obj(2, Color::white, 5e2);

	appletree_obj.Info();

	Fruit* apple = appletree_obj.Get_fruit();
		
	if (apple) apple->Info();

	delete apple;

	std::cout << "\n\n";

	Raspberry_bush Raspberry_bush_obj(0, Color::brown, 50);

	Raspberry_bush_obj.Info();

	Fruit* raspberry = Raspberry_bush_obj.Get_fruit();

	if (raspberry) raspberry->Info();

	delete apple;
}

//Task 4
void Task_4()
{
	TreeLocation new_location(5);
	new_location.Info();
	new_location[4].Info();
	
	for (const auto& el : new_location)
		{
			std::cout << el << " | ";
		}

}


// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
srand(time(NULL));
		
	
//Task_1();
//Task_2();
//Task_3();
Task_4();





std::cout << "\n\n";
//system("pause");	
_getch();
}


