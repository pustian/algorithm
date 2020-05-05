#include "merge_sort.h"
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int min(int x, int y) {return x < y? x: y; }
// 注意 start - end < 2* gap 
void merge(int arr[], int gap, int start, int end) {
}
void merge_sort(int arr[], int len) {
    int* temp = (int*)malloc(len*sizeof(int) ) ;
    int next = 0; // temp 的index
    int gap = 0;
    // 步长 1， 2，4，8
    for(gap = 1; gap < len; gap *= 2) {
        int left_min = 0; 
        int left_max = left_min + gap;
        int right_min = left_min + gap; // 重复了 left_max
        int right_max = left_max + gap;
        for(left_min =0; left_min < len - gap; left_min = right_max) {
            left_max = left_min + gap;
            right_min = left_min + gap;
            right_max = left_max + gap;
            if(right_max > len) // 超出数组
                right_max = len;

            // 
            next = 0;
            // 获取 合并2个gap {[1] [2]}   {[1, 3] [2,4]}
            while(left_min < left_max && right_min < right_max) {
                if(arr[left_min] < arr[right_min]) {
                    temp[next++] = arr[left_min++];
                } else {
                    temp[next++] = arr[right_min++];
                }
            }
            // left 先走完.  [1,3] [3,4]
            while(left_min < left_max) {
                arr[--right_min] = arr[--left_max];
            }
            // 辅助列表中值重新放入
            while(next > 0) {
                arr[--right_min] = temp[--next];
            }
        }
    }

    free(temp);
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
