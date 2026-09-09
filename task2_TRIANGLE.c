#include <stdio.h>
#include <conio.h>
int main()
{
	float f,g,h;
	printf("Trianle Type Classifier\n\n");
	printf("Enter three side lengths: ");
	scanf("%f %f %f",&f,&g,&h);
	
	if(f+g>h && f+h>g && g+h>f)
	{
	
		if(f==g && g==h && f==h)
		{
		printf("Valid Triangle -> Type: Equliateral");
		}	
	
		else if( f==g || f==h || g==h )
		{
		printf("Vaild Triangle -> Type: Isosceles");
		}		
		
		else
		{
		printf("Valid Triangle -> Type: Scalene");
		}
	}
	
	else
	{
	       printf("Invalid Triangle!!!");	
	}
	getch();
	return 0;
	
}
