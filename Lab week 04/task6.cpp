#include <iostream>
using namespace std;

int main () {
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	
	cout << "Enter an opeartion from the following: +, -, *, /: ";
	char operation;
	cin >> operation;
	switch (operation) {
	case '+':
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
		break;
	case '*' :
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	case '/':
		if (num2 == 0) {
			cout << "Error! Division by zero." << endl;
		}
		else {
			cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
		}
		break;
	}
	return 0;
}