#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	char a;
	char b;

	printf("請輸入執行的字母:");
	scanf(" %c", &a);
	if (a<91)
	{

		b = a + 32;
		printf("%c 換成小寫為 %c\n", a, b);
	}
	if (a > 96)
	{
		b = a - 32;
		printf("%c 換成大寫為 %c\n", a, b);
	}

	system("pause");
	return 0;
}