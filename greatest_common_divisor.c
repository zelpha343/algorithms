#include <stdio.h>

int gcd(int m, int n) {
	int r = m%n;
	if (r==0) {
		return n;
	} else {
		gcd(n, r);
	}
}

int main() {
	printf("%i %i %i", gcd(30, 10), gcd(28, 4), gcd(77, 11));
	return 0;
}
