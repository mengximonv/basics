#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x,y,c;				/* 变量定义 */
	printf("Please input x and y:\n");	/* 提示用户输入数据 */
	scanf("%f%f",&x,&y);
	c=(x>y)?x:y;				/* 三目运算符 */
	printf("MAX of (%f,%f) is %f",x,y,c);	/* 输出c */
}

