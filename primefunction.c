#include<stdio.h>
void primeNumber(int n){
    int flag=0;
    for(int i=2;i<n-1;i++){
    if(n%1==0){
        return 0;
    }
 }
 return 1;
}
int main()
{
    int x;
    scanf("%d",&x);
    int n=prime(x);
    if(n==1)
    printf("%d is aprime number",x);
    else printf("%d is not prime,x")
}
