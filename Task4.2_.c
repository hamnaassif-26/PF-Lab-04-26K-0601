#include <stdio.h>
#include <conio.h>
int main()
{
	int p,q,r;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&p,&q,&r);
	 
	 if(p>q && p>r)
	 {
	 	printf("The largest number is %d",p);
	 }
	 else if(q>p && q>r)
	 {
	 	printf("The largest number is %d",q);
	 }
	 else
	 {
	 	printf("The largest number is %d",r);
	 }
	 getch();
	 return 0;
}
