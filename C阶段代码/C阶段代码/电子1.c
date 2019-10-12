



#include<stdio.h>
#include<stdlib.h>
#include<math.h>//调用pow次方函数
void flower(int n)//传入要检测数的上限
{
	for (int i = 100; i <= n; ++i)//利用循环输入要检测的区间
	{
		int  a = 0;
		int  b = 0;
		int  c= 0;
		a = i % 10;//利用取余取到数字的个位
		b = (i - a) / 10 % 10;//将数字的各位减去在除以10再取余就可以得到数字的十位
		c =i / 100;//很好的利用整数相除小数部分会被截断这个特性,获取了数字的百位
		int sum = pow(a, 3) + pow(b, 3) + pow(c, 3);//pow函数返回值是double型但输入的都是整数,,也就不考虑
		if (i==sum)
			printf("%d\t", i);
	}
}
int main()
{
	flower(999);//检测要查看数的范围
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
//	for (n = 100; n<1000; n++)  /*整数的取值范围*/
//	{
//		hun = n / 100;
//		ten = (n - hun * 100) / 10;
//		ind = n % 10;
//		if (n == hun*hun*hun + ten*ten*ten + ind*ind*ind)  /*各位上的立方和是否与原数n相等*/
//			printf("%d  ", n);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}