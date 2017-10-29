#pragma once

#include<stdio.h>
#include<stdlib.h>

struct LinkNode
{
	int data;
	struct LinkNode * pNext;
};

//类型别名
typedef struct LinkNode node;

//链表数据结构的函数的声明
//初始化
void init(node * phead);

//在尾部添加数据
node * addback(node * phead , int data);

//在头部添加数据
node * addhead(node * phead,int data);

//删除数据
void delete(int data);

//修改数据
void update(int data);

//查找数据
void search(int data);

//显示所有数据
void showAll(node * phead);
