#include "stdio.h"
void main()
{
	int j, n1=5; // 定义n1为每行输出 5个数据
	// 定义一个20个元素的浮点型数组 ，求和的初始值为0；并定义最高分、最低分、平均分
	float score[20], sum = 0, max, min, aver;
	// 从键盘输入20位同学的成绩并求出平均分
	for(j = 0; j < 20; j++)
	{
		printf("请输入第%d位同学的成绩(0-100)：\n",j+1);
		scanf("%f",&score[j]);
		// 非法数据，重新输入
		while(score[j]>100 || score[j]<0)
		{
			printf("请重新输入第%d位同学的成绩(0-100)：\n",j+1);
			scanf("%f",&score[j]);
		}
		sum += score[j];
	}
	aver = sum/20;
	// 求出最高分和最低分
	// 把第一个数组元素赋值给最大值和最小值，然后进行数据比对
	max = score[0];
	min = score[0];
	for(j=0;j<20;j++)
	{
		if(max < score[j])
			max = score[j]; // 保证max是最大值
		if(min > score[j])
			min = score[j]; // 保证min是最小值
	}
	printf("二十位同学的平均分为：%.2f\n",aver);
	printf("\n");
	printf("二十位同学中的最高分是：%.2f\t最低分是：%.2f\n",max,min);
	printf("\n");
	// 将低于平均分的成绩统计并打印出来
	printf("*以下是低于平均分的同学的成绩：\n");
	for(j=0;j<20;j++)
	{
		if(score[j]<aver)
		{
			n1++;
			printf("%.2f\t",score[j]);
			// n1被5取余为0，即每行最多输出 5个数据，下同
			if(n1%5 == 0)
				printf("\n");
		}
	}
	printf("\n");
	// 将未及格的成绩统计并打印出来
	printf("\n*以下是未及格的同学的成绩：\n");
	for(j=0;j<20;j++)
	{
		if(score[j]<60)
		{
			n1++;
			printf("%.2f\t",score[j]);
			if(n1%5 == 0)
				printf("\n");
		}
	}
	printf("\n");
}
