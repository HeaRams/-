#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (b < 45) {
		b = b + 15;
		if (a == 0) {
			a = 23;
		}
		else {
			a = a - 1;
		}
	}
	else {
		b = b - 45;
	}
	printf("%d %d\n", a, b);
	return 0;
}
