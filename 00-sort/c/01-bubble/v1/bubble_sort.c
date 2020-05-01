#include "bubble_sort.h"
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

void bubble(int arr[], int len) {
    int i = 0;
    for(i = 1; i< len; ++i) {
        if(arr[i-1] > arr[i] ) {
            swap(&arr[i-1], &arr[i]);
        }
    }

}

void bubble_sort(int arr[], int len) {
    int i=0;
    for(i = 0; i< len-1; i++) {
        bubble(arr, len-i);
        printf("sorted %4d==> ", i);
        print_arr(arr, len);
    }
}

