#include<stdio.h>
#include<conio.h>
void main()
{
    char a,b,c,d;
    char show;
    printf("Enter 4 digit password: ");
    a = getch(); //getch() function take only character data
    printf("*");
    b = getch();
    printf("*");
    c = getch();
    printf("*");
    d = getch();
    printf("*");
    printf("\nDo you want to see password(Yes-y/No-n): ");
    scanf("%c",&show);
    if(show == 'y')
    printf("Password: %c %c %c %c",a,b,c,d);
    else
    printf("Thank You!");
    getch();
}