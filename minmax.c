#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int minmax(int arr[],int size);

typedef char * string;
int main(int argc, string argv[])
{ 
    if (argc > 2 || argc < 2)
    {
        printf("Not valid input");
        return 1;
    }

    int result = atoi(argv[1]);
    if (result == 0 && strcmp(argv[1], "0") != 0) {
        printf("\n Not a valid input \n programme ended with return value 2");
        return 2;
    }

    int arr[result];
     for (int i = 0; i < result; i++)
    {
        printf("Enter %dth element :", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n Array :");
    for (int i = 0; i < result; i++)
    {
        printf("%d ",arr[i]);
    }
    minmax(arr, result -1);
}

int minmax(int arr[],int size)
{
    int min = arr[0], max = arr[0];
    
    for(int i = 1; i <= size; i++)
    {
        if ( arr[i] > max)
        {
            max = arr[i];
        }
        else if ( arr[i] < min)
        {
            min = arr[i];
        }
        
    }

    printf("\n min : %d \t max : %d", min, max);
    return 0;
}