#include <iostream>
#include <iomanip>
using namespace std;
int main(void) {
	const int PASSES = 1000000;
	double total = 0.0;
	double expected = PASSES / 10.0;
	for (int pass = 1; pass <= PASSES; pass++) {
		total = total + 0.1;
	}
	cout << setprecision(17);
	cout << "Total after " << PASSES << " passes: " << total << endl;
	cout << "Expected: " << expected << endl;
	if (total == expected) {
		cout << "Equal? yes" << endl;
	}
	else {
		cout << "Equal? no" << endl;
	}
	cout << "Off by: " << total - expected << endl;
	return 0;
} 
