#include <string>
#include <iostream>
using namespace std;

int add() {
	int add1;
	int add2;
	cout << "Enter first number to add\n";
	cin >> add1;
	cout << "Enter second number to add\n";
	cin >> add2;
	cout << add1 + add2;
	return 0;
}


int main()
{
	char state;
	cout << "Select if you want to add or subtract (respond with + or -)\n";
	cin >> state;
	add();
	}

