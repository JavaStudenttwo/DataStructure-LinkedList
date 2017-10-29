#include "LinkedList.h"

void init(node * phead)
{
	phead->pNext = NULL;
	phead->data = 0;
}

node * addback(node * phead ,int data) {

	node * pnew = malloc(sizeof(node));
	//ʹ���½ڵ��¼����
	pnew->data = data;
	pnew->pNext = NULL;
	//���½ڵ���ӽ�������
	//1.��ͷָ��Ϊ�գ�������Ϊ�գ�ֱ�ӽ��½�����ַ��ֵ��ͷָ��
	if (phead == NULL)
	{
		phead = pnew;
		return phead;
	}
	else
	{
		//2.��ͷָ�벻Ϊ�գ���˵���������Ѿ��������ݣ���������ȡ�����һ�����ĵ�ַ�������½ڵ�ĵ�ַ����
		//����ͷ���
		node * ptemp = phead;
		//��������,ȡ�����һ�����ĵ�ַ
		while (ptemp->pNext != NULL) {
			ptemp = ptemp->pNext;
		}
		//���½ڵ�ĵ�ַ����
		ptemp->pNext = pnew;

	}

	return phead;

}

node * addhead(node * phead,int data) {

	node * pnew = malloc(sizeof(node));
	//ʹ���½ڵ��¼����
	pnew->data = data;
	pnew->pNext = NULL;
	//���½ڵ���ӽ�������
	//1.��ͷָ��Ϊ�գ�������Ϊ�գ�ֱ�ӽ��½�����ַ��ֵ��ͷָ��
	if (phead == NULL)
	{
		phead = pnew;
		return phead;
	}
	else
	{
		//2.��ͷָ�벻Ϊ�գ���˵���������Ѿ��������ݣ���ͷ����ַ��Ϊ�½ڵ�ĵ�ַ������ԭ����ͷ����ַ�浽�½ڵ��next��
		pnew->pNext = phead;
		phead = pnew;
	}

	return phead;


}


void showAll(node * phead) {

	printf("\nͷ������� = %d,ͷ����ַ = %p", phead->data, phead);

	node * pnode = phead;
	while (pnode->pNext != NULL)
	{
		pnode = pnode->pNext;
		printf("\n������� = %d,����ַ = %p", pnode->data, pnode);
	}

	printf("\n�������");

}