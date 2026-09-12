#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int num,Choice,i,flag=1,square;//flag: 0 for composite and 1 for prime
	
	do 
	{
	printf("Enter Number: ");
	scanf("%d",&num);
	
	printf("\n1. Even/Odd\n2. Prime\n3. Square\n4. Exit\n");

	printf("\nEnter choice: ");
	scanf("%d",&Choice);
	
	
	switch(Choice)
	{
		case 1:
			if(num%2==0)
			{
				printf("\n%d is Even\n\n",num);
		    }
		    else
		    {
		    	printf("\n%d is Odd\n\n",num);
			}
		break;	
		
		case 2:
			if(num<=1)
			{
				printf("\n%d is neither prime nor composite number.\n\n",num);
				break;
			}
			else
			{
				for(i=2;i<=sqrt(num);i++) //i used sqrt function for optimization, checking divisors till num will waste computational power.
			{
				if(num%i==0)
				{
					flag=0; //divisor found,its not a prime.
					break;
				}
			}
		    }
			if(flag==0)
				{
					printf("\n%d is a composie number.\n\n",num);
				}
			else
				{	
					printf("\n%d is a prime number.\n\n",num);
				}
			break;
		    
		break;
		
		case 3:
			square = pow(num,2);
			printf("\nSquare of %d is: %d\n\n",num,square);
		break;
		
		case 4:
			printf("Thnaks for using this program");
		break;
		
		default:
			printf("\nInvalid menu choices!\n\n");
			
	}
	}
	while (Choice!=4);
	return 0;
}
