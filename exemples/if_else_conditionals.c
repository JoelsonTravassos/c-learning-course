#include <stdio.h>

int main() {
	
	int age;
	
	printf("Tell me your age (Using intergers): ");
	scanf("%d", &age);
	
	if (age >= 18) {
		printf("You are of legal age! You are %d years old", age);
	} else {
		printf("You are underage! You are only %d  years old.", age);
	}
	
	return 0;
}
