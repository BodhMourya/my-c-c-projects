#include<stdio.h>
#include<conio.h>
void main()
{
    char str[50];
    int i,j,count;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        for(j=i;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            count++;
        }
        if(count==1)
        continue;
        printf("Repeatition occur in %c and it repeats %d times\n",str[i],count);
    }
    getch();
}