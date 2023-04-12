#include<stdio.h>

void main()
{
    int arr[100];
    int i,n,j;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter elements of array :\n");

    for(i = 0;i<n;i++)
    {
        printf("%d index : ",i);
        scanf("%d",&arr[i]);

    }

    printf("\nInput array : \n");
    for(i = 0;i<n;i++ )
    {
        printf("%d \t",arr[i]);
    }

    printf("\nShorted array : \n");

    int temp;

    for(i = 0;i<n;i++)
    {
        for(j = i+1;j < n ; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i = 0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }


}