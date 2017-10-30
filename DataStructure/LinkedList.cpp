#include "LinkedList.h"

void createNullList (Node * &list){
	//list = new Node;  
	list = (Node *) malloc (sizeof(Node));
	list->next = NULL;
}

void createListFront(Node * &list, int num); //�������� ǰ�巨

void createListBack(Node * &list, int num){ //�������� ��巨
	list = new Node;
	list->next = NULL;
	list->data = -1;   //����ͷ����data = -1

	Node * r = list;	//βָ��r

	for(int i = 0; i < num; i++){
		Node * p = new Node;
		cout << "Input element ";
		cin >> p->data;
		p->next = NULL;

		r->next = p;	//��p�ŵ�r��β��
		r = p;	//rָ���µ�β�ڵ�
	}
}

void printList(Node * list){
	Node * p = list;
	while(p != NULL){
		cout<<p->data<<" ";
		p = p->next;
	}
}


