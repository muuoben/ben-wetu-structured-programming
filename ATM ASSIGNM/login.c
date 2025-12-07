#include <stdio.h>
#include "login.h"

int login() {
    int correctPin = 1234;
    int pin;
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin) {
            return 1;   // login successful
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
        }
    }

    return 0;   // login failed
}

