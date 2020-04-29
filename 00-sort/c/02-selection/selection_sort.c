#include <stdio.h>
#include "selection_sort.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int selection_sort(int arr[], int len) {
    int i = 0;
    int j = 0;
    int exchangeCount = 0;
    int minIndex = 0;
    for(i = 0; i<len-1; ++i) {
        minIndex = i;
        for(j = i; j < len; ++j) {
            if(arr[j] < arr[minIndex] ) {
                swap(& arr[j], &arr[minIndex]);
                ++exchangeCount;
            }
        }
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
