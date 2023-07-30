#include <stdio.h>

void swap(int *x, int *y);

int main(void) {
	int a, b, c, d;
	printf("Enter the four numbers: ");
	swap(&a, &d);
	swap(&a, &b);
	swap(&b, &c);
	printf("After swapping: %i %i %i %i", a, b, c, d);
}

void swap(int *x, int *y) {
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}
