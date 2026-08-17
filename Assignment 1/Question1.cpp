#include <iostream>
// #include <stdlib.h>

using namespace std;

void create();
void display();
void insert();
void deleteElement();
void search();

int main() {
	int ch;

	cout << "Enter choice: ";
	cin >> ch;

	if (ch == 1)
	{
		create();
	}
	else if (ch == 2)
	{
		display();
	}
	else if (ch == 3)
	{
		insert();
	}
	else if (ch == 4)
	{
		deleteElement();
	}
	else if (ch == 5)
	{
		search();
	}
	//	else if (ch == 6)
	//	{
	//		exit(0);
	//	}
	else
	{
		cout << "no choice found";
	}
	return 0;
}

void create()
{
	int n;
	cout << "Enter size of array: ";
	cin >> n;

	cout << "\nEnter the elements with a space: ";
	int a[n];

	for (int i = 0; i<n; i++) {
		cin >> a[i];
		cout << a[i] << " ";

	}
}

void display()
{
	cout << "DISPLAY\n";
}

void insert()
{
	cout << "INSERT\n";
}

void deleteElement()
{
	cout << "DELETE\n";
}

void search()
{
	cout << "SEARCH\n";
}