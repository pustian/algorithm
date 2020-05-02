#include "shell_sort.h"
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


// void insertion(int arr[], int len) {
//     int key = arr[len];
//     int i = len;
//     while(key < arr[i-1] && i != 0) {
//         arr[i] = arr[i-1];
//         --i;
//     }
//     // i 已经到当前位置
//     arr[i] = key;
// }

void shell(int arr[], int len, int gap) {
    int i = 0;
    int j = 0;
    // 各子序轮流执行插入排序
    for(i = gap; i < len; ++i ) {
        // 类似insert 间隔为gap 操作
        int j = i;
        int key = arr[i];
        while( key < arr[j-gap] && j >= gap ) {
            arr[j] = arr[j-gap];
            j -= gap;
        }
        arr[j] = key;
        print_arr(arr, len);
    }
}

void shell_sort(int arr[], int len) {
    int i=0;
    int gap = 0;
    int gap_i = 0;
    for(gap = len/2; gap > 0; gap /= 2 ) {
        shell(arr, len, gap);
        printf("sorted %4d==> \n", gap);
        print_arr(arr, len);
    }
}

