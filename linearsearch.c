#include<stdio.h>

int main()
{
    int size, search;
    int arr[50];

    printf("Enter the size of array: ");
    scanf("%d", &size);

    
    for (int i = 0; i < size; i++) {
        printf("Enter %dth element: ", i + 1);
        scanf("%d", &arr[i]);
    }

   
    printf("\nArray: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the item that you have to search :");
    scanf("%d",&search);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            printf("Your item is founded \n%d is found at %dth index",search ,i);
            break;

        }
        else if (i >= size - 1)
            printf("Not Found");
        
    }
 
    return 0;
}