#include <stdio.h>
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;  
        n /= 10;       
    }
    return sum;
}
int main() {
    // Anisha sahu
    //erp-10201
    // Enter a number: 6789
    // Sum of digits = 30
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int result = sumOfDigits(num);
    printf("Sum of digits = %d\n",result);

    return 0;
}