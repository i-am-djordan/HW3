#include <iostream>
#include "Stack.h"
using namespace std;

template <class I>
class Instagram
{
public:
	int numoffollowers = 0;
	I user;
	Stack<I> followerlist;

	void addFollower(I follower);
	void removeFollower();
	const void printFollowers();
	void latestFollower();
	void resetFollowers();
	void checklist();
};

template <class I>
void Instagram<I>::addFollower(I follower)
{
	followerlist.push(follower);
}

template <class I>
void Instagram<I>::removeFollower()
{
	followerlist.pop();
}

template <class I>
const void Instagram<I>::printFollowers()
{
	followerlist.print();
}

template <class I>
void Instagram<I>::latestFollower()
{
	followerlist.peek();
}

template <class I>
void Instagram<I>::resetFollowers()
{
	followerlist.makeEmpty();
}

template <class I>
void Instagram<I>::checklist()
{
	followerlist.isEmpty();
}
