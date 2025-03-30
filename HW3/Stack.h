#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

template <class N>
struct Node
{
	N info;
	Node<N>* next;
};

template <class N>
class Stack
{
	Node<N>* ptr;

public:
	Stack()
	{
		ptr = nullptr;
	};

	void push(N);
	void pop();
	bool isEmpty() const;
	void makeEmpty();
	void peek() const;
	void print() const;
};

template <class N>
void Stack<N>::push(N value)
{
	Node<N>* temp = new Node<N>;
	temp->info = value;
	temp->next = ptr;
	ptr = temp;
}

template <class N>
void Stack<N>::pop()
{
	if (!ptr)
	{
		cout << "Stack is empty\n";
			return;
	}
	else
	{
		Node<N>* temp = ptr;
		ptr = ptr->next;
		cout << "Removed follower: " << temp->info << endl;
		delete temp;
	}
}

template <class N>
bool Stack<N>::isEmpty() const
{
	if (!ptr)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template <class S>
void Stack<S>::makeEmpty()
{
	while (ptr != nullptr)
	{
		Node<S>* temp = ptr;
		ptr = ptr->next;
		delete temp;
	}
}

template <class N>
void Stack<N>::peek() const
{
	if (!ptr)
	{
		cout << "Stack is empty\n";
	}
	else
	{
		cout << ptr->info << endl;
	}
}

template <class N>
void Stack<N>::print() const
{
	if (!ptr) 
	{
		cout << "Stack is empty\n";
		return;
	}
	else 
	{
		Node<N>* temp = ptr;
		while (temp)
		{
			cout << temp->info << " -> " << "\n";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}
	
}
#endif