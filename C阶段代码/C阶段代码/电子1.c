


//���ֲ�����������
//д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
#include<stdio.h>
#include<stdlib.h>

void FindNum(int arr[],int n)//arr[]����һ��Ҫ������������,n����Ҫ�ҵ�����
{
	int left = 0;//������߽��±�
	int right = sizeof(arr) - 1;//���������Ԫ�ص�����-1���������ұ߽��±�
	
	while (left<=right)//��left>rightʱ˵���������鶼������һ��,������û�Ҽ�Ҫ�ҵ�����
	{
		int mid = (left + right) / 2;//���������±������λ��
		if (arr[mid] < n)//Ҫ�ҵ����ִ������ĵ�����
		{
			left = mid+1;//��֮ǰ�ҵ������±�-1������߽�    
		}				//  -1��+1 Ŀ����  1.arr[mid]�Ѿ���n�ȳ���С��,����arr[mid]���ֵ
		else if (arr[mid]>n)   //  �Ѿ�������n��,����ɸ����
		{						//         2. ��ֹ���һ������������	
			right = mid-1;
		}
		else if (arr[mid] == n)
		{
			printf("��ϲ���ҵ���,�±�Ϊ %d\n", mid);
			break;  // �����Ѿ��ҵ���,�����ڱ�������ʣ��Ԫ����֮��Ա�,ֱ��left>right���˳�
		}
	}
	if (left > right)
	{
		printf("-1\n");
	}
}
int main()
{ 
	int arr[] = { 1, 2, 3, 4, 5 };
	FindNum(arr, 4);
	system("pause");
	return 0;
}
