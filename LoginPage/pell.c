#include<stdio.h>
int main(){
    int n ,a=1,b=0,i,c=0;
    scanf("%d",&n);
    printf(" %d",c);
    for(i=1;i<n;i++){
        c=a+b*2;
        printf(" %d",c);
        a=b;
        b=c;
    }
    return 0;
}