#include<stdio.h>
void bubblesort(int arr[], int n);

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
    bubblesort(arr , size);
    printf("\nSorted Array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

void bubblesort(int arr[], int n)
{
    int temp = 0;
    for (int i = 0; i < n -1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j +1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }
   /* printf("\nSorted Array:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }*/
    
}