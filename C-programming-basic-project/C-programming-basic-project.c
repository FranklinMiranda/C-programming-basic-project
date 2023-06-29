#include <stdio.h>


int main() {
	
	// Integer Literals in C - Decimals, Octals, and Hexadecimals 
	int decimalLiteral = 10;
	int	octalLiteral = 012;
	int hexadecimalLiteral = 0xa;
	
	// %d is the Format Specifier for integer
	printf("%d", decimalLiteral);
	printf("\n%d", octalLiteral);
	printf("\n%d", hexadecimalLiteral);

	// Floating-point Literal in C - Fractional, Exponent Form 
	float fractionalFloat = 1.0003;
	float exponentFloat = -123E-5;
	 
	printf("\n%f", fractionalFloat);
	printf("\n%f", exponentFloat);

	// Character Literal - created by enclosing a single character in single quotation marks
	char characterLiteral = 'a';

	printf("\n%c", characterLiteral);

	// Escape Sequences
	// \b Backspace
	printf("Hello World\b\b!");

	// \f Formfeed - creates a page break 
	printf("\nHello Wor\fld!");

	// \n Newline
	printf("\nHello Wor\nld!");

	// \r Return - Carriage Return that resets the cursor to the start of the line 
	printf("\nHello W\rorld!");

	// \t Horizontal Tab 
	printf("\nHello Wo\tld!");

	// \v Vertical Tab
	printf("\nHello Wor\vld!");

	// \\ Backslash 
	printf("\nHello Wo\\rld");

	// \' Single Quotation Mark
	printf("\nHello Wor\'ld!");

	// \" Double Quotation Marks
	printf("\nHello Wor\"ld!");

	// \? Question Mark 
	printf("\nHello \?World!");

	// \0 Null Character - used to terminate character strings or arrays
	printf("\nHello Wo\0rld!");


	// String Literal - A sequence of characters enclosed in double quotation marks 
	printf("\nHello World!");

	// Constant - a variable whose value cannot be changed 
	const int num1 = 10;

	printf("\n%d", num1);



	return 0; 
}