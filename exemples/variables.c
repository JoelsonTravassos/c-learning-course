#include <stdio.h>

int main() {
	int number = 10;
	float floatNumber = 10.59;
	char letter = 'A';
	char name[8] = "Joelson";
	
	/* %d: In C you need to inform the type of the variable you'll print (d stands for decimal)
	 * \n is to "enter a new line"
	 */
	printf("Number: %d \n", number); 
	
	printf("Float: %.2f \n", floatNumber); // .2: limits the numbers after the dot in two.
	printf("Char: %c \n", letter);
	
	/* When working with Strings in C, we need to make an array of chars.
	 * The last index is a "\0" that informs your computer that this is the end of the array.
	 * So, you always need to add one more index because the last one is reserved for the "\0".
	 */
	printf("String: %s \n", name);
	
	return 0;
}
