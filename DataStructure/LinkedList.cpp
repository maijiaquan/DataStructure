#include "LinkedList.h"

void createNullList (Node * &list){
	//list = new Node;  
	list = (Node *) malloc (sizeof(Node));
	list->next = NULL;
}

void createListFront(Node * &list, int num); //创建链表 前插法

void createListBack(Node * &list, int num){ //创建链表 后插法
	list = new Node;
	list->next = NULL;
	list->data = -1;   //假设头结点的data = -1

	Node * r = list;	//尾指针r

	for(int i = 0; i < num; i++){
		Node * p = new Node;
		cout << "Input element ";
		cin >> p->data;
		p->next = NULL;

		r->next = p;	//将p放到r的尾部
		r = p;	//r指向新的尾节点
	}
}

void printList(Node * list){
	Node * p = list;
	while(p != NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
}


