#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class ATM
{
    char a,b,c,d,name[50];
    public:
    ATM()
    {
        fflush(stdin);
        cout<<"Enter your name: ";
        gets(name);
        cout<<"Enter 4 digit pin: ";
        a = getch();
        cout<<"*";
        b = getch();
        cout<<"*";
        c = getch();
        cout<<"*";
        d = getch();
        cout<<"*";
    }
    long int deposit,withdrawl,check,amount,balance=0;
    char e,f,g,h;
    void dep();
    void withd();
    void ch();   
};
void ATM::dep()
{
    long int deposit;
    do
    {
        cout<<"Enter your 4 digit pin: ";
        e = getch();
        cout<<"*";
        f = getch();
        cout<<"*";
        g = getch();
        cout<<"*";
        h = getch();
        cout<<"*";
        cout<<endl;
        if(e!=a || f!=b || g!=c || h!=d)
        cout<<"\nIncorrect pin Enter again\n";
    }while(e!=a || f!=b || g!=c || h!=d);
    cout<<"Enter amount: ";
    cin>>deposit;
    balance = balance + deposit;
    cout<<"\nYour current Balance: "<<balance;
}
void ATM :: withd()
{
    int withdrawl;
    do
    {
        cout<<"Enter your 4 digit pin: ";
        e = getch();
        cout<<"*";
        f = getch();
        cout<<"*";
        g = getch();
        cout<<"*";
        h = getch();
        cout<<"*";
        if(e!=a || f!=b || g!=c || h!=d)
        cout<<"\n\nIncorrect pin Enter again\n";
    }while(e!=a || f!=b || g!=c || h!=d);
        cout<<"\nEnter amount: ";
        cin>>withdrawl;
        if(balance<=0 || withdrawl>balance)
        cout<<"\nYou have insufficient balance";
        else
        {
            balance = balance - withdrawl ;
            cout<<"\nYour current balance: "<<balance;
        }
}
void ATM :: ch()
{
    do
    {
        cout<<"Enter your 4 digit pin: ";
        e = getch();
        cout<<"*";
        f = getch();
        cout<<"*";
        g = getch();
        cout<<"*";
        h = getch();
        cout<<"*";
        if(e!=a || f!=b || g!=c || h!=d)
        cout<<"\n\nIncorrect pin Enter again\n";
    }while(e!=a || f!=b || g!=c || h!=d);
    cout<<"\n\nYour current balance: "<<balance;
}
int main()
{
    int choice,pin,date,year,month,count=1;
    char exit;
    cout<<"Welcome To More Bank of India"<<endl;
    getch();
    cout<<"\nEnter your Date of Birth: ";
    cin>>date>>month>>year;
    if(date > 31 || month > 12 || year > 2007)
    cout<<"\nSorry! We can't provide you any account because you are too short to get an account\nTo get an account, Your age should be 18 or above 18\n\nThank You to use ATM system of MBI\nHave A Great Day!";
    else
    {
        ATM a;
        do
        {
            cout<<"\n----------------------------------------------------ATM----------------------------------------------------------\n";
            cout<<"1) Check Balance\n2) Withdrawl\n3) Deposit\n\nEnter what you want to do: ";
            cin>>choice;
            switch(choice)
            {
                case 1 : a.ch();break;
                case 2 : a.withd();break;
                case 3 : a.dep();break;
                default : cout<<"Incorrect Choice";break;
            }
            cout<<"\n\nDo you want to exit(Yes-y/No-n): ";
            exit = getche();
            count++;
        }while(exit!='y');
        if(exit == 'y')
        cout<<"\n\nThank You to use ATM system of MBI\nHave A Great Day!";
    }
        getch();
        return 0;
}