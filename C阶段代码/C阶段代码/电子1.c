
#include<stdio.h>
#include<stdlib.h>

void DIA(int n)//打印菱形n为*最多为几个
{
	int i;
	int j;
	int k;
	int p;
	for ( i = 1; i <= n/2; ++i)//第一块打印上半部分菱形,第一个for循环保证多少行
	{
		//下来的两个for循环打印一行的内容,要注意循环出口条件,必须保证它在其余行也能打印
		for ( j=1; j <=n/2+1-i;++j)//打印空格,j<=n/2+1-i保证空格输出量依次是
		{							//6  5 4 3 2 1,
			printf(" ");
		}
		for ( k = 1; k <=i+i-1;++k)//打印*,k<=2*i-1保证每行的*按1 3 5 6 9 11输出
		{
			printf("*");
		}
	
		printf("\n");
	}
	for (i = 1; i <= n; ++i)
	{
		printf("*");
	}
	printf("\n");
	for (j = 1; j <= n/2; ++j)
	{
		for (i = 1; i <= j; ++i)
		{
			printf(" ");
		}
		for (i = 1; i <= n - j - j; ++i)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
int main()
{
	DIA(21);//n只能为奇数
	system("pause");
}
