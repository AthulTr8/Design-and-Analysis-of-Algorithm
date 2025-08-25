#include<stdio.h>
int insertionsort(int arr[], int high);

int main()
{
    int size, arr[50];
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

    insertionsort(arr,size);

    printf("\nSorted Array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;

}

int insertionsort(int arr[], int high)
{

    int temp = 0;

    for (int i = 1; i <= high - 1; i++ )
    {
        temp = arr[i];
        int j = i - 1;
        
        while ( j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
        
    }
    return 0;
}