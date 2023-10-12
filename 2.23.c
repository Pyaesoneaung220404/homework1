#include <stdio.h>

int main() {
	int num1, num2, num3;

	printf("Enter three integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	
	int largest = num1;
	int smallest = num2;

	
	if (num2 > num3) {
		smallest = num3;
	}
	else {
		largest = num3;
	}

	
	if (num1 > largest) {
		largest = num1;
	}
	else if (num1 < smallest) {
		smallest = num1;
	}

	printf("The largest integer is: %d\n", largest);
	printf("The smallest integer is: %d\n", smallest);

	return 0;
}
