#include <stdio.h>

void main()
{
    int arr[100];
    int i,x,n,count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array: \n");

    for( i = 0;i<n;i++)
    {
        printf("%d index :",i);
        scanf("%d",&arr[i]);

    }

    printf("Enter the element to count :");
    scanf("%d", &x);

    for(i = 0;i<n;i++)
    {
        if(x == arr[i])
        {
            count++;
        }
    }

    printf("%d times %d present in array.",count,x);



}