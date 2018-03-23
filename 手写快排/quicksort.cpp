#include "stdafx.h"
#include <iostream>

using namespace std;

void quicksort(int arr[], int l, int r)
{
	if (l<r)
	{
		int pivot = partition(arr, l, r);
		quicksort(arr, l, pivot-1);
		quicksort(arr, pivot + 1, r);
	}
}
int partition(int arr[], int l, int r)
{
	int k = l, pivot = arr[r];
	for (int i=l;i<r;++i)
	{
		if (arr[i]<pivot)
		{
			swap(arr[i], arr[k++]);
		}
	}
	swap(arr[k], arr[r]);
	return k;
}
//从头到尾迭代，和支点比较，大的不管，小的换。换了才往后看。最后支点戳中间，算是分界线。