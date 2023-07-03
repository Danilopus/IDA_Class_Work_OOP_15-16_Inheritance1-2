#pragma once
#include <vector>
#include <string>

#include "Service functions.h"

class Base
{
//private:
	int privateMember;
public:
	int publicMember;
	/* Все вызовы по умолчанию у наследников не будут работать, необходимо в явном виде определять вызов конструктора родителя
	Base()=delete; - запрет на вызов конструктора по умолчанию. */
	Base() { std::cout << this << "\tBase constructor say Hello!\n\n"; }
	Base(int int1, int int2, int int3): publicMember(int1), privateMember(int2), protectedMember(int3)
	{ std::cout << this << "\tBase constructor say Hello!\n\n"; }
	~Base() { std::cout << this << "\tBase destructor say Goodbye!\n\n"; }
protected:
	int protectedMember;
};

// Публичное наследование
class Derived : public Base
{
	//	privateMember - недоступен
	//  publicMember - public
	//  protectedMember -  protected 
public:
	//действия конструктора по умолчанию
	Derived():Base() { std::cout << this << "\tDerived constructor say Hello!\n\n"; }

	// Делегирующий конструктор не будет работать
	//Derived() (int int1, int int2, int int3) : publicMember(int1), privateMember(int2), protectedMember(int3)

	Derived(int int1, int int2, int int3) : Base(int1,int2,int3)
	{ std::cout << this << "\tDerived constructor say Hello!\n\n"; }


	~Derived() { std::cout << this << "\tDerived destructor say Goodbye!\n\n"; }

};

// protected наследование
class Derived2 : protected Base
{
	//	privateMember - недоступен
	//  publicMember - protected
	//  protectedMember -  protected 
public:
	Derived2() { std::cout << this << "\tDerived2 constructor say Hello!\n\n"; }
	~Derived2() { std::cout << this << "\tDerived2 destructor say Goodbye!\n\n"; }

};

// private наследование
class Derived3 : private Base
{
	//	privateMember - недоступен
	//  publicMember - private
	//  protectedMember -  private 
public:
	Derived3() { std::cout << this << "\tDerived3 constructor say Hello!\n\n"; }
	~Derived3() { std::cout << this << "\tDerived3 destructor say Goodbye!\n\n"; }

};

