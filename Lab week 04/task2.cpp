#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Enter a number to check whether it is odd or even : " << endl;
	cin >> number;
	if (number % 2 == 0) {
		cout << number << " is even" << endl;
	}
	else {
		cout << number << " is odd" << endl;
	}
	return 0;
}