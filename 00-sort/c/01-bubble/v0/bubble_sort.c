#include "bubble_sort.h"
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int bubble_sort(int arr[], int len) {
    int i = 0;
    int j = 0;
    int exchangeCount = 0;
    for(i =0; i< len-1; ++i) {
        for(j=1; j < len-i; j++) {
            if(arr[j-1] < arr[j]) {
                swap(&arr[j-1], &arr[j]);
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
