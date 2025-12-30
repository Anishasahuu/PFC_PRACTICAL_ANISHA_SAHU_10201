#include <stdio.h>

int main() {
//     Anisha sahu
//     ERP-10201
//     Welcome to the ATM!
// Enter your 4-digit PIN: 5555
// Incorrect PIN. Attempts left: 2
// Enter your 4-digit PIN: 1234
// PIN accepted. Access granted.
    int storedPIN = 1234;   
    int enteredPIN;
    int attempts = 0;
    int maxAttempts = 3;

    printf("Welcome to the ATM!\n");
    while (attempts < maxAttempts) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPIN);
        if (enteredPIN == storedPIN) {
            printf("PIN accepted. Access granted.\n");
            return 0;
        } else {
   attempts++;
    printf("Incorrect PIN. Attempts left: %d\n", maxAttempts - attempts);
    }
    }
    printf("Too many incorrect attempts. Card blocked.\n");
    return 0;
}