#include <stdio.h>
int main()
{
	char name[50];
	char str[50];
	float m1,m2,m3;
	float percentage;
	float total;
	 
	 printf("Enter Your Name:\n");
	 scanf("%s",&name);
     
	 printf("Enter Your Roll Number:\n");
	 scanf("%s",&str);
     
	 printf("Enter Your Marks:\n",m1,m2,m3);
	 scanf("%f %f %f",&m1,&m2,&m3);
     
	 total=m1+m2+m3;
	 percentage= (total/300)*100;
	 printf("Your Percentage of 3 SUBJECTS is : %f \n",percentage);
	 return 0;
}
