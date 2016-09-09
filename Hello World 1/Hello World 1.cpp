// helloworld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
	int a = 10;
	float b = 5.5;
	a = a++;
	a = ++a;
	cout << "Hello World" << endl;
	printf("Hello World!\n");
	return 0;
}