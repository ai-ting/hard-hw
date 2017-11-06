#include<stdio.h>
#include<stdlib.h>

void hanoi(int n, char a, char b, char c)
{
	if(n==1)
	{
		printf("%c -> %c\n", a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);
		hanoi(1, a, b, c);
		hanoi(n - 1, b, a, c);
	}
}

int main(void)
{
	int n;
	printf("¿é¤J½L¼Æ:");
	scanf("%d", &n);
	hanoi(n, 'a', 'b', 'c');
	system("pause");
	return 0;
}