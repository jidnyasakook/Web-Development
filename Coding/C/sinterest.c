#include<stdio.h>
int main(){
    int p,r,t,k;
    printf("Enter principal, rate and time:");
    scanf("%d%d%d", &p,&r,&t);
    k=(p*r*t)/100;
    printf("Simple interets is %d",k);
    return 0;

}