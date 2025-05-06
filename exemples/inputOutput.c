#include <stdio.h>

int main() {
	
	int number;
	
	printf("Enter a interger number: ");
	
	/* We use the scanf to read something from the user.
	 * We need to inform the type of input expected from the user with "%d".
	 * We use "&" before the variable to assign the user input to it.
	 */
	scanf("%d", &number);
	
	printf("Number %d", number);
	
	return 0;
}
