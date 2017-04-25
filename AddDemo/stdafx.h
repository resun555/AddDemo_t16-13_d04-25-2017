// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>


class Adder
{
public:
	Adder(int);
	int* getI();
	int* getS();
	int add(
		int,
		int
	);
	int* add(
		int *,
		int *
	);
	~Adder();

private:
	int *i;
	int *s;

};



// TODO: reference additional headers your program requires here
