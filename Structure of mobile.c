/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct node
{
    char brand[10];
    int price[1000];
    int RAMsize[10];
    int strogeSize[100];
    int MP[100];
    char processorName[100];
    
}p[10];

int main()
{
    int i;
    printf("Structure of the phone:\n");
    for(i=0;i<=10;i++)
    {
        printf("Enter the brand:");
        scanf("%s",&p[i].brand);
        printf("Enter the price:");
        scanf("%d",&p[i].price);
        printf("Enter the RAMsize:");
        scanf("%d",&p[i].RAMsize);
        printf("Enter the strogeSize:");
        scanf("%d",&p[i].strogeSize);
        printf("Enter the MP:");
        scanf("%d",&p[i].MP);
        printf("Enter the processorName:");
        scanf("%s",&p[i].processorName);
    }


    return 0;
}