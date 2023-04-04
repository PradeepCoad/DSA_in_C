#include<stdio.h>

void main()
{
    int array[100]; //giving thw max size off array
    int n,i;

    printf("Enter the size of array :");
    scanf("%d",&n);

    //filling array from user

    for(i = 0;i < n; i++)
    {
        printf("\n%d index :",i);
        scanf("%d",&array[i]);

    }

    //traversing or printing array

    for(i = 0;i < n; i++)
    {
        printf("%d \t",array[i]);

    }


}