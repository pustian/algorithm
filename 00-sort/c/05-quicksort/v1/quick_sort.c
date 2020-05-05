#include "quick_sort.h"
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int left, int right) {
    int i = left;
    int j = right;
    int temp = arr[left];
    if(left >= right)
        return;

    while(i != j) {
        // 右侧，交换小数到左侧
        while(i < j && arr[j] >= temp) 
            --j;
        if(j > i) 
            arr[i] = arr[j];
        // 左侧，交换大数到右侧
        while(i < j && arr[i] <= temp)
            ++i;
        if(i<j)
            arr[j] = arr[i];

        printf("left_pos=%2d right_pos=%2d", i, j);
        print_arr(arr, right+1);
    }
    
    arr[i] = temp;    // 此时已经区分了左右侧
    return i;
}
void quick_sort(int arr[], int left, int right) {
    int pivot_pos = 0;
    if(left < right) {
        pivot_pos = partition(arr, left, right);
        quick_sort(arr, left, pivot_pos - 1);  // 递归左侧
        quick_sort(arr, pivot_pos + 1, right); // 递归右侧
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
