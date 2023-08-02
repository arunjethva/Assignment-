#include<stdio.h>
#include<conio.h>
main()
{
    int a ;
    printf("enter the yaer");
    scanf("%d",&a);

    if( a%4 ==0)

    {
        printf("%d is the leap year  ",a);
    }
    else
    {
        printf("%d is not a leap year  ",a);
    }
    getch();
}