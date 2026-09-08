#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	ch= getchar(); // Read a single character
	printf("You entered:");
	putchar(ch);
	putchar('\n');
	return 0;
}
