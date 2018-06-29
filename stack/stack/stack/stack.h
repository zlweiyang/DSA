
typedef int DataType;
class SeqStack
{
private:
	DataType *base;
	DataType *top;
	int size;

public:
	SeqStack(int stacksize = 100)
	{
		base = new DataType[stacksize];
		top = base;
		size = stacksize;
	}
	~SeqStack()
	{
		delete[] base;
		top = NULL;
		base = NULL;
	}
	int Empty_Stack();
	int Push_Stack(DataType e);
	int Pop_Stack(DataType &e);
	int GetTop_Stack(DataType &e);
};