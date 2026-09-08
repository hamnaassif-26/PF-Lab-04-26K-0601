#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    if(num%2==0)
    {
        printf("%d is Even",num);
    }
    else
    {
        printf("%d is Odd",num);
    }
    getch();
    return 0;
}
