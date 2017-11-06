#include<stdio.h>
#include<stdlib.h>

unsigned long long Fibonacci(int n);

int main(void)
{
	unsigned long long big;
	int x;
	printf("費伯納契級數:fibonacci(n),輸入n為:");
	scanf("%d",&x);
	while ((x > 0))
	{
		big = Fibonacci(x);
		printf("fibonacci(%d)=%ld\n", x, big);
		printf("費伯納契級數:fibonacci(n),輸入n為:");
		scanf("%d", &x);
	}

	system("pause");
	return 0;
}
unsigned long long Fibonacci(int n)
{
	unsigned long long a = 0, b = 1, c;
	int i;

	for (i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
