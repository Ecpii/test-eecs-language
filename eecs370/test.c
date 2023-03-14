#include <stdint.h>
#include <stdio.h>

int main() {
	int a = 8683540;
	int16_t b = a & 0xFFFF;
	int c = b;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return 0;
}
