// funcs.c 

#include "header.h"

void func1(void)
{
	printf("func1 runs\n");
}

void func2(void)
{
	func1();
	printf("func2 runs\n");
}

void func3(void)
{
	func2();
	printf("func3 runs\n");
}
