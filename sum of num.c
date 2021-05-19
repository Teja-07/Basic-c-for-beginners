/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter the numbers:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum+=i;
        printf("%d",sum);
    }
    return 0;
}