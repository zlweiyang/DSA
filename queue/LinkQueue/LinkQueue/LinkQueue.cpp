// LinkQueue.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"LinkQueue.h"
#include"iostream"
using namespace std;

int LinkQueue::Empty_Queue()
{
	return (front == NULL && rear == NULL);
}
int LinkQueue::En_Queue(DataType e)
{
	 QueueNode *p=new QueueNode;
	 if (p)
	 {
		 p->data = e;
		 if (rear)
			 rear->next = p;
		 else
			 front = rear = p;
		 return 1;
	 }
	 else
		 return 0;
}

int LinkQueue::De_Queue(DataType &e)
{
	QueueNode *p;
	if (!Empty_Queue())
	{
		p = front;
		e = p->data;
		front = front->next;
		if (!front)
			rear = NULL;
		delete p;
		return 1;
	}
	else
		return 0;
}

int LinkQueue::Front_Queue(DataType &e)
{
	if (!Empty_Queue())
	{
		e = front->data;
		return 1;
	}
	else
		return 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int p=0;
	LinkQueue link;
	link.En_Queue(1);
	link.En_Queue(2);
	cout << link.Empty_Queue()<< endl;
	
	link.De_Queue(p);
	cout << p << endl;
	link.En_Queue(3);
	link.En_Queue(4);
	int p1;
	link.Front_Queue(p1);
	cout << p1 << endl;
	system("pause");
	return 0;
}

