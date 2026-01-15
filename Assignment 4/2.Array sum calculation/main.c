#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Input number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements: %d\n", sum);
    return 0;
}
