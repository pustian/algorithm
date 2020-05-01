#include "insertion_sort.h"
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int insertion_sort(int arr[], int len) {
    int i = 0;
    int j = 0;
    int key = 0;
    int exchangeCount = 0;
    for(i =1; i< len; ++i) {
        key = arr[i];
        
        for(j = i-1; j>0 && arr[j] > key; --j) {
            arr[j+1] = arr[j];
            ++exchangeCount;
        }
        arr[j+1] = key;

        printf("%i \t:", i);
        print_arr(arr, len);
    }
    return exchangeCount;
}

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
