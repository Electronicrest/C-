



#include<stdio.h>
#include<stdlib.h>
#include<math.h>//����pow�η�����
void flower(int n)//����Ҫ�����������
{
	for (int i = 100; i <= n; ++i)//����ѭ������Ҫ��������
	{
		int  a = 0;
		int  b = 0;
		int  c= 0;
		a = i % 10;//����ȡ��ȡ�����ֵĸ�λ
		b = (i - a) / 10 % 10;//�����ֵĸ�λ��ȥ�ڳ���10��ȡ��Ϳ��Եõ����ֵ�ʮλ
		c =i / 100;//�ܺõ������������С�����ֻᱻ�ض��������,��ȡ�����ֵİ�λ
		int sum = pow(a, 3) + pow(b, 3) + pow(c, 3);//pow��������ֵ��double�͵�����Ķ�������,,Ҳ�Ͳ�����
		if (i==sum)
			printf("%d\t", i);
	}
}
int main()
{
	flower(999);//���Ҫ�鿴���ķ�Χ
	system("pause");
}
//int main()
//{
//	 flower(999);
//	system("pause");
//}
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int hun, ten, ind, n;
//	printf("result is:");
//	for (n = 100; n<1000; n++)  /*������ȡֵ��Χ*/
//	{
//		hun = n / 100;
//		ten = (n - hun * 100) / 10;
//		ind = n % 10;
//		if (n == hun*hun*hun + ten*ten*ten + ind*ind*ind)  /*��λ�ϵ��������Ƿ���ԭ��n���*/
//			printf("%d  ", n);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}