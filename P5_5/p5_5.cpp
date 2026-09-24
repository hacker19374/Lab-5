#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	int value;
	int digit;

	int value2;
	int digit2;

	int count = 0;
	int sum1 = 0;
	int sum2 = 0;

	cout << "Please enter 8-digit card number: ";
	cin >> value;

	while (value > 0) {
		digit = value % 10;
		value /= 10;

		if (count == 0) {
			sum1 += digit;
		}
		else {
			value2 = digit * 2;
			while (value2 > 0) {
				digit2 = value2 % 10;
				value2 /= 10;

				sum2 += digit2;
			}

		}
	}
	if ((sum1 + sum2) % 10 == 0) {
		cout << "Card is valid.";
	}
	else {
		cout << "Card is invalid.";
	}
}
