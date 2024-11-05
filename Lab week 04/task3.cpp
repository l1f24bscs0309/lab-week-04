#include <iostream> 
using namespace std;

int main() {
	double first, second, third;
	cout << "Enter the first number: ";
	cin >> first;
	cout << "Enter the second number: ";
	cin >> second;
	cout << "Enter the third number: ";
	cin >> third;

	double max = first;

	if (second > max) {
		max = second;
	}
	if (third > max) {
		max = third;
	}
	cout << "The maximum number is: " << max << endl;

	return 0;
}