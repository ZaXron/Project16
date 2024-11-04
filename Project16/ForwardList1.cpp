#include "LIST.h"
#include <iostream>
using namespace std;
void forwardList::PushBack(int value)
{
	if (head and body) {
		Node* new_node = new Node(value);
		body->next = new_node;
		body = new_node;
	}
	else {
		Node* new_node = new Node(value);
		head = new_node;
		body = new_node;
	}
}
void forwardList::Print()
{
	if (head && body) {
		Node* current = head;
		while (current != nullptr)
		{
			cout << current->value << endl;
			current = current->next;
		}
	}
}
void forwardList::PopFront()
{
	if (head and body) {
		Node* temp = head->next;
		delete head;
		if (!temp) {
			body = temp;
		}
		head = temp;
	}
}
void forwardList::popBack()
{
}
forwardList::~forwardList()
{
	delete[]body;
	delete[]head;
}