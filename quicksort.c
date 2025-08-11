#include<stdio.h>
void Quicksort(int arr[], int min, int hig);
int pivotfin(int size);
int partition(int arr[],int min, int hig);
void swap (int *x, int *y);
int size;
int main()
{
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
    Quicksort(arr,0, size -1);
    printf("\nSorted Array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
}

void Quicksort(int arr[], int min, int hig)
{  
        if ( min < hig ) 
        {
            int pi = partition(arr, min, hig);
                    Quicksort(arr , min , pi-1);
                    Quicksort(arr , pi+1 , hig);
    
        }

}
/*int pivotfin(int size)
{
    int pivot;
    if (size % 2 == 0)
    {
        pivot = ((size / 2) + (size / 2) + 1)/2;
    }
    else
    {
        pivot = (size + 1) /2;
    }
    return pivot;
}*/

int partition(int arr[],int min, int hig){
    int pivot = arr[hig]; // Choose the last element as the pivot
    int i = (min - 1);    // Index of smaller element

    // Iterate through elements from 'min' up to 'hig - 1'
    for (int j = min; j < hig; j++){
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot)
        {
            i++; // Increment index of smaller element
            swap(&arr[i], &arr[j]); // Swap current element with the element at 'i+1' position
        }
    }
    // After the loop, swap the pivot element with the element at (i + 1).
    // This places the pivot at its correct sorted position.
    swap(&arr[i + 1], &arr[hig]);

    // Return the partitioning index (the final position of the pivot)
    return (i + 1);
}
void swap (int *x, int *y){
    int t = *x;
    *x = *y;
    *y = t; 
}