#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d is greater",a);
    }
    else if(a<b){
        printf("%d is greter",b);

    }
    else{
        printf("Invalid");
    }
    return 0;
}