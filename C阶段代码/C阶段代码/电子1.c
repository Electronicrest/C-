













#include<stdio.h>
#include<stdlib.h>//�������rand����,system����
#include<time.h>
void Game(void);//����Game����,���߱���������������һ����������ֵΪ��,û�в���
void menu(void)//��ӡ�˵�,����Game����
{
	printf("---------------------------------\n");
	printf("---------------------------------\n");
	printf("��ܰ��ʾ,���ǵ���Ϸ�ǲ�������Ϸ,��1-100֮�������\n");
	printf("            ��ʼ��Ϸ     1       \n");
	printf("            ������Ϸ     0       \n");
	printf("---------------------------------\n");
	printf("---------------------------------\n");
		int num;
	printf("          ����������ѡ��     ");
	printf("\n");
	scanf_s("%d", &num);//��ȡ�û�����ѡ��
	if (num == 1)
	{
		 Game();
	}
	else
		printf("��ѡ�����˳�,�ټ�!\n");

}
void Game(void)//������Ϸ����
{
	
	
	int num = rand()% 100 + 1;//����������ķ�Χ��1-100
	int user;
	printf("�������ǿ�ʼ��������Ϸ��!	ready  go !\n ");
	printf("���������µ�1-100�ڵ�����\n");
	while (1)
	{
		scanf_s("%d", &user);
		if (user > num)
			printf("���µĴ�����\n");
		else if (user < num)
			printf("���µ�С����\n");
		else if (user == num)
		{
			printf("��ϲ��,�¶���,���̿���ţ��,����!\n");
			break;
		}
	}
	printf("��̫����!!!\n");
}
int main()
{ 
	srand((unsigned int)time(NULL));//�����������,ʹ����ÿ��һ��,������ͻᷢ���仯
	 menu();//����menu����,ע�⺯�����õĸ�ʽ
	system("pause");
	return 0;
}
