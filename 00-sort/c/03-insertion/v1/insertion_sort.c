#include "insertion_sort.h"
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

void insertion(int arr[], int len) {
    int key = arr[len];
    int i = len;
    while(key < arr[i-1] && i != 0) {
        arr[i] = arr[i-1];
        --i;
    }
    // i 已经到当前位置
    arr[i] = key;
}

void insertion_sort(int arr[], int len) {
    int i=1;
    for(i = 1; i< len; i++) {
        insertion(arr, i);
        printf("sorted %4d==> ", i);
        print_arr(arr, len);
    }
}

