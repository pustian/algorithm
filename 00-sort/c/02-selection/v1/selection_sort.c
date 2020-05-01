#include "selection_sort.h"
void print_arr(int arr[], int len) {
    int i = 0;
    for(i=0; i< len; ++i) {
        printf("%4d\t", arr[i]);
        // if( (i+1) % 5 == 0) {
        //     putchar('\n');
        // }
    }
    putchar('\n');
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection(int arr[], int len) {
    int postion = 0;
    int max = arr[0];
    int i = 1;
    for(i = 1; i< len; ++i) {
        if(max < arr[i]) {
            max = arr[i];
            postion = i;
        }
    }
    swap(&arr[postion], &arr[len-1]);
}

void selection_sort(int arr[], int len) {
    int i=0;
    for(i = 0; i< len-1; i++) {
        selection(arr, len-i);
        printf("sorted %4d==> ", i);
        print_arr(arr, len);
    }
}

