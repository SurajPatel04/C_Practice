#include<stdio.h>
#include<conio.h>
void main(){
    int x,y,z;
    printf("Enter a x number:");
    scanf("%d",&x);
    printf("Enter a y number:");
    scanf("%d",&y);
    z=x;
    x=y;
    y=z;
    printf("x = %d",x);
    printf("\ny = %d",y);
}