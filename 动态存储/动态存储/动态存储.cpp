// ��̬�洢.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int *p;
	int n;
	int i;
	cin >> n;
	p = new int[20];
	for (i = 0; i < n; i++)
	{
		p[i] = i*i;
	}
	for (i = 0; i < n; i++)
	{
		cout << p[i] << endl;
	}
	return 0;
}


