/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int base,exp;
    long long result=1;
    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the exp:");
    scanf("%d",&exp);
    while(exp!=0)
    {
        result*=base;
        --exp;
    }
    printf("%d",result);
    return 0;
}
