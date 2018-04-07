#include "stdafx.h"
#include <iostream>
#include <algorithm>
#define MAX 101

using namespace std;

int D[MAX][MAX];
int n;
int MaxSum(int i, int j)
{
	if (i == n)
		return D[i][j];
	int x = MaxSum(i + 1, j);
	int y = MaxSum(i + 1, j + 1);
	return max(x, y) + D[i][j];
}
