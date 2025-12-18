#include<stdio.h>
int main(){
    int num,k;
    printf("Enter celcius:");
    scanf("%d",&num);
    k=(num*9/5)+32;
    printf("Farenheit is %d", k);
    return 0;

}