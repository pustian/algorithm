#include "merge_sort.h"
#include <stdio.h>
int main() {
//    int arr[] = {21, 23, 43, 65, 32, 54, 78, 10, 82};
    int arr[] = {21, 25, 49, 25, 16, 8};  
    int len = sizeof(arr)/sizeof(int);
    print_arr(arr, len);
    merge_sort(arr, len);
    print_arr(arr, len);

    return 0;
}
