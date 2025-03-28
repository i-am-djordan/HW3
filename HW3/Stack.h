#include <iostream>
using namespace std;

template <class N>
struct Node
{
	N info;
	Node<N>* next;
};

template <class S>
class Stack
{
public:
	Node<S>* ptr;
	Stack() 
	{
		ptr = nullptr;
	}
	void push(S);
	void pop();
	bool isEmpty();
	void makeEmpty();
	void peek();
	void print();
};

template <class S>
void Stack<S>::push(S value)
{
	Node<S>* temp = new Node<S>;
	temp->info = value;
	temp->next = ptr;
	ptr = temp;
}

template <class S>
void Stack<S>::pop()
{
	if (!ptr)
	{
		cout << "Stack is empty\n";
		return;
	}
	else
	{
		Node<S>* temp = ptr;
		ptr = ptr->next;
		delete temp;
	}
}

template <class S>
bool Stack<S>::isEmpty()
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

template <class S>
void Stack<S>::peek()
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

template <class S>
void Stack<S>::print()
{
	if (!ptr) 
	{
		cout << "Stack is empty\n";
		return;
	}
	else 
	{
		Node<S>* temp = ptr;
		while (temp)
		{
			cout << temp->info << " -> ";
			temp = temp->next;
		}
		cout << "NULL" << endl;
	}

	
}