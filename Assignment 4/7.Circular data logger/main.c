#include <stdio.h>

#define BUFFER_SIZE 5

int buffer[BUFFER_SIZE];
int head = 0;
int count = 0;
void insert(int val) {
    buffer[head] = val;
    head = (head + 1) % BUFFER_SIZE;
    if (count < BUFFER_SIZE) count++;
}

void printBuffer() {
    printf("Chronological order: ");
    int start = (count == BUFFER_SIZE) ? head : 0;
    for (int i = 0; i < count; i++) {
        printf("%d ", buffer[(start + i) % BUFFER_SIZE]);
    }
    printf("\n");
}

int main() {
    int choice, val;
    while(1) {
        printf("\n1. Insert Sample\n2. Print Samples\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("Enter value: ");
            scanf("%d", &val);
            insert(val);
        } else if(choice == 2) {
            printBuffer();
        } else break;
    }
    return 0;
}
