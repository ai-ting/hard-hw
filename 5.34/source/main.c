#include<stdio.h>
#include<stdlib.h>

int integerpower(int base, int exponent);

int main(void)
{
	int x, y,a,i;
	printf("��J����:");
	scanf("%d", &x);
	printf("��J����:");
	scanf("%d",&y);
	while (y > 1)
	{	
		i=integerpower(x, y);
		printf("%d��%d����%d\n",x,y,i);
		printf("��J����:");
		scanf("%d", &x);
		printf("��J����:");
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