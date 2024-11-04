#pragma once
class Node
{
public:
	int value;
	Node* next;
	Node() : value(0), next(nullptr) {}
	Node(int value) : value(value), next(nullptr) {}
	~Node() { delete[]next; };
};
class forwardList
{
	Node* head;
	Node* body;
public:
	forwardList() : head(nullptr), body(nullptr) {}
	void PushBack(int value);
	void Print();
	void PopFront();
	void popBack();
	~forwardList();
};
