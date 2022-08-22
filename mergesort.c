#include <stdio.h>
#include <stdlib.h>

void swap (int *x , int *y);
void merge_sort(int a[], int length);
void merge_sort_recursion(int a[], int l, int r);
void merge_sorted_arrays(int a[], int l , int m, int r);

int main(){
    int a[] = {4, 1, 8, 2, 9};
    int len = sizeof(a) / sizeof(a[0]);
    printf("init array \n");
    printarray(a,len);
    merge_sort(a,len);
 

    return (0);
}

void merge_sort(int a[],int len){
merge_sort_recursion(a , 0, len - 1);
}

void merge_sort_recursion(int a[], int l, int r){

    if(l < r){
        int m = l + (r - l) / 2;
        merge_sort_recursion(a, l, m);
        merge_sort_recursion(a, m + 1, r);

        merge_sorted_arrays(a, l, m, r);
    }

}

void merge_sorted_arrays(int *a, int l, int m, int r){
    int left_length = m - l + 1;
    int right_length = r - m;

    int temp_left[left_length];
    int temp_right[right_length];

    int i , j, k;

    for (i = 0 ; i<left_length ;i++){
     temp_left[i] = a[l + i];
     }

     for (i = 0; i < right_length; i++)
     {
         temp_right[i] = a[m + l + i];
     }
}

    void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
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
