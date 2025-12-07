#include <stdio.h>
#include "login.h"
#include "atm.h"

int main() {
    int balance = 1000;   // starting account balance
    int choice;

    if (!login()) {
        printf("Access denied.\n");
        return 0;
    }

    while (1) {
        showMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;


            case 4:
                printf("Thank you for using the ATM.\n");
                return 0;



            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
