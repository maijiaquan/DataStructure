#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
using namespace std;
struct Node
{
	int data;    //数据域
	Node *next;  //指针域
};



void createNullList (Node * &list);	//创建空链表
void createListFront(Node * &list, int num);	//创建链表 前插法
void createListBack(Node * &list, int num);	//创建链表 后插法
void printList(Node * list);

#endif // MAINWINDOW_H


