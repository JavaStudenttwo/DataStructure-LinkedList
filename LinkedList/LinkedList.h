#pragma once

#include<stdio.h>
#include<stdlib.h>

struct LinkNode
{
	int data;
	struct LinkNode * pNext;
};

//���ͱ���
typedef struct LinkNode node;

//�������ݽṹ�ĺ���������
//��ʼ��
void init(node * phead);

//��β���������
node * addback(node * phead , int data);

//��ͷ���������
node * addhead(node * phead,int data);

//ɾ������
void delete(int data);

//�޸�����
void update(int data);

//��������
void search(int data);

//��ʾ��������
void showAll(node * phead);
