#include <stdio.h>
#include <conio.h>
int main()
{
	int num1,num2;
	char op; 
	
	printf("Enter first number: \n");
	scanf("%d",&num1);
	printf("Enter operator (+,-,*,/,%%): \n");
	scanf("%s",&op);
	printf("Enter second number: \n");
	scanf("%d",&num2);
	
	if(num2==0)
	{
		printf("Error \a: Division by 0 is not allowed \n");
	}
	
	switch(op)
	{
		case '+':
			printf("Sum: %d",num1+num2);
			break;
		case '-':
			printf("Difference: %d",num1-num2);
			break;
		case '*':
		    printf("Product: %d",num1*num2);
			break;
		case '/':
		    printf("Remainder: %d",num1/num2);
		    break;
		case '%':
		    printf("Quotient: %d",num1%num2);
		    break;		
		default:
		    printf("Invalid operator! \a");
	}
	getch();
	return 0;
}
