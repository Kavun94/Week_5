#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int h, a, b;
	cout << " Enter h = ";
	cin >> h;
	cout << " Enter a = ";
	cin >> a;
	cout << " Enter b = ";
	cin >> b;
	cout << "___________________________" << endl;
	cout << ":\tX\t:\tY\t:" << endl;
	cout << "___________________________" << endl;
	for (int i = a; i <= b; i += h) {
		if (-i >= 0) {
			cout << ":\t" << i << "\t:\t" << (sin(i) + sqrt(-i)) << "\t:" << endl;
		}
		else continue;
	}
	cout << "___________________________" << endl;
	return 0;
}