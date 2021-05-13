/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
struct node
{
    int snumber[20];
    char snames[20];
    float smarks[10];
}s[10];

int main()
{
    int i;
    printf("Enter the students information:\n");
    for(i=0;i<=10;i++)
    {
        printf("Enter the students numbers:");
        scanf("%d",&s[i].snumber);
        printf("Enter the students names:");
        scanf("%s",&s[i].snames);
        printf("Enter the students marks:");
        scanf("%f",&s[i].smarks);
    }
    

    return 0;
}
