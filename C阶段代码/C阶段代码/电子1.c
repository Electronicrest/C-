
#include<stdio.h>
#include<stdlib.h>

void DIA(int n)//��ӡ����nΪ*���Ϊ����
{
	int i;
	int j;
	int k;
	int p;
	for ( i = 1; i <= n/2; ++i)//��һ���ӡ�ϰ벿������,��һ��forѭ����֤������
	{
		//����������forѭ����ӡһ�е�����,Ҫע��ѭ����������,���뱣֤����������Ҳ�ܴ�ӡ
		for ( j=1; j <=n/2+1-i;++j)//��ӡ�ո�,j<=n/2+1-i��֤�ո������������
		{							//6  5 4 3 2 1,
			printf(" ");
		}
		for ( k = 1; k <=i+i-1;++k)//��ӡ*,k<=2*i-1��֤ÿ�е�*��1 3 5 6 9 11���
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
	DIA(21);//nֻ��Ϊ����
	system("pause");
}
