#include <iostream>
using namespace std;

void say(int n);
void sayEven(int n);
void sayOdd(int n);

int main() {
	say(3);
}

void say(int n) {
	if (n < 0) {
		return;
	}
	
	if ((n % 2) == 0) {
		sayEven(n);
	} else {
		sayOdd(n);
	}
}

void sayEven(int n) {
	cout << n << " is even." << endl;

	if (n > 0) {
		sayOdd(n - 1);
	}
}

void sayOdd(int n) {
	cout << n << " is odd." << endl;

	if (n > 0) {
		sayEven(n - 1);
	}
}
