#ifndef LINKQUEUE_H
#define LINKNODE_H

#include"QueueNode.h"

class LinkQueue
{
private:
	      QueueNode *front;
	      QueueNode *rear;
public:
	    LinkQueue()
	    {
			front = NULL;
			rear = NULL;
		};
		~LinkQueue()
		{
			QueueNode *p, *q;
			p = front;
			while (p)
			{
				q = p;
				p = p->next;
				delete q;
			}
			front = NULL;
			rear = NULL;
		};

		int Empty_Queue();
		int En_Queue(DataType e);
		int De_Queue(DataType &e);
		int Front_Queue(DataType &e);
};

#endif