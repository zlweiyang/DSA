// Vector1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include"iostream"
#include "vector"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> ratings(5);
	//int n;
	//cin >> n;
	ratings.insert(0, 2);
	ratings.insert(1, 6);

	for (int i = 0; i < ratings.size(); i++){
		cout << ratings[i] << " ";
	}
	return 0;
}

