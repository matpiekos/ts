#include<stdio.h>


int main(void){
    int x= 1e4;
    printf("Podaj liczbe: %.8g ", x );
    scanf(" %d" , &x );
    printf("Twoja liczba to: %d", x);
    return 0;

}