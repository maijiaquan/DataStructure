#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<iostream>
using namespace std;
struct Node
{
	int data;    //������
	Node *next;  //ָ����
};



void createNullList (Node * &list);	//����������
void createListFront(Node * &list, int num);	//�������� ǰ�巨
void createListBack(Node * &list, int num);	//�������� ��巨
void printList(Node * list);

#endif // MAINWINDOW_H


