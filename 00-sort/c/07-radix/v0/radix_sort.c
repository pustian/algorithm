#include "radix_sort.h"
#include <stdio.h>

int get_digit_num(int x) {
    if(x == 0) return 1;
    int res = 0;
    while(x) {
        ++res;
        x /= 10;
    }
    return res;
}
void radix_sort(int arr[], int len) {
    int vector[10][len] = {0};
    // find the max and its digit number
    int max = arr[0];
    int i = 0;
    for(i=1; i<len; ++i) {
        if(max < arr[i])
            max = arr[i];
    }
    // maxNum times radix sort
    int max_digit_num = get_digit_num(max);
    int divisor = 1;
    for(i = 0; i< max_digit_num ; ++i) {
        vector[]

        int n=0, m =0;
        for(n=0; n<len; n++) {
            for(m; m<len; m++) {
            }
        }
    }
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
