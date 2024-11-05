#include <iostream>
using namespace std;

int main() {
	int section1, section2, section3, section4, section5, section6;
	cout << "Enter the average of section 1: ";
	cin >> section1;
	cout << "Enter the average of section 2: ";
	cin >> section2;
	cout << "Enter the average of section 3: ";
	cin >> section3;
	cout << "Enter the average of section 4: ";
	cin >> section4;
	cout << "Enter the average of section 5: ";
	cin >> section5;
	cout << "Enter the average of section 6: ";
	cin >> section6;

	if (section1 > section2 && section1 > section3 && section1 > section4 && section1 > section5 && section1 > section6) {
		cout << "Section 1 has the highest average." << endl;
	}
	else if (section2 > section1 && section2 > section3 && section2 > section4 && section2 > section5 && section2 > section6) {
		cout << "Section 2 has the highest average." << endl;
	}
	else if (section3 > section1 && section3 > section2 && section3 > section4 && section3 > section5 && section3 > section6) {
		cout << "Section 3 has the highest average." << endl;
	}
	else if (section4 > section1 && section4 > section2 && section4 > section3 && section4 > section5 && section4 > section6) {
		cout << "Section 4 has the highest average." << endl;
	}
	else if (section5 > section1 && section5 > section2 && section5 > section3 && section5 > section4 && section5 > section6) {
		cout << "Section 5 has the highest average." << endl;
	}
	else if (section6 > section1 && section6 > section2 && section6 > section3 && section6 > section4 && section6 > section5) {
		cout << "Section 6 has the highest average." << endl;
	}
	else {
		cout << "All sections have the same average." << endl;
	}
}