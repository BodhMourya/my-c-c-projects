#include<stdio.h>
#include<conio.h>
int expo(int n,int p);
int rev(int n);
void main()
{
    int a,b,year[25],c,r,s=0,fact=1,num,power,count=0;
    float p,f,t,si;
    char d,e;
    printf("------------------------------------------------------------------------------CALCULTOR-------------------------------------------------------------------------------------");
    do
    {
        printf("\n\na)Addition\nb)Subtraction\nc)Multiplication\nd)Division\ne)Percentage\nf)Factorial\ng)reverse\nh)Simple Interest\ni)ASCII value\nj)Remainder\nk)table\nl)leap year\nm)Word format of numbers\nn)Exponentiation");//swaping of two numbers
        printf("\n\nEnter what you want to calculate: "); //conditional statements se karna hai
        d = getche();
        if(d=='a'||d=='b'||d=='c'||d=='d'||d=='e'||d=='j')
        {
            printf("\nEnter numbers: ");
            scanf("%d%d",&a,&b);
        }
        if(d=='a')
        {
            printf("\nAddition of %d and %d is %d",a,b,(a+b));
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        else
        if(d=='b')
        {
            c = a-b;
            printf("\nSubtraction of %d and %d is %d",a,b,c);
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        else
        if(d=='c')
        {
            c = a*b;
            printf("\nMultiplication of %d and %d is %d",a,b,c);
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        else
        if(d=='d')
        {
            c = a/b;
            printf("\nDivision of %d and %d is %d",a,b,c);
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        else
        if(d=='e')
        {
            c = (a*100)/b;
            printf("Percentage is %d",c);
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        else
        if(d=='f')
        {
        printf("\nEnter a number: ");
        scanf("%d",&a); //Logical Error
        b=a;
        while(a!=0)
        {
            fact = fact * a;
            a--;
        }
        printf("Factorial of %d is %d",b,fact);
        printf("\n\nDo you want to exit(Yes-y/No-n): ");
        e = getche();
        if(e=='y')
        break;
        }
        else
        if(d=='g')
        {
            printf("\nEnter a number: ");
            scanf("%d",&a);
            b = rev(a);
            printf("Reverse of %d is %d",a,b);
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        else
        if(d=='h')
        {
            printf("\nEnter principal: ");
            scanf("%f",&p);
            printf("Enter Rate: ");
            scanf("%f",&f);
            printf("Enter Time: ");
            scanf("%f",&t);
            si = (p*f*t)/100;
            printf("Simple Interest = %.2f",si);
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        else
        if(d=='i')
        {
            printf("\nEnter a character: ");
            scanf("%c",&d);
            printf("ASCII value of %c is %d",d,d);
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        else
        if(d=='j')
        {
            r = a%b;
            printf("Remainder is %d",r);
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        else
        if(d=='k')
        {
            printf("\nEnter a number: ");
            scanf("%d",&a);
            for(b=1;b<=10;b++)
            printf("%d x %d = %d\n",a,b,(a*b));
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        else
        if(d=='l')
        {
            printf("\nEnter year in 21th century: ");
            scanf("%d",&a);
            b = 2000;
            for(r=0;r<=24;r++)
            {
                year[r] = b;
                b = b + 4;
            }
            for(r=0;r<=24;r++)
            {
                if(a==year[r])
                {
                    printf("It is leap year");
                    count++;
                    break;
                }
            }
            if(count == 0)
            printf("It is not a leap year");
            getch();
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        if(d=='m')
        {
            printf("\nEnter a number: ");
            scanf("%d",&a);
            b = rev(a);
            while(b!=0)
            {
                r = b%10;
                if(r==1)
                printf("one ");
                else
                if(r==2)
                printf("two ");
                else
                if(r==3)
                printf("three ");
                else
                if(r==4)
                printf("four ");
                else
                if(r==5)
                printf("five ");
                else
                if(r==6)
                printf("six ");
                else
                if(r==7)
                printf("seven ");
                else
                if(r==8)
                printf("eight ");
                else
                if(r==9)
                printf("nine ");
                else
                printf("zero ");
                b = b/10;
            }
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;
        }
        if(d == 'n')
        {
            printf("\nEnter a number: ");
            scanf("%d",&num);
            printf("Enter power: ");
            scanf("%d",&power);
            a = expo(num,power);
            printf("Exponentiation of %d is %d",num,a);
            printf("\n\nDo you want to exit(Yes-y/No-n): ");
            e = getche();
            if(e=='y')
            break;            
        }
    }while(e=='n');
    printf("\n\nThank You!");
    getch();
}
int rev(int n)
{
    int r,s=0;
    while(n!=0)
    {
        r = n%10;
        s = (s*10)+r;
        n = n/10;
    }
    return s;
}
int expo(int n,int p)
{
    int e = 1;
    while(p!=0)
    {
        e = e*n;
        p--;
    }
    return e;
}