#include <stdio.h>
void printTriangle(int n) {
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
// Anisha sahu
// ERP-10201
// Enter height of triangle: 6
// *
// **
// ***
// ****
// *****
// ******
    int n;
    printf("Enter height of triangle: ");
    scanf("%d",&n);

    printTriangle(n);

    return 0;
}