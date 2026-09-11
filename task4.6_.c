#include <stdio.h>
#include <ctype.h> // ctype.h --> header file which manages case conversion, upper to lower vice versa
#include <conio.h>

int main()
{
	char ch;
	
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if(!isalpha(ch)) //isalpha checks the ASCII code and compares the value,so A=65,when i enter A it compares ascii value with 65...
	{
		printf("It is not a chatracter! \n");
	}
	else // in else I can write statements like switch,variable declrartion...
{
    
	char letter = tolower(ch);
	
	switch (letter)
	{
		case 'a': case 'e': case 'i': case 'o': case 'u':
		printf("%c is a Vowel \n",letter);
		break;
		
		default: // when i enter oyher than vowel it still compares it with assigned ascii code and print as consonant....
			printf("%c is a consonat\n",letter);
	}
}  
	getch();
	return 0;
}

