













#include<stdio.h>
#include<stdlib.h>//里面包含rand函数,system函数
#include<time.h>
void Game(void);//声明Game函数,告诉编译器存在着这样一个函数返回值为空,没有参数
void menu(void)//打印菜单,调用Game函数
{
	printf("---------------------------------\n");
	printf("---------------------------------\n");
	printf("温馨提示,我们的游戏是猜字谜游戏,猜1-100之间的整数\n");
	printf("            开始游戏     1       \n");
	printf("            结束游戏     0       \n");
	printf("---------------------------------\n");
	printf("---------------------------------\n");
		int num;
	printf("          请输入您的选择     ");
	printf("\n");
	scanf_s("%d", &num);//获取用户输入选择
	if (num == 1)
	{
		 Game();
	}
	else
		printf("您选择了退出,再见!\n");

}
void Game(void)//设置游戏内容
{
	
	
	int num = rand()% 100 + 1;//设置随机数的范围是1-100
	int user;
	printf("下面我们开始猜字谜游戏吧!	ready  go !\n ");
	printf("请输入您猜的1-100内的整数\n");
	while (1)
	{
		scanf_s("%d", &user);
		if (user > num)
			printf("您猜的大了呢\n");
		else if (user < num)
			printf("您猜的小了呢\n");
		else if (user == num)
		{
			printf("恭喜你,猜对了,智商堪比牛顿,鼓掌!\n");
			break;
		}
	}
	printf("你太棒了!!!\n");
}
int main()
{ 
	srand((unsigned int)time(NULL));//随机数生成器,使程序每打开一次,随机数就会发生变化
	 menu();//调用menu函数,注意函数调用的格式
	system("pause");
	return 0;
}
