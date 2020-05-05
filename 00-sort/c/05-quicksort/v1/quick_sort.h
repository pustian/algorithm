#ifndef QUICK_SORT_H_
#define QUICK_SORT_H_
void swap(int *a, int *b);
int partition(int arr[], int left, int right);
void quick_sort(int arr[], int left, int right);
void print_arr(int arr[], int len);
#endif
