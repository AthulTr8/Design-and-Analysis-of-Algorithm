#include<stdio.h>
int selectionsort(int arr[] , int n);
void main()
{
    int size;
    int arr[50];
    printf("Enter the size of array:");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %dth element :", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n original Array :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    selectionsort(arr , size);
    printf("\nSorted Array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

int selectionsort(int arr[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex] )
            {
                minindex = j;
            }
            
        }
        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
    
}