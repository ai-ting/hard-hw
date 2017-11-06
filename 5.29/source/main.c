#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x;
	int y;
	int z;
	int a;
	int b;
	printf("块ㄢ俱计:");
	scanf("%d%d",&x,&y);
	while (x*y > 0)
	{
		if ((x%y != 0) && (y%x != 0))
		{

			if (x > y)
			{
				z = x%y;
			
				while (z != 0)
				{
					a = z;
					z = a%z;
					if (a < z)
					{
						b = x*y;
						printf("%d琌%d㎝%d程そ计\n", b, x, y);
					}
				}
				b = (x*y) / a;
				printf("%d琌%d㎝%d程そ计\n", b, x, y);
			}
			if (y > x)
			{
				z = y%x;
			
				while (z != 0)
				{
					a = z;
					z = a%z;
					if (a < z)
					{
						b = x*y;
						printf("%d琌%d㎝%d程そ计\n", b, x, y);
					}
				}
				b = (x*y) / a;
				printf("%d琌%d㎝%d程そ计\n", b, x, y);
			}

		}
		else
		{
			if (x > y)
			{
				b = x;
				printf("%d琌%d㎝%d程そ计\n", b, x, y);
			}
			if (x < y)
			{
				b = y;
				printf("%d琌%d㎝%d程そ计\n", b, x, y);
			}
		}
		printf("块ㄢ俱计:");
		scanf("%d%d", &x, &y);
	}
	system("pause");
	return 0;
}