#ifndef INSTAGRAM_H
#define INSTAGRAM_H
#include <iostream>
#include "Stack.h"
using namespace std;

template <class I>
class Instagram
{

public:
	int numoffollowers;
	string InstaUser;
	Stack<string> followerlist;

	Instagram(string user) : InstaUser(user), numoffollowers(0) {}

	void addFollower(string follower);
	void removeFollower();
	void printFollowers() const;
	void latestFollower() const;
	void resetFollowers();
	void checklist() const;
};

template <class I>
void Instagram<I>::addFollower(string follower)
{
	followerlist.push(follower);
	numoffollowers++;

}

template <class I>
void Instagram<I>::removeFollower()
{
	followerlist.pop();
	numoffollowers--;
}

template <class I>
void Instagram<I>::printFollowers() const
{
	followerlist.print();
}

template <class I>
void Instagram<I>::latestFollower() const
{
	followerlist.peek();
}

template <class I>
void Instagram<I>::resetFollowers()
{
	followerlist.makeEmpty();
}

template <class I>
void Instagram<I>::checklist() const
{
	if (followerlist.isEmpty() == true)
	{
		cout << "The followers list is empty\n";
	}
	else
	{
		cout << "The followers list is not empty\n";
	}
}
#endif 