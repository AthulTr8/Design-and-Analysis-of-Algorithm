#include<stdio.h>


typedef struct minmax
{
    int min;
    int max;
}minmax;

minmax DCminmax(int arr[], int min, int max);
int main()
{
    
    int arr[50], size;
    minmax var;
    printf("Enter the size of array:");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %dth element of Array :", i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n Array :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    var = DCminmax(arr, 0, size -1);
    printf("\n min : %d \t max : %d", var.min, var.max);
}
minmax DCminmax(int arr[], int min, int max){
    
   minmax product, lp, rp;
    if (min == max){

        product.min = arr[min];
        product.max = arr[max];
        return product;

    }

    if ( max == min + 1)
    {
    
        if (arr[min] < arr[max])
        {
            product.min =arr[min];
            product.max = arr[max];
            return product;

        }
 
    }

    int mid = min + ( max  - min) / 2;
    lp = DCminmax(arr, min, mid);
    rp = DCminmax(arr, mid + 1, max);

    if (lp.min < rp.min)
        product.min = lp.min;
    else
        product.min = rp.min;

    if (lp.max > rp.max)
        product.max = lp.max;
    else
        product.max = rp.max;


        return product;
}

