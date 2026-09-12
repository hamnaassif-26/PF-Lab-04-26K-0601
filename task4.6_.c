#include <stdio.h>
#include <conio.h>
int main()
{
	int month,year;
	//Array of month names with an empty string at index 0
	const char *monthNames[] = { "", "January", "Feburary", "March", "April", "May", "June", "July", "August", "Septmeber", "Octuber", "November", "December" };

	printf("Enter month number (1-12): \n");
	scanf("%d",&month);
	printf("Enter year: \n");
	scanf("%d",&year);
	
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 12:
			printf("%s of %d has 31 days",monthNames[month],year);
			break;
		
	       case 4:
	       case 6:
	       case 9:
	       case 11:
	              printf("%s of %d has 30 days",monthNames[month],year);
	              break;
	       case 2:
	       	if(year%4==0 && year%100!=0 || year%400==0)
	       	{
	       		printf("%s of %d has 29 days",monthNames[month],year);
			}
			break;
		default:
			printf("Error! Invalid month number");
       }
	getch();
	return 0;
}
