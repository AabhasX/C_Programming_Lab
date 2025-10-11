#include<stdio.h>
int main(){
    float r,s,l,b,a,p,a1,p1,a2,p2;
    printf("Enter the value of radius r = ");
    scanf("%f", &r);
    printf("Enter the value of side s = ");
    scanf("%f", &s);
    printf("Enter the value of length l = ");
    scanf("%f", &l);
    printf("Enter the value of breadth b = ");
    scanf("%f", &b);
    a = 3.14*r*r;
    p = 2*3.14*r;
    a1 = s*s;
    p1 = 4*s;
    a2 = l*b;
    p2 = 2*(l+b);
    printf("Area of circle = %f perimeter of circle = %f \n area of square = %f perimeter of square = %f \n area of rectangle = %f prtimeter of rectangle = %f", a,p,a1,p1,a2,p2);
    return 0;
}