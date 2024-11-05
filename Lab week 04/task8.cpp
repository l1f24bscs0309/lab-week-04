#include <iostream>
using namespace std;

int main() {
	int s1, s2, s3, s4, s5;
	int s6, s7, s8, s9, s10;
	int s11, s12, s13, s14, s15;
	int s16, s17, s18, s19, s20;
	int s21, s22, s23, s24, s25;
	int total1, total2, total3, total4, total5;
	int highest = 0;
	int student = 0;

	cout << "Enter marks of student 1: ";
	cin >> s1 >> s2 >> s3 >> s4 >> s5;
	total1 = s1 + s2 + s3 + s4 + s5;
	if (total1 > highest) {
		highest = total1;
		student = 1;
	}
	cout << "Enter marks of student 2: ";
	cin >> s6 >> s7 >> s8 >> s9 >> s10;
	total2 = s6 + s7 + s8 + s9 + s10;
	if (total2 > highest) {
		highest = total2;
		student = 2;
	}
	cout << "Enter marks of student 3: ";
	cin >> s11 >> s12 >> s13 >> s14 >> s15;
	total3 = s11 + s12 + s13 + s14 + s15;
	if (total3 > highest) {
		highest = total3;
		student = 3;
	}
	cout << "Enter marks of student 4: ";
	cin >> s16 >> s17 >> s18 >> s19 >> s20;
	total4 = s16 + s17 + s18 + s19 + s20;
	if (total4 > highest) {
		highest = total4;
		student = 4;
	}
	cout << "Enter marks of student 5: ";
	cin >> s21 >> s22 >> s23 >> s24 >> s25;
	total5 = s21 + s22 + s23 + s24 + s25;
	if (total5 > highest) {
		highest = total5;
		student = 5;
	}

	cout << "Student " << student << " got the highest aggregate of " << highest << endl;

	return 0;
}