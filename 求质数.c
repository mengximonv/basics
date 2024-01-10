#include <stdio.h>

#define N 50
int main(int argc, char *argv[])
{
	int primes[N];/*引入质数素*/
	int pc,m,k;/*pc质数个数，m测试的数，k能够被整除的数*/

	printf("The first %d prime number are: \n",N);
	primes[0]=2; /*2是第一个质数*/
	pc=1; /*已经有1个质数*/
	m=3;/*被测试的数从3开始*/
	while(pc<N)
	{
		/*调整m 使它为下一个质数*/
		k=0;
		while(primes[k]*primes[k]<=m)
		{
			if(m%primes[k]==0)
			{
				/*m是合数*/
				m+=2;/*让m取下一个奇数*/
				k=1;/*不必用primes[0]=2去测试m,所以k从1开始*/
			}
			else
			{
				k++;/*继续用一个质数去测试*/
			}
		}
		primes[pc++]=m;
		m+=2;/*除2外，其它质数均是奇数*/
	}

	/*输出primes[0]到primes[pc-1]*/
	for(k=0;k<pc;k++)
	{
		printf("%4d",primes[k]);
	}
	printf("\n\n Press any key to quit...\n");
	getchar();
}
