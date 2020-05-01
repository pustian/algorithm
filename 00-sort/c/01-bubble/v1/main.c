#include "bubble_sort.h"

int main() {
//    int arr[] = {21, 23, 43, 65, 32, 54, 78, 10, 82};
    int arr[] = {3, 7, 4, 6, 9, 1, 2};
    int len = sizeof(arr)/sizeof(int);
    print_arr(arr, len);

    // printf("++++++++++ bubble len=%d +++++++++\n", len);
    // bubble(arr, len);

    bubble_sort(arr, len);
    print_arr(arr, len);

    return 0;
}
