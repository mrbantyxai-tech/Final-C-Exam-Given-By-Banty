#include <stdio.h>

void printOdd(int arr[], int size) {
    printf("\nOdd elements are:\n");
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[5];

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printOdd(arr, 5);

    return 0;
}

