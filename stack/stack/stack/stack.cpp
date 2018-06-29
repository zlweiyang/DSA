// stack.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"stack.h"
#include"iostream"

using namespace std;

int SeqStack::Empty_Stack()
{
	return ((top <= base));
}
int SeqStack::Push_Stack(DataType e)
{
	if (top - base < size)
	{
		*top = e;
		top++;
		return 1;
	}
	else
		return 0;
}
int SeqStack::Pop_Stack(DataType &e)
{
	if (top > base)
	{
		top--;
		e = *top;
		return 1;
	}
	else
		return 0;
}

int SeqStack::GetTop_Stack(DataType &e)
{
	if (top > base)
	{
		e = *(top - 1);
		return 1;
	}
	else
		return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	SeqStack stack;
	DataType p=NULL;
	cout << stack.Empty_Stack() << endl;
	stack.Push_Stack(1);
	stack.Push_Stack(2);
	stack.Push_Stack(3);
	cout << stack.Empty_Stack() << endl;
	stack.Pop_Stack(p);
	cout << p << endl;

	//delete p;
	system("pause");
	return 0;
}

