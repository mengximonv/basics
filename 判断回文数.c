#include<stdio.h>
void fun(long num)
{
	long r=0,temp=num;//记录判断数值
	while(num)//逆向输出它的值
	{
		r=r*10+num%10;
		num=num/10;
	}
	if(r==temp)//比较是否相等
	printf("YES!");
	else
	printf("NO!");
}
int main()
{
	long  num;
	scanf("%ld",&num);
	fun(num);
	return 0;
}
