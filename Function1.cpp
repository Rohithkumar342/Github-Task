#include<stdio.h>

float add(int,float);  											        //Declaration Part

float add(int num1,float num2)
{
	float res = num1 + num2;  											//Local Variable
	return res;
}
int main()
{
	printf("Result is:%.3f",add(5,12.5));
	return 0;
}
