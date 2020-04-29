#include "selection_sort.h"
#include <stdio.h>
int main() {
    int arr[] = {21, 23, 43, 65, 32, 54, 78, 10, 82};
    int len = sizeof(arr)/sizeof(int);
    print_arr(arr, len);
    int exchangeCount = selection_sort(arr, len);
    printf("exchangeCount: %d\n", exchangeCount);
    print_arr(arr, len);
}
