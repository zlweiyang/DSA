// TreeTraverse.cpp : 定义控制台应用程序的入口点。
//

#include "stdio.h"
#include"stdlib.h"
#include"stdafx.h"
#include"malloc.h"

typedef struct BTNode
{
	char data;
	struct BTNode *pLchild;
	struct BTNode *pRchild;
}BTNode, *BTree;
BTree create_tree();
void pre_traverse(BTree);
void in_traverse(BTree);
void beh_traverse(BTree);

int main()
{
	BTree pTree = create_tree();

	printf("前序遍历：");
	pre_traverse(pTree);
	printf("/n");
	printf("中序遍历：");
	in_traverse(pTree);
	printf("/n");
	printf("后序遍历:");
	beh_traverse(pTree);
	printf("/n");
	return 0;
}


BTree create_tree()
{
	BTree pA = (BTree)malloc(sizeof(BTNode));
	BTree pB = (BTree)malloc(sizeof(BTNode));
	BTree pD = (BTree)malloc(sizeof(BTNode));
	BTree pE = (BTree)malloc(sizeof(BTNode));
	BTree pC = (BTree)malloc(sizeof(BTNode));
	BTree pF = (BTree)malloc(sizeof(BTNode));

	pA->data = 'A';
	pB->data = 'B';
	pD->data = 'D';
	pE->data = 'E';
	pC->data = 'C';
	pF->data = 'F';

	pA->pLchild = pB;
	pA->pRchild = pC;
	pB->pLchild = pD;
	pB->pRchild = pE;
	pD->pLchild = pD->pRchild = NULL;
	pE->pLchild = pD->pRchild = NULL;
	pC->pLchild = pF;
	pC->pRchild = NULL;
	pF->pLchild = pF->pRchild = NULL;

	return pA;
}

void pre_traverse(BTree pTree)
{
	if (pTree){
		printf("%c", pTree->data);
		if (pTree->pLchild)
			pre_traverse(pTree->pLchild);
		if (pTree->pRchild)
			pre_traverse(pTree->pRchild);
	}
}

void in_traverse(BTree pTree)
{
	if (pTree)
	{
		if (pTree->pLchild)
			in_traverse(pTree->pLchild);
		printf("%c", pTree->data);
		if (pTree->pRchild)
			in_traverse(pTree->pRchild);
	}
}
void beh_traverse(BTree pTree)
{
	if (pTree)
	{
		if (pTree->pLchild)
			beh_traverse(pTree->pLchild);
		if (pTree->pRchild)
			beh_traverse(pTree->pRchild);
		printf("%c", pTree->data);
	}
}
