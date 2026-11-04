#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, ch;

    clrscr();

    printf("1.Addition\n2.Subtraction");
    printf("\n3.Multiplication\n4.Division");

    printf("\nEnter Choice: ");
    scanf("%d", &ch);

    printf("Enter Two Numbers: ");
    scanf("%d%d", &a, &b);

    switch(ch)
    {
        case 1: printf("Result = %d",a+b); break;
        case 2: printf("Result = %d",a-b); break;
        case 3: printf("Result = %d",a*b); break;
        case 4:
            if(b!=0)
                printf("Result = %d",a/b);
            else
                printf("Cannot divide by zero");
            break;
        default: printf("Invalid Choice");
    }

    getch();
}
