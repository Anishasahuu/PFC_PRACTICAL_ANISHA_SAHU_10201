#include <stdio.h>

int main() {
// Anisha sahu
// ERP-10201
// Enter the value of n: 5
// Sum of even numbers from 1 to 5 = 6
    int n,i,sum = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        if (i%2!=0) {
            continue; 
        }
        sum += i;
    }
    printf("Sum of even numbers from 1 to %d = %d\n",n,sum);
    return 0;
}