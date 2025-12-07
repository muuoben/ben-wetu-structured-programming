#include <stdio.h>
#include "atm.h"

void showMenu() {
    printf("    ATM MENU  \n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

void checkBalance(int balance) {
    printf("Current Balance: %d\n", balance);
}

int deposit(int balance) {
    int amount;
    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
        return balance;
    }

    balance += amount;
    printf("Deposit successful. New balance: %d\n", balance);

    return balance;
}

int withdraw(int balance) {
    int amount;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
        return balance;
    }

    if (amount > balance) {
        printf("Insufficient funds.\n");
        return balance;
    }

    balance -= amount;
    printf("Withdraw successful. New balance: %d\n", balance);

    return balance;
}
