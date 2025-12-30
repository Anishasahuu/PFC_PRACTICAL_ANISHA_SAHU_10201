#include<stdio.h>
int main(){
// ANISHA SAHU
// ERP-10201
// A
// AB
// ABC
// ABCD
int n=4;
char ch='A';
for(int i=1;i<=4;i++){
    for(int j=1;j<=i;j++){
        printf("%c",ch);
        ch++;
    }
    ch='A';
    printf("\n");
}
return 0;
}