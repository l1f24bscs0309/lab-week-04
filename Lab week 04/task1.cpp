#include <iostream>
using namespace std;

int main() {
	int sub_1, sub_2, sub_3;
	cout << "Enter the marks of first subject : " << endl;
	cin >> sub_1;
	cout << "Enter the marks of second subject : " << endl;
	cin >> sub_2;
	cout << "Enter the marks of third subject : " << endl;
	cin >> sub_3;

	int average_marks;
	average_marks = (sub_1 + sub_2 + sub_3) / 3;

		if (average_marks > 80) {
			cout << "You're are above standard ! "<< endl;
			cout << "Admission granted!" << endl;
		}
		else {
			cout << "Your average is less than 80" << endl;
		}
		return 0;

}