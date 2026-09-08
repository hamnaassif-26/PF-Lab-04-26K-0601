#include <stdio.h>
#include <conio.h>
int main()
{
	int month,year;
	
	printf("Enter month number (1-12): \n Enter Year: \n");
	scanf("%d %d",&month,&year);
	
	switch(month)
	{
		case '1 || 3':
		printf("%s of %d has 31 days",month,year);
	    default:
	    printf("okay");
    }
	
}
