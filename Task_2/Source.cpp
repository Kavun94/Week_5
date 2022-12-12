#include <iostream>
using namespace std;

int main() {
	int counter = 1;
	for (int i = 1; i <= 100; i *= 3)counter *= i;
	cout << counter;

}