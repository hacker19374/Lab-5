#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
	int n;
	cout << "Enter a positive integer: ";
	cin >> n;

	cout << "Counting up: ";

	for (int up = 1; up <= n; up++) {
		cout << up << " ";
	}

	cout << "\nCounting down: ";

	for (int down = n; down >= 1; down--) {
		cout << down << " ";
	}

	cout << "\nOdd numbers: ";

	for (int odd = 1; odd <= n; odd += 2) {
		cout << odd << " ";
	}

	cout << "\nSum of 1 through " << n << " is ";
	int sum1 = 0;
	for (int sum = 1; sum <= n; sum++) {
		sum1 += sum;
	}
	cout << sum1;

	cout << "\nCheck: " << n << " * " << n + 1 << " / 2 = " << (n * (n + 1)) / 2;
}
