//task : 1
//WAP swap two numbers 
//a=12
//b=23

//o/p:
//a=23
//b=12//
#include<stdio.h>

int main()
{
	int a=12,b=23,c;

	c=a;
	a=b;
	b=c;

	printf("\n swapping, a = %d\n", a);
	printf("swapping, b = %d", b);
	return 0;
}
