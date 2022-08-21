#include <stdio.h>
#include <stdlib.h>

void swap (int *x , int *y);
void quicksort(int array[], int length);
void quicksort_recursion(int array[],int low , int high);
int partition (int array[],int low, int high);
void printarray (int arr[], int len);
void swapededges(int *arr, int len);

    int main()
{
    int a[] = {4, 1, 8, 2, 9};
    int len = sizeof(a) / sizeof(a[0]);
    printf("init array \n");
    printarray(a,len);

   quicksort(a,len);
    printf("sorted \n");
    printarray(a, len);

    return (0);
}

void swap(int *x, int *y){
int temp = *x;
*x = *y;
*y = temp;
}

int partition(int *array, int low, int high){
int pivot_value = array[high];
int i = low;
int j = 0;

for( j = low; j<high; j++){
    if(array[j] <= pivot_value){
        swap(&array[i],&array[j]);
        i++;
    }
}
swap(&array[i], &array[high]);

return i;
}



void quicksort(int array[], int length)
{
    quicksort_recursion(array, 0, length - 1);
}

void quicksort_recursion(int *array, int low, int high){

if(low < high){   
int pivot_index = partition(array,low,high);
quicksort_recursion(array,low,pivot_index - 1);
quicksort_recursion(array, pivot_index + 1, high );
}
}




void swapededges(int arr[], int len){
    swap(&arr[0], &arr[len - 1]);
}

void printarray(int arr[] , int len){
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
printf("=============================== \n"); 
}
