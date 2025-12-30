#include <stdio.h>
void swap(int *a,int *b) {
    int temp;
    temp = *a;   
    *a = *b;     
    *b = temp;   
}
int main() {
// Anisha sahu
// ERP-10201
// Enter two numbers: 56
// 76
// Before swapping: x = 56, y = 76
// After swapping:  x = 76, y = 56
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}