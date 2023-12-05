#include <string>
#include <iostream>
using namespace std;

int add() {
	int add1{}, add2{};
	cout << "Enter first number to add\n";
	cin >> add1;
	cout << "Enter second number to add\n";
	cin >> add2;
	cout << "Here is what I did\n" << add1 << "+" << add2 << "=" << add1 + add2;
	return 0;
}

int sub() {
	int sub1{}, sub2{};
	cout << "Enter the first number to subtract\n";
	cin >> sub1;
	cout << "Enter the second number to subtract\n";
	cin >> sub2;
	cout << "The number you want is" << sub1 - sub2 << "\n";
	return 0;
}

int multiplication() {
	int mut1{};
	int mut2{};
	cout << "Enter first number to multiply!!!\n";
	cin >> mut1;
	cout << "Enter second number to multiply!!!\n";
	cin >> mut2;
	cout << "The multiplied number is " << mut1 * mut2;
	return 0;
}

int main()
{
	string state;
	cout << "Select if you want to add or subtract or multiply (respond with + or - or X *)\n";
	cin >> state;
	if (state == "+")
	{
		add();
	}
	else if (state == "-")
	{
		sub();
	}
	else if (state == "x")
	{
		multiplication();
	}
	else if (state == "X")
	{
		multiplication();
	}
	else if (state == "*")
	{
		multiplication();
	}
	 }

