include<stdio.h>
#include<math.h>
int add(){
    int x,y;
    scanf("%d%d",&x,&y);
    return x+y;
}
int main()

{
    int a=add();
    printf("%d",a);
    printf("%d",add());
}
