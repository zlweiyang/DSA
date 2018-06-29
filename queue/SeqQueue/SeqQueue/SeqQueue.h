typedef int DataType;
class SeqQueue
{
private:
	DataType *base;
	int front;
	int rear;
	int size;
public:
	SeqQueue(int Queuesize = 100)
	{
		base = new DataType[Queuesize];
		front = 0;
		rear = 0;
		size = Queuesize;
	};
	~SeqQueue()
	{
		delete[] base;
	};
	int  Empty_Queue();
	int En_Queue(DataType e);
	int De_Queue(DataType &e);
	int Front_Queue(DataType &e);
};