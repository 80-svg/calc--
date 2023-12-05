#include <string>
#include <iostream>
using namespace std;

int add() {
	int add1{}, add2{};
	cout << "Enter first number to add\n";
	cin >> add1;
	cout << "Enter second number to add\n";
	cin >> add2;
	cout << "Your the number you want is " << add1 + add2;
	return 0;
}

int sub() {
	int sub1{}, sub2{};
	cout << "Enter the first number to subtract\n";
	cin >> sub1;
	cout << "Enter the second number to subtract\n";
	cin >> sub2;
	cout << "The number you want is" << sub1 - sub2;
	return 0;
}

int main()
{
	string state;
	cout << "Select if you want to add or subtract (respond with + or -)\n";
	cin >> state;
	if (state == "+")
	{
		add();
	}
	else if (state == "-")
	{
		sub();
	}
	 }

