#include<stdio.h>

int leanerSearch(int arr[],int size,int toFind);

void main()
{
    int arr[100];
    int i,size,toFind,index;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    printf("Enter the elements of array :\n");

    for(i=0;i<size;i++)
    {
        printf("%d index : ",i);
        scanf("%d",&arr[i]);
    }

    printf("Which you want to find : ");
    scanf("%d",&toFind);

    index = leanerSearch(arr,size,toFind);

    if(index == -1)
    {
        printf("Not present in array.");
    }
    else
    {
        printf("%d element is present in %d index.",toFind,index);
    }

}


int leanerSearch(int arr[],int size,int toFind)
{
    for(int i = 0;i<size;i++)
    {
        if(arr[i] == toFind)
        {
            return i;
        }
    }

return -1;
}