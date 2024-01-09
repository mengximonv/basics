#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-4d",j,i,j*i);//注意左对齐格式
		}
		printf("\n");
	}
	return 0;
}
