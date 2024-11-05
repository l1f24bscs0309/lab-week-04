#include <iostream>
using namespace std;

int main() {
	int number_of_chocolates, weight_of_chocolate;
	cout << "Enter the number of chocolates: ";
	cin >> number_of_chocolates;
	cout << "Enter the weight of chocolate: ";
	cin >> weight_of_chocolate;

	cout << "Select the character in which u want to calculate the weight of chocolates: \n";
	cout << "K : Kilograms\n";
	cout << "O : Ounces\n";
	cout << "P : Pounds\n";
	cout << "G : Grams\n";

	cout << "Enter the character: ";
	char character;
	cin >> character;

	switch (character) {
	case 'O' :
		cout << "The weight of " << number_of_chocolates << " chocolates in ounces is " << number_of_chocolates * weight_of_chocolate << endl;
		break;
	case 'P':
		cout << "The weight of " << number_of_chocolates << " chocolates in pounds is " << number_of_chocolates * weight_of_chocolate * 16 << endl;
		break;
	case 'G':
		cout << "The weight of " << number_of_chocolates << " chocolates in grams is " << number_of_chocolates * weight_of_chocolate * 28.349 << endl;
		break;
	case 'K':
		cout << "The weight of " << number_of_chocolates << " chocolates in kilograms is " << number_of_chocolates * weight_of_chocolate * 28.349 / 1000 << endl;
		break;
	default:
		cout << "Invalid character entered" << endl;
	}
	return 0;
}