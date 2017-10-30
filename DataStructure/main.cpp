#include"LinkedList.h"
#include<iostream>

using namespace std;

int main(){
	Node *list = new Node;
	int num;
	cout << "Input num = ";
	cin >> num;
	createListBack(list, num);
	printList(list);
	cout<<1<<endl;
	system("pause");
}