/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
int main()
{
    int n,i,t1=3,t2=2;
    int nextTerm=t1+t2;
    printf("Enter the numbers:\n");
    scanf("%d",&n);
    printf("Fibonacci series %d %d",t1,t2);
    for(i=0;i<n;i++)
    {
        printf("%d \n",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    return 0;
}