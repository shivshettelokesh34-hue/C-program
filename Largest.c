#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;

    clrscr();

    printf("Enter Three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b && a>=c)
        printf("Largest = %d",a);
    else if(b>=a && b>=c)
        printf("Largest = %d",b);
    else
        printf("Largest = %d",c);

    getch();
}
