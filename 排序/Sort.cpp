#include "stdafx.h"
#include <iostream>

using namespace std;

void InsertSort(int r[], int n)
{
	for (int i = 2;i<n;i++)
	{
		r[0] = r[i];
		for (int j = i-1;r[0]<r[j];j--)
		{
			r[j + 1] = r[j];
		}
		r[j + 1] = r[0];
	}
	for (int k = 1;k<n;k++)
	{
		cout << r[k] << " ";
	}
	cout << "\n";
}
//希尔排序
void ShellSort(int r[], int n)
{
	int i;
	int d;
	int j;
	for (d = n / 2; d >= 1; d = d / 2)            //以增量为d进行直接插入排序
	{
		for (i = d + 1; i < n; i++)
		{
			r[0] = r[i];                 //暂存被插入记录
			for (j = i - d; j > 0 && r[0] < r[j]; j = j - d)
				r[j + d] = r[j];       //记录后移d个位置
			r[j + d] = r[0];
		}
	}
	for (i = 1; i < n; i++)
		cout << r[i] << " ";
	cout << "\n";
}

//起泡排序
void BubbleSort(int r[], int n)
{
	int temp;
	int exchange;
	int bound;
	exchange = n - 1;                       //第一趟起泡排序的范围是r[0]到r[n-1]	
	while (exchange)                    //仅当上一趟排序有记录交换才进行本趟排序
	{
		bound = exchange;
		exchange = 0;
		for (int j = 0; j < bound; j++)     //一趟起泡排序
			if (r[j] > r[j + 1])
			{
				temp = r[j];
				r[j] = r[j + 1];
				r[j + 1] = temp;
				exchange = j;                   //记录每一次发生记录交换的位置
			}
	}
	for (int i = 0; i < n; i++)
		cout << r[i] << " ";
	cout << "\n";
}


//插入排序
void InsertSort(int k[], int n)
{
	int i, j, temp;
	
	for (i = 1;i<n;++i)
	{
		if (k[i]<k[i-1])
		{
			temp = k[i];

			for (j = i-1;k[j]>temp;j--)
			{
				k[j + 1] = k[j];
			}
			k[j + 1] = temp;
		}
	}
}

//希尔排序
void ShellSort(int k[], int n)
{
	int i, j, temp;
	int gap = n;

	do 
	{
		gap = gap / 3 + 1;

		for (i =  gap;i<n;i++)
		{
			if (k[i]<k[i-gap])
			{
				temp = k[i];

				for (j = i-gap;k[j]>temp;j-=gap)
				{
					k[j + 1] = k[j];
				}
				k[j + 1] = temp;
			}
		}
	} while (gap>1);
}


