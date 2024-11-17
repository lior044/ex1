#include "LinkedList.hpp"
#include <iostream>

node* initNode() {
	node* n = new node;

	//
	std::cout << "Enter the value: ";
	std::cin >> n->value;
	//
	n->next = NULL;
	return n;
}

node* addToStart(node* head, node* n) {
	n->next = head;

	return n;
}

void printNode(node* n) {
	std::cout << "Value: " << n->value << std::endl;
}

void printlist(node* n) {
	node* cur = n;
	while (cur->next != NULL) {
		printNode(cur);
		cur = cur->next;
	}
	printNode(cur);
}

void freeList(node* head)
{
	node* cur = head;
	node* temp;
	while (cur)
	{
		temp = cur;
		cur = cur->next;
		delete temp;
	}
}

int listLen(node* n, int len) {
	if (n->next != NULL) {
		len++;
		return listLen(n->next, len);
	}
	len++;
	return len;
}
