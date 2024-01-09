#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int a=rand()%100+1;//a是游戏机随机生成的数
	int N=rand()%10+1;//N是猜测的最大次数
	int cnt=1,t;
    printf("%d %d\n",a,N);//打印出a与N

    do
    {   int b;
		scanf("%d",&b);
		t=b;

		if(b<=0)
			continue;

        if(b>a)
            {
                printf("Too big\n");
            }
         else if(b<a)
            {
                printf("Too small\n");
            }
         else
            {
                printf("Good Guess!\n");
            }

        cnt++;

    }while(cnt<=N && t>=0 && t!=a);

    return 0;
}
