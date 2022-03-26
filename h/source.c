#include <stdio.h>
#include "header.h"
#include "header2.h"

int main() {
	
	int n, result;
	printf("Please enter a number: ");
	scanf("%d",&n);
	result = square(n);
	printf("Square of %d is %d", n, result);
	
	getch();
	return 0;
}
