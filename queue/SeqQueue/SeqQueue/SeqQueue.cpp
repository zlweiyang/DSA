// SeqQueue.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"SeqQueue.h"
#include"iostream"
using namespace std;

int SeqQueue::Empty_Queue()
{
	return (front == rear);
}

int SeqQueue::En_Queue(DataType e)
{
	if (((rear + 1) % size) != front)
	{
		rear = (rear + 1) % size;
		base[rear] = e;
		return 1;
	}
else
	return 0;
}

int SeqQueue::De_Queue(DataType &e)
{
	if (rear != front)
	{
		front = (front + 1) % size;
		e = base[front];
		return 1;
	}
	else
		return 0;

}

int SeqQueue::Front_Queue(DataType &e)
{
	if (rear != front)
	{
		e = base[(front + 1) % size];
		return 1;
	}
	else
		return 0;
	{

	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	SeqQueue queue;
	cout << queue.Empty_Queue() << endl;
	queue.En_Queue(1);
	queue.En_Queue(2);
	queue.En_Queue(3);
	DataType p;
	queue.De_Queue(p);
	cout << p << endl;
	DataType t;
	queue.Front_Queue(t);
	cout << t << endl;
	system("pause");

	return 0;
}

