#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 elements:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEven elements are:\n");
    for(int i = 0; i < 5; i++) {
        if(*(ptr + i) % 2 == 0) {
            printf("%d ", *(ptr + i));
        }
    }

    return 0;
}