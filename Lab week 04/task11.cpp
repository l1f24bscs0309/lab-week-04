#include <iostream>
using namespace std;

int main() {
	float num;
	cout << "Enter a floating number: ";
	cin >> num;
	if (num < 0) {
		cout << "Its floor integer is: " << int(num) - 1 << endl;
	}
	else {
		cout << "Its floor integer is: " << int(num) << endl;
	}
}