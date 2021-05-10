/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char operator;
    double first,second;
    printf("Enter the operators(+,-,*,/):");
    scanf("%s",&operator);
    printf("Enter two operands:");
    scanf("%f %f",&first,&second);
    switch(operator)
    {
        case '+':printf("%f + %f=%f",first,second,first+second);
                 break;
        case '-':printf("%f - %f=%f",first,second,first-second);
                 break;
        case '*':printf("%f * %f=%f",first,second,first*second);
                 break;
        case '/':printf("%f / %f=%f",first,second,first/second);
                 break;
        default:
                printf("Invalid choice!!!wrong selection\n");
    }
    return 0;
}
