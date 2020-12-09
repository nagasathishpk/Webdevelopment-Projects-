#include<stdio.h>
int main(){
    int n ,a=0,b=1,i,c;
    scanf("%d",&n);
    printf("%d",a);
    printf(" %d",b);
    for(i=2;i<n;i++){
        c=a+b*2;
        printf(" %d",c);
        a=b;
        b=c;
    }
    return 0;
}