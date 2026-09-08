#include <stdio.h>
#include <conio.h>
int main()
{
	char name[40];
	printf("what's your name:"); // Enter your name
	// anaother way
	fgets(name, 50, stdin); //stdin: code: standard input
	printf("hey");
	puts(name); /* this puts is displaying output of name you initialized --> char name[40], then it will display your name 
	               with hey */
	return 0;
}
