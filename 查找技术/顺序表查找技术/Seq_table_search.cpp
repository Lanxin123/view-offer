#include "stdafx.h"
#include <iostream>

using namespace std;

template <class DataType>
struct Node
{
	DataType data;
	Node<DataType>* next;
};

int SeqSearch(int r[], int n, int k)
{
	r[0] = k;
	int i = n;
	while (r[i]!=k)
	{
		--i;
	}
	return i;
}

int BinSearch1(int r[], int n, int k)
{
	int low = 1; int high = n;

	while (low<=high)
	{
		int mid = (low + high) / 2;
		if (k < r[mid])
		{
			high = mid - 1;
		}
		else if (k > r[mid])
		{
			low = mid + 1;
		}
		else
			return mid;
	}
	return 0;
}

int BinSearch2(int r[], int low, int high, int k)
{
	if (low>high)
	{
		return 0;
	}
	else
	{
		int mid = (low + high) / 2;
		if (k < r[mid])
		{
			return BinSearch2(r, low, mid - 1, k);
		}
		else
			if (k > r[mid])
			{
				return BinSearch2(r, mid + 1, high, k);
			}
			else
				return mid;
	}
}

