#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
	bool done = false;
	int value;
	int high = 0;
	int low = 0;
	int odd = 0;
	int even = 0;

	cout << "Enter number or Q to quit: ";

	while (!done) {
		cin >> value;

		if (cin.fail()) {
			done = true;
		}
		else {
			if (value > high) {
				high = value;
			}
			if (value < low || low == 0) {
				low = value;
			}
			if (value % 2 == 1) {
				odd++;
			}
			else {
				even++;
			}

			cout << "Enter number or Q to quit: ";
		}
	}

	cout << "Largest value: " << high << " Smallest value: " << low;
	cout << "\nEven number count: " << even << " Odd number count: " << odd;
}
