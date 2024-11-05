#include <iostream>
using namespace std;

int main() {
	double weight, height;
	cout << "Enter your weight : ";
	cin >> weight;
	cout << "Enter your height : ";
	cin >> height;

	double bmi = weight / (height * height);
	
	if (bmi < 18.5)
		cout << "Underweight: less than 18.5";
	else if (bmi < 25)
		cout << "Normal: between 18.5 and 24.9";
	else if (bmi < 30)
		cout << "Overweight: between 25 and 29.9";
	else
		cout << "Obese: 30 or greater";
}