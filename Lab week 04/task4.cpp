#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Enter a number : " << endl;
	cin >> number;

	if (number == 0) {
		cout << "Input number is 0 " << endl;
	}
	else if (number % 2 == 0) {
		cout << "Input number is even " << endl;
	}
	else if (number % 2 != 0) {
		cout << "Input number is odd " << endl;
	}
	else {
		cout << "You have entered an invalid number " << endl;
	}
}