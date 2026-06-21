#include <stdio.h>

void add_two(int arr[], int len, int num) {
    int first = arr[0];

    for (int i = 0; i < len; i++) {
        if (arr[i] == num - first) {
            printf("indices: %d %d", 0, i); 
        }
    }
}

int main() {
    int arr[] = {2,4,6,8,10};

    int arr_len = sizeof(arr) / sizeof(arr[0]);

    add_two(arr, arr_len, 12);
    return 0;
}