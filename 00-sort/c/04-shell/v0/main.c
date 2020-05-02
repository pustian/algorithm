#include "shell_sort.h"

int main() {
//    int arr[] = {21, 23, 43, 65, 32, 54, 78, 10, 82};
    int arr[] = {3, 7, 4, 6, 9, 1, 2};
    int len = sizeof(arr)/sizeof(int);
    print_arr(arr, len);

    printf("++++++++++ shell len=%d +++++++++\n", len);
//     shell(arr, len, len/2);
//     shell(arr, len, len/4);

    shell_sort(arr, len);
    print_arr(arr, len);

    return 0;
}
