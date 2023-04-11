#include<stdio.h>

int binarySearch(int arr[],int n,int toFind);

void main()
{
    int arr[100];
    int i,n,toFind;

    printf("Enter the size of array : ");
    scanf("%d",&n);

    /*we know that binary search is only work on 
    shorted array so we fill it with shorted form*/

    for(i = 0;i<n;i++)
    {
        arr[i] = i;
    }

    printf("Elements of array : \n");

    for(i = 0;i<n;i++)
    {
        printf("%d \t",arr[i]);
    }

    printf("\nEnter which you want to find :");
    scanf("%d",&toFind);

    int index = binarySearch(arr,n,toFind);

    if(index  == -1)
    {
        printf("Not found");
    }
    else
    {
        printf("\n%d find in %d index.",toFind,index);
    }

}



int binarySearch(int arr[],int n,int toFind)
{
    int si = 0;
    int ei = n-1;

    while(si <= ei)
    {
        int mid = si + (ei-si)/2;
        printf("\n %d is mid",mid);
        if(arr[mid] == toFind)
        {
            return mid;
        }
        else if(arr[mid] > toFind)
        {
            ei = mid-1;
        }
        else
        {
            si = mid+1;
        }

    }

return -1;
}