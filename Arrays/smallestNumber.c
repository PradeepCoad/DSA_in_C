# include <stdio.h>

void main()
{

    int arr[100];
    int size,i;

    printf("Enter the size of array :");
    scanf("%d", &size);

    printf("Enter elements of array :\n");

    for(i = 0;i < size; i++)
    {
        printf("%d index: ",i);
        scanf("%d", &arr[i]);
    }

    for (int  i = 0; i < size; i++)
    {
        if(arr[0] > arr[i + 1])
        {
            arr[0] = arr[i+1];
        }
    }

    printf("%d",arr[0]);


}

