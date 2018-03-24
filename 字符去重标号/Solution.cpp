#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

string Change_string(string& temp_s)
{
	if (temp_s.empty())
	{
		return temp_s;
	}
	auto iter_l = temp_s.begin();
	auto iter_r = temp_s.begin();

	int temp_s_distance = 0;

	string temp;
	while (++iter_r!=temp_s.end())
	{
		if (*iter_r==*iter_l)
		{
			continue;
		}
		else
		{
			temp_s_distance = distance(iter_l, iter_r);
			char temp_distance = temp_s_distance+'0';
			temp = temp + temp_distance + *iter_l;
			iter_l = iter_r;
		}	
	}
	temp_s = temp;
	return temp_s;
};


int main()
{
	string temp_s = "aabc";
	Change_string(temp_s);
	cout << temp_s;
}
