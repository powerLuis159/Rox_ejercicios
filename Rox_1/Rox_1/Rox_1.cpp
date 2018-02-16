// Rox_1.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
class A
{
public:
	A()
	{
		std::cout << "1 ";
	}
	~A()
	{

	}

private:

};



class B :  A
{
public:
	B() :A()
	{
		std::cout << "2 ";
	}

	~B()
	{
	}

private:

};

class C : A
{
public:
	C() :A()
	{
		std::cout << "3 ";
	}

	~C()
	{
	}

private:

};

class D :B, C
{
public:
	D() :B(), C()
	{
		std::cout << "4 ";
	}

	~D()
	{
	}

private:

};


int main()
{
	D d;
	return 0;
}