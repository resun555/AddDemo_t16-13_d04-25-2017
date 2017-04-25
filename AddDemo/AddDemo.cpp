// AddDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;


int main()
{
	Adder *adder;
	for (size_t i = 1; i <= 5; i++)
	{
		adder = new Adder(i);
		cout << "*i = " << *adder->getI() << ", *s = " << *adder->getS() << endl;
		delete adder;
	}
	return 0;
}


Adder::Adder(int method)
{
	if (method == 1)
	{
		i = new int(3);
		s = new int(++*i + ++*i + ++*i);
	}
	else if (method == 2)
	{
		i = new int(3);
		s = new int(add(add(++*i, ++*i), ++*i));
	}
	else if (method == 3)
	{
		i = new int(3);
		s = new int(add(++*i, add(++*i, ++*i)));
	}
	else if (method == 4)
	{
		i = new int(3);
		s = add(add(i, i), i);
	}
	else if (method == 5)
	{
		i = new int(3);
		s = add(i, add(i, i));
	}
	else
	{
		i = new int(0);
		s = new int(0);
	}
}


int* Adder::getI()
{
	return i;
}


int* Adder::getS()
{
	return s;
}


int Adder::add(int x, int y)
{
	return x + y;
}


int* Adder::add(int *x, int *y)
{
	return new int(++*x + ++*y);
}


Adder::~Adder()
{
	delete s;
	delete i;
}


