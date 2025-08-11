#include<stdio.h>
void binarysearch(int arr[], int min, int max, int search);
int selectionsort(int arr[] , int n);
int main(){

     int size, search;
    int arr[50];

    printf("Enter the size of array: ");
    scanf("%d", &size);

    
    for (int i = 0; i < size; i++) {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &arr[i]);
    }
     selectionsort(arr , size);
   
    printf("\nArray: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element you want to search :");
    scanf("%d", &search);

    binarysearch(arr, 0, size -1, search);

}

void binarysearch(int arr[], int min, int max, int search){
    
    if (min > max)
    { 
        printf("not found");
        return;
    }    

    int mid = min + (max - min) / 2;

    if ( arr[mid] == search )
    {
        printf("\n%d is founded at %d", search, mid);
        return;
    }
    else if (arr[mid] < search) {
    
        return binarysearch(arr, mid + 1, max, search);
    } else {

        return binarysearch(arr, min, mid - 1, search);
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