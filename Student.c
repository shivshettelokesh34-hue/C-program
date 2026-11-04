#include <stdio.h>
#include <conio.h>

void main()
{
    char name[30];
    int roll;

    clrscr();

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Roll No: ");
    scanf("%d", &roll);

    printf("\nStudent Details");
    printf("\nName: %s", name);
    printf("\nRoll No: %d", roll);

    getch();
}
