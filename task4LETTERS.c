#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	char ch;
	
	printf("Enter a character: ");
	scanf("%c",&ch);
	
	if(!isalpha(ch))
	{
		printf("It is not a chatracter! \n");
	}
	else
    {
    
	char letter = tolower(ch);
	
	
	switch (letter)
	{
		case 'a': case 'e': case 'i': case 'o': case 'u':
		printf("%c is a Vowel \n",letter);
		break;
		
		default:
			printf("%c is a consonat\n",letter);
	}
    }  
	getch();
	return 0;
}

