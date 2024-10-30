#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Bill
{
    char name[50];
    int qty,rate,amount;
};
struct Bill b[5];
void main()
{
    int i,total=0;
    FILE *fp = NULL;
    fp = fopen("C:\\VS Code programs\\C Programs\\Bill.txt","w");
    if(fp == NULL)
    printf("File not created");
    else
    {
        for(i=1;i<=5;i++)
        {
        fflush(stdin);
        printf("Enter Product name: ");
        gets(b[i].name);
        printf("Enter Quantity: ");
        scanf("%d",&b[i].qty);
        printf("Enter rate: ");
        scanf("%d",&b[i].rate);
        b[i].amount = b[i].qty * b[i].rate;
        total = total + b[i].amount;
        }
        fprintf(fp,"-------------------------------------------------MENU--------------------------------------------------------------");
        fprintf(fp,"\nPRODUCT\t\tRATE\t\tAMOUNT\n");
        fprintf(fp,"-------------------------------------------------------------------------------------------------------------------\n");
        for(i=1;i<=5;i++)
        {
            fputs(b[i].name,fp);
            fprintf(fp,"\t\t%d\t\t",b[i].rate);
            fprintf(fp,"%d\n",b[i].amount);
        }
        fprintf(fp,"\n");
        fprintf(fp,"-------------------------------------------------------------------------------------------------------------------");
        fprintf(fp,"\n\tTotal Amount: %d\n",total);
        fprintf(fp,"-------------------------------------------------------------------------------------------------------------------");
        fclose(fp);
        printf("Your Bill has created");
        getch();
    }
}