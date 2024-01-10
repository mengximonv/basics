#include<stdio.h>

//要求：编程求数列：f(1)=f(2)=1；f(n)=3∗fn−1+2∗fn−2 (n>2)的第n项以及前n项之和。

int main()
{
    int n;
    int sum = 2;//前两项之和为2
    scanf("%d",&n);
    int F[100];
    F[0] = 1;
    F[1] = 1;
    int i;

    for(i = 2; i < n; i++)
    {
        F[i] = 3*F[i-1] + 2*F[i-2];
        sum = sum + F[i];
    }
    printf("%d%d",F[n-1],sum);
    return 0;
}
