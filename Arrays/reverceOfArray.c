#include<stdio.h>

void main()
{
    int arr[10];
    int n,i;

    n = sizeof(arr)/sizeof(arr[0]); // to get size of array.
    
    printf("Enter the elements of Array : \n");

    for(i = 0;i<n;i++)
    {
        printf("%d index : ",i);
        scanf("%d",&arr[i]);

    }

    printf("Elements of array : \n");

    for(i = 0;i<n;i++)
    {
        printf("%d \t",arr[i]);

    }

    printf("\nAfter reverce :\n");

    for(i = 0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    for(i = 0;i<n;i++)
    {
        printf("%d \t",arr[i]);

    }


}