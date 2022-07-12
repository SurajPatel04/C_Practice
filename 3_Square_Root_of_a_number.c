#include<stdio.h>
#include<math.h>
void main(){
    double number, suqare_root;
    printf("Enter a number for square root:");
    scanf("%lf",&number);
    suqare_root= sqrt(number);
    printf("Square root of %.2lf = %.2lf",number,suqare_root);
}