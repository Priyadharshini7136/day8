#include<stdio.h>
void primeNumber(int x){
    if(x%2==0 && x%3==0)
    printf("%d isnot prime",x);
    else
    printf("%d is prime",x);
 
}
int main()
{
    primeNumber(19);
}
