


//二分查找有序数组
//写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回 - 1.（折半查找）
#include<stdio.h>
#include<stdlib.h>

void FindNum(int arr[],int n)//arr[]定义一个要传入的数组参数,n定义要找的数字
{
	int left = 0;//数组左边界下标
	int right = sizeof(arr) - 1;//求出数组内元素的数量-1就是数组右边界下标
	
	while (left<=right)//当left>right时说明整个数组都遍历了一遍,但还是没找见要找的数字
	{
		int mid = (left + right) / 2;//定义数组下标的中心位置
		if (arr[mid] < n)//要找的数字大于中心的数字
		{
			left = mid+1;//将之前找的中心下标-1赋给左边界    
		}				//  -1或+1 目的是  1.arr[mid]已经和n比出大小了,所以arr[mid]这个值
		else if (arr[mid]>n)   //  已经不等于n了,可以筛过了
		{						//         2. 防止最后一个数遍历不到	
			right = mid-1;
		}
		else if (arr[mid] == n)
		{
			printf("恭喜你找到了,下标为 %d\n", mid);
			break;  // 避免已经找到了,但还在遍历数组剩余元素与之相对比,直到left>right才退出
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
