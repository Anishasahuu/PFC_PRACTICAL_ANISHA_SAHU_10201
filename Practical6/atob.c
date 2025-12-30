#include <stdio.h>

int main() {
// Anisha sahu
// ERP-10201
// enter first number:
// 7
// enter second number:
// 10
// Numbers from 7 to 10 are:
// 7
// 8
// 9
// 10
    int a, b, i;
    printf("enter first number:\n");
    scanf("%d",&a); 
    printf("enter second number:\n");
    scanf("%d",&b); 
    printf("Numbers from %d to %d are:\n",a,b);
    for (i=a;i<=b;i++) {
        printf("%d\n",i);
    }
    return 0;
}