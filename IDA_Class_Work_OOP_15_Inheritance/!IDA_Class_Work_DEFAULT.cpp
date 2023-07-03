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
	Base objBase;
	Base objBase_2(1,2,3);

	Derived objDer;

	Derived2 objDer_2;

	Derived3 objDer_3;

}
//Task 2
void Task_2()
{
	
}
//Task 3
void Task_3()
{

}


// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
srand(time(NULL));
		
	
Task_1();
Task_2();
Task_3();





std::cout << "\n\n";
//system("pause");	
_getch();
}


