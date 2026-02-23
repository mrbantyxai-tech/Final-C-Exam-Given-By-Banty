#include <stdio.h>

float calculateAverage(int arr[2][3]) {
    int sum = 0;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }

    return sum / 6.0;
}

int main() {
    int arr[2][3];

    printf("Enter 6 elements:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    float avg = calculateAverage(arr);
    printf("\nAverage = %.2f\n", avg);

    return 0;
}
