#include <stdio.h>
#include <conio.h>
int main()
{
	float m;
	printf("Enter your marks (0-100): ");
	scanf("%f",&m);
	
	if(m>=85)
	{
		printf("Grade: A");
	}
	else if(m>=70)
	{
		printf("Grade: B");
	}
	else if(m>=60)
	{
		printf("Grade: C");
	}
	else if(m>=50)
	{
		printf("Grade: D");
	}
	else if(m<50)
	{
		printf("Grade: F");
	}
	else
	{
		printf("You entered invalid marks");
	}
	getch();
	return 0;
}
