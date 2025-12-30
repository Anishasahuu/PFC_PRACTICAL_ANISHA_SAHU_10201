#include <stdio.h>

int main() {
//     Anisha sahu
//     ERP-10201
//     7
// *************
//  ***********
//   *********
//    *******
//     *****
//      ***
//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
// *************
    int n;
    scanf("%d",&n);
    int totalRows = 2*n-1;
    for (int i=0;i<n;i++) {
       
        for (int s=0;s<i;s++) {
            printf(" ");
        }
       
        for (int k=0;k<totalRows-2*i;k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=n-2;i>=0;i--) {
        for (int s=0;s<i;s++) {
            printf(" ");
        }
        for (int k=0;k<totalRows-2*i;k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}