#include <stdio.h>
#include <conio.h>
int main()
{
	int month,year;
	
	printf("Enter month number (1-12): \n Enter Year: \n");
	scanf("%d %d",&month,&year);
	
	switch(month)
	{
		case '1':
		case '3':
		case '5':
		case '7':
		case '9':
		case '11':
		printf("%s of %d has 31 days",month,year);
	    break;
	    case '2': 
	    printf("")
	    
    }
	
}
