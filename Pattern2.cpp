#include<stdio.h>

int main()
{
	int n=5;
	int a=n/2;
	
	for (int i=0;i<n;i++)
	{
		int b,c;
		if(i<=a)
		{
			b=i;
			c=n-2*i;
		}
		else
		{
			b=n-i-1;
			c=2*(i-a)+1;
		}
		for(int s=0;s<b;s++)
		{
			printf(" ");
		}
		for(int st=0;st<c;st++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}