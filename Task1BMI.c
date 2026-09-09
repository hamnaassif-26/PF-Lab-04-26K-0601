#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float weight,height,BMI;
	printf("|BMI CALCULATOR & CATEGORY|\n\n");
	printf("Enter your weight (in kgs): ");
	scanf("%f",&weight);
	printf("Enter your height (in meter): ");
	scanf("%f",&height);
	
	BMI=(weight/pow(height,2));
	
	if(BMI<18.5)
	{
		printf("BMI = %.2f -> Category: Underweight",BMI);
	}
	else if(BMI>=18.5)
	{
		if(BMI<=24.9)
		printf("BMI = %.2f -> Category: Normal",BMI);
	}
	else if(BMI>=25)
	{
		if(BMI<=29.9)
		printf("BMI = %.2f -> Category: Overweight",BMI);
	}
	else
	{
		printf("BMI = %.2f -> Category: Obese",BMI);
	}
	getch();
	return 1;
}
