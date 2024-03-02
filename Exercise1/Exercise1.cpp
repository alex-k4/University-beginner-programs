#include <iostream>
using namespace std;

int main() {

	int a, b;
	cout << "Enter the first number: " << endl;
	cin >> a;
	cout << "Enter the second number: " << endl;
	cin >> b;


	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	cout << "The greatest common divisor is: " << a << endl;
	return 0;
}