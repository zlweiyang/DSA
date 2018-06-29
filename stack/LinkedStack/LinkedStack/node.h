
typedef int DataType;
class StackNode
{
public:
	DataType data;
	StackNode *next;
	StackNode()
	{
		next = NULL;
	};
};