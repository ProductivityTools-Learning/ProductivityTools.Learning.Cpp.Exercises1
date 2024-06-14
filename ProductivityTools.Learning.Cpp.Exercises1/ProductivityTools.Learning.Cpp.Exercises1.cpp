// ProductivityTools.Learning.Cpp.Exercises1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
//using namespace std;
using std::cout;

void printName(std::string);
void sizes();
void chars();
void do_array();

struct person {
	std::string first_name;
	int age;
};

int main()
{
	cout << "Hello World!\n";
	cout << "Give me your name";
	std::string name;
	person person;
	std::cin >> name;
	person.first_name = name;
	printName(person.first_name);
	std::cout << "pointer address to person.firstname:" << &person.first_name << std::endl;



	const std::string line(8, '*');
	std::cout << line;

	int r = 0;
	int rows = 10;
	while (r != rows)
	{
		std::cout << "#";
		++r;
	};

	sizes();
	chars();
	do_array();
}

void printName(std::string name)
{
	cout << "HEllo" << name << std::endl;
	cout << "pointed address" << &name << std::endl;
	std::string* pointer = &name;
	cout << "pointer value:" << pointer << std::endl;
	cout << "pointer object:" << *pointer << std::endl;
}

void sizes()
{
	int n_int = INT32_MAX;
	short n_short = SHRT_MAX;
	cout << "Int is a size of" << sizeof(n_int) << std::endl;
	cout << "Short is a size of" << sizeof(n_short) << std::endl;
	cout << "size of the variable" << sizeof n_int << std::endl;
}

void chars()
{
	char c = 'P';
	c = c + 1;
	cout << "Interesting char is" << c << std::endl;

	int i = 40;
	cout << "char from the number. Number: " << i << " the representing char";
	cout.put(i);
	cout << std::endl;
}

void do_array()
{
	int table[3];
	for (size_t i = 0; i < 3; i++)
	{
		table[i] = i;
		cout << table[i] << std::endl;
	}
}
