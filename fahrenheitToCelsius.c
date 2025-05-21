#include<stdio.h>
float fahrenheitToCelsius(float fahrenheit){
    return(fahrenheit-32)*5.0/9.0;
}
int main(){
    float fahrenheit,celsius;
    printf("enter temperature in fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius=fahrenheitToCelsius(fahrenheit);
    printf("Temperature in celsius:%2.f",celsius);
    return 0;
}