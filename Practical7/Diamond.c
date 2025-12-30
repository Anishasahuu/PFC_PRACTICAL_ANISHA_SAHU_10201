#include <stdio.h>

int main() {
// Anisha sahu
// ERP-10201
// Enter number of rows (odd number): 7
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
    int n, i, j;
    printf("Enter number of rows (odd number): ");
    scanf("%d", &n);
    for (i=1;i<=n;i += 2) {
        for (j=1;j<=(n-i)/2;j++) {
            printf(" ");
        }
        for (j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i=n-2;i>=1;i-=2) {
        for (j=1;j<=(n-i)/2;j++) {
            printf(" ");
        }
        for (j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}