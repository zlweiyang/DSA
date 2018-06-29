#ifndef QUEUENODE_H
#define QUEUENODE_H

typedef int DataType;

class QueueNode
{
public:
	DataType data;
	QueueNode *next;
	QueueNode()
	{
		next = NULL;
	};
};

#endif