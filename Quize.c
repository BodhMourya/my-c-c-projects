#include<stdio.h>
#include<conio.h>
void main()
{
    char a,name[50];
    int points=0;
    FILE *fp = NULL;
    fp = fopen("C:\\VS Code programs\\Files by coding\\Quize Scoreboard.txt","a");
    if(fp == NULL)
    printf("File not created");
    else
    {
        printf("Enter Your Name: ");
        gets(name);
        printf("-----------------------------------------------------QUIZE-------------------------------------------------------------");
        printf("\n\n");
        printf("1. Who is the father of C language?\na) Steve Jobs\nb) James Gosling\nc) Dennis Ritchie\nd) Rasmus Lerdorf\nEnter your Answer: ");
        a = getche();
        if(a == 'c')
        {
            printf("\nCorrect Answer");
            points++;
        }
        else
        printf("\nIncorrect Answer");
        getch();

        printf("\n\n2. Which of the following is not a valid C variable name?\na) int number;\nb) float rate;\nc) int variable_count;\nd) int $main;\nEnter your answer: ");
        a = getche();
        if(a == 'd')
        {
            printf("\nCorrect Answer");
            points++;
        }
        else
        printf("\nIncorrect Answer");
        getch();

        printf("\n\n3. All keywords in C are in ____________\na) LowerCase letters\nb) UpperCase letters\nc) CamelCase letters\nd) None of the mentioned\nEnter your answer: ");
        a = getche();
        if(a == 'a')
        {
            printf("\nCorrect Answer");
            points++;
        }
        else
        printf("\nIncorrect Answer");
        getch();

        printf("\n\n4. Which of the following is true for variable names in C?\na) They can contain alphanumeric characters as well as special characters\nb) It is not an error to declare a variable to be one of the keywords(like goto, static)\nc) Variable names cannot start with a digit\nd) Variable can be of any length\nEnter your answer: ");
        a = getche();
        if(a == 'c')
        {
            printf("\nCorrect Answer");
            points++;
        }
        else
        printf("\nIncorrect Answer");
        getch();

        printf("\n\n5. Which is valid C expression?\na) int my_num = 100,000;\nb) int my_num = 100000;\nc) int my num = 1000;\nd) int $my_num = 10000;\nEnter your answer: ");
        a = getche();
        if(a == 'b')
        {
            printf("\nCorrect Answer");
            points++;
        }
        else
        printf("\nIncorrect Answer");
        getch();

        printf("\n\n6. Which of the following cannot be a variable name in C?\na) volatile\nb) true\nc) friend\nd) export\nEnter your answer: ");
        a = getche();
        if(a == 'a')
        {
            printf("\nCorrect Answer");
            points++;
        }
        else
        printf("\nIncorrect Answer");
        getch();

        printf("\n\n7. What is short int in C programming?\na) The basic data type of C\nb) Qualifier\nc) Short is the qualifier and int is the basic data type\nd) All of the mentioned\nEnter your answer: ");
        a = getche();
        if(a == 'c')
        {
            printf("\nCorrect Answer");
            points++;
        }
        else
        printf("\nIncorrect Answer");
        getch();

        printf("\n\n8. Which of the following declaration is not supported by C language?\na) String str;\nb) char *str;\nc) float str = 3e2;\nd) Both “String str;” and “float str = 3e2;”\nEnter your answer: ");
        a = getche();
        if(a == 'a')
        {
            printf("\nCorrect Answer");
            points++;
        }
        else
        printf("\nIncorrect Answer");
        getch();

        printf("\n\n9. Which keyword is used to prevent any changes in the variable within a C program?\na) immutable\nb) mutable\nc) const\nd) volatile\nEnter your answer: ");
        a = getche();
        if(a == 'c')
        {
            printf("\nCorrect Answer");
            points++;
        }
        else
        printf("\nIncorrect Answer");
        getch();

        printf("\n\n10. What is the result of logical or relational expression in C?\na) True or False\nb) 0 or 1\nc) 0 if an expression is false and any positive number if an expression is true\nd) None of the mentioned\nEnter your answer: ");
        a = getche();
        if(a == 'b')
        {
            printf("\nCorrect Answer");
            points++;
        }
        else
        printf("\nIncorrect Answer");
        getch();

        fprintf(fp,"\n\nName: %s",name);
        fprintf(fp,"\nYour Points: %d",points);
        fclose(fp);
        printf("\n\nYour scoreboard is ready");
        getch();
    }
}