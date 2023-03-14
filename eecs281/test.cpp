#include <cstdint>
#include <iostream>
using namespace std;

int main() {
	int a = 8683540;
	int16_t b = a & 0xFFFF;
	int c = b;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	return 0;
}
