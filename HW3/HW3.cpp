#include "Instagram.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{ 
	string name;
	string filename = "presidentsWstates.txt";

	cout << "What is your name ? \n";
	cin >> name;
	cout << "\n";

	Instagram<string> user(name);
	ifstream MyReadFile(filename);

	string line;
	if (!MyReadFile) 
	{
		cout << "Couldn't open file";

	}
	while (getline(MyReadFile, line)) 
	{
		user.addFollower(line);
	}

	MyReadFile.close();

	cout << "Your followers are: \n";
	user.printFollowers();

	cout << "\n\n\nYour latest follower is: \n";
	user.latestFollower();

	cout << "\n\n\nRemoving a follower: \n";
	user.removeFollower();

	cout << "\n\n\nYour followers are: \n";
	user.printFollowers();

	cout << "\nResetting followers... \n";
	user.resetFollowers();

	cout << "\nChecking if the followers list is empty... \n";
	user.checklist();
}

