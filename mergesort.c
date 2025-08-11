#include <stdio.h>  
#include <stdlib.h> 


void mergeSort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);


int main() {
    int size;
    int arr[50]; 

    printf("Enter the size of array: ");
    scanf("%d", &size);

    
    for (int i = 0; i < size; i++) {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    
    printf("\nOriginal Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    
    mergeSort(arr, 0, size - 1);

    printf("Sorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; 
}

void mergeSort(int arr[], int low, int high) {
    if (low < high) { 
        int mid = low + (high - low) / 2; 

        
        mergeSort(arr, low, mid);

        
        mergeSort(arr, mid + 1, high);

        
        merge(arr, low, mid, high);
    }
}


void merge(int arr[], int low, int mid, int high) {
    int i, j, k;
    int n1 = mid - low + 1; 
    int n2 = high - mid;    

    
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for (i = 0; i < n1; i++) {
        L[i] = arr[low + i];
    }

   for (j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

   
    i = 0;  
    j = 0;  
    k = low;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

   
    free(L);
    free(R);
}