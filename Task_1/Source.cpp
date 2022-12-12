#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int x = 0;
	for (int i = 1; i < 5; i++) {
		cout << "Enter value x : ";
		cin >> x;
		cout << "y= " << pow(sin(x), 5) + abs(5 * x - 1.5) << endl;
	}
	return 0;
}