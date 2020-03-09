#include "MathFuncs.h" 
#include <stdio.h>
int main()
{
	// Declare the variables
	double x = 2, y = 3, z;

	// Test the add function
	z = add(x, y);
	printf("Adding %f and %f equals %f\n", x, y, z);

	// Test the subtract function
	z = subtract(x, y);
	printf("Subtracting %f from %f equals %f\n", x, y, z);

	// Test the multiply function
	z = multiply(x, y);
	printf("Multiplying %f by %f equals %f\n", x, y, z);

	// Test the divide function
	z = divide(x, y);
	printf("Dividing %f by %f equals %f\n", x, y, z);
}


