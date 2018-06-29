// LinkedStack.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"LinkStack.h"
#include"iostream"
using namespace std;
int LinkStack::Empty_Stack()
{
	return (!top);
}

int LinkStack::Push_Stack(DataType e)
{
	StackNode *p = new StackNode;
	if (p)
	{
		p->data = e;
		p->next = top;
		top = p;
		return 1;
	}
	return 0;
}

int LinkStack::Pop_Stack(DataType &e)
{
	StackNode *p;
	if (top)
	{
		p = top;
		e = p->data;
		top = top->next;
		delete p;
		return 1;
	}
	else
		return 0;
}

int LinkStack::GetTop_Stack(DataType &e)
{
	if (top)
	{
		e = top->data;
		return 1;
	}
	else
		return 0;
}
int _tmain(int argc, _TCHAR* argv[])
{
	LinkStack *linkstack = new LinkStack();
	cout << linkstack->Empty_Stack() << endl;

	linkstack->Push_Stack(2);
	linkstack->Push_Stack(3);
	linkstack->Push_Stack(4);
	cout << linkstack->Empty_Stack() << endl;
	int *e =NULL;
	linkstack->Pop_Stack(*e);
	cout << e << endl;


	delete linkstack;
	system("pause");
	return 0;
}

