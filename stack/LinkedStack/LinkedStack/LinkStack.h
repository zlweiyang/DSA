#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H
#include"node.h"
class LinkStack
{
private:
	StackNode *top;
public:
	LinkStack()
	{
		top = NULL;
	};
	~LinkStack()
	{
		StackNode *p=NULL;
		while (p)
		{
			p = top;
			top = top->next;
			delete p;
		}
		top = NULL;
	}; 

	int Empty_Stack();
	int Push_Stack(DataType e);
	int Pop_Stack(DataType &e);
	int GetTop_Stack(DataType &e);
};





#endif