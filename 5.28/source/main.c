#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	char a;
	char b;

	printf("�п�J���檺�r��:");
	scanf(" %c", &a);
	if (a<91)
	{

		b = a + 32;
		printf("%c �����p�g�� %c\n", a, b);
	}
	if (a > 96)
	{
		b = a - 32;
		printf("%c �����j�g�� %c\n", a, b);
	}

	system("pause");
	return 0;
}