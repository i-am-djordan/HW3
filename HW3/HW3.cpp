#include "Instagram.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	Instagram<string> user;
	string file;
	ifstream MyReadFile("presidentsWstates.txt");

	while (getline(MyReadFile, file)) 
	{
		cout << file;
	}

	MyReadFile.close();

	user.printFollowers();

	user.latestFollower();
	user.removeFollower();
	user.printFollowers();
	user.resetFollowers();
	user.checklist();
}

