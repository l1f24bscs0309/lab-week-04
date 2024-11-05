#include <iostream>
using namespace std;

int main() {
	float num;
	cout << "Enter a floating number : " ;
	cin >> num;
	if (num == int(num)) {
		cout << "Its ceiling integer is : " << num << endl;
		return 0;
	}
	if (num > 0) {
		cout << "Its ceiling integer is : " << (int)num + 1 << endl;
	}
	else {
		cout << "Its ceiling integer is : " << (int)num << endl;
	}
}