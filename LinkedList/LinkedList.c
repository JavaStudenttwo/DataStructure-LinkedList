#include "LinkedList.h"

void init(node * phead)
{
	phead->pNext = NULL;
	phead->data = 0;
}

node * addback(node * phead ,int data) {

	node * pnew = malloc(sizeof(node));
	//使用新节点记录数据
	pnew->data = data;
	pnew->pNext = NULL;
	//将新节点添加进链表中
	//1.若头指针为空，即链表为空，直接将新建结点地址赋值给头指针
	if (phead == NULL)
	{
		phead = pnew;
		return phead;
	}
	else
	{
		//2.若头指针不为空，则说明链表中已经存在数据，遍历链表，取出最后一个结点的地址，并将新节点的地址连接
		//备份头结点
		node * ptemp = phead;
		//遍历链表,取出最后一个结点的地址
		while (ptemp->pNext != NULL) {
			ptemp = ptemp->pNext;
		}
		//将新节点的地址连接
		ptemp->pNext = pnew;

	}

	return phead;

}

node * addhead(node * phead,int data) {

	node * pnew = malloc(sizeof(node));
	//使用新节点记录数据
	pnew->data = data;
	pnew->pNext = NULL;
	//将新节点添加进链表中
	//1.若头指针为空，即链表为空，直接将新建结点地址赋值给头指针
	if (phead == NULL)
	{
		phead = pnew;
		return phead;
	}
	else
	{
		//2.若头指针不为空，则说明链表中已经存在数据，将头结点地址改为新节点的地址，并将原来的头结点地址存到新节点的next中
		pnew->pNext = phead;
		phead = pnew;
	}

	return phead;


}


void showAll(node * phead) {

	printf("\n头结点数据 = %d,头结点地址 = %p", phead->data, phead);

	node * pnode = phead;
	while (pnode->pNext != NULL)
	{
		pnode = pnode->pNext;
		printf("\n结点数据 = %d,结点地址 = %p", pnode->data, pnode);
	}

	printf("\n链表结束");

}