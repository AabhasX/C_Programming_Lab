#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,distance;
    printf("Eenter the x coordinate of first point x1 = ");
    scanf("%f", &x1);
    printf("Eenter the y coordinate of first point y1 = ");
    scanf("%f", &y1);
    printf("Eenter the x coordinate of second point x2 = ");
    scanf("%f", &x2);
    printf("Eenter the y coordinate of second point y2 = ");
    scanf("%f", &y2);
    distance = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("the distance between two points = %1f", distance);
    return 0;
}