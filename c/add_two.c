#include <stdio.h>

void add_two(int arr[], int len, int num) {

    int found = 0;

    for (int i = 0; i < len && !found; i++) {

        for (int j = 0; j < len; j++){
            if (arr[j] + arr[i] == num) {
                printf("Found: i: %d j: %d arr[i]: %d arr[j]: %d\n", i, j, arr[i], arr[j]);
                printf("Target: %d \nSum: %d and %d \nFound at Indices: %d and %d\n", num, arr[i], arr[j], i, j);
                found = 1;
                break;
            } else {
                printf("Not Found: i: %d j: %d arr[i]: %d arr[j]: %d\n", i, j, arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int arr[] = {2,4,6,8,10};

    int arr_len = sizeof(arr) / sizeof(arr[0]);

    add_two(arr, arr_len, 12);

    return 0;
}