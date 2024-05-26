// ProductivityTools.Learning.Cpp.Exercises1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
//using namespace std;
using std::cout;

void printName(std::string);

int main()
{
	cout << "Hello World!\n";
	cout << "Give me your name";
	std::string name;
	std::cin >> name;
	printName(name);
	const std::string line(8, '*');
	std::cout << line;

	int r = 0;
	int rows = 10;
	while (r != rows)
	{
		std::cout << "#";
		++r;
	};


}

void printName(std::string name)
{
	cout << "HEllo" << name << std::endl;
}
