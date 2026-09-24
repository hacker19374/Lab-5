#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
	int num;

	cout << "Please enter a number: ";
	cin >> num;

	while (num != 0) {
		cout << num % 2 << "\n";
		num /= 2;
	}
}
