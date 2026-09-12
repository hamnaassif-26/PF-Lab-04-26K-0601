#include <stdio.h>
#include <conio.h>
int main()
{
	int e_units,sum=0;
	printf("Enter Electricity units consumed: ");
	scanf("%d",&e_units);
	
	if(e_units<0)
	{
		printf("Invalid unit numbers");
	}
	if(e_units<=100)
	{
		sum = e_units*5;
	}
	else if(e_units<=200)
	{
		sum = 500 + (e_units-100)*8;
	}
	else if(e_units<=400)
	{
		sum = 1300 + (e_units-200)*12;
	}
	else 
	{
		sum = 3700 + (e_units-400)*15;
	}
	
	printf("Total Bill = %d Rs\n",sum);
	return 0;
}
