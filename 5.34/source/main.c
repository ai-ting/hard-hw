#include<stdio.h>
#include<stdlib.h>

int integerpower(int base, int exponent);

int main(void)
{
	int x, y,a,i;
	printf("輸入底數:");
	scanf("%d", &x);
	printf("輸入指數:");
	scanf("%d",&y);
	while (y > 1)
	{	
		i=integerpower(x, y);
		printf("%d的%d次為%d\n",x,y,i);
		printf("輸入底數:");
		scanf("%d", &x);
		printf("輸入指數:");
		scanf("%d", &y);
	}
	
	system("pause");
	return 0;
}

int integerpower(int base, int exponent)
{
	int a,n;
	a = 1;
	for (n = 1; n <= exponent; n++)
	{
		a = a*base;
	}
	return a;
}