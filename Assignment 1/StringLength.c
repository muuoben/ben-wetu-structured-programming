#include <stdio.h>
#include <string.h>

int main() {
    char str[100];   // Buffer to store the string
    int length;

    // Ask the user for input
    printf("Enter a string: ");
    scanf("%99s", str);   // Read a word (no spaces)

    // Print the string back
    printf("You entered: %s\n", str);

    // Compute length
    length = strlen(str);

    // Display the length
    printf("The length of the string is: %d\n", length);

    return 0;
}
