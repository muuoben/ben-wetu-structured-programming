#include <stdio.h>

int main() {
    int n, i, pos, val;
    printf("Input size of array: ");
    scanf("%d", &n);
    int arr[n + 1]; // Extra space for the new element

    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input value to insert: ");
    scanf("%d", &val);
    printf("Input position (0-indexed): ");
    scanf("%d", &pos);

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;

    printf("New list: ");
    for(i = 0; i <= n; i++) printf("%d ", arr[i]);
    return 0;
}
