//Write a C Program to read radius of a circle and to find area and circumferenc

#include <stdio.h>
#define PI 3.17
int main(){
    float radius, area , circ;
    printf("Enter the radius of the circle: \n");
    scanf("%f",radius);
    area = PI * radius *radius;
    circ = 2 * PI * radius;
    printf("Here is the area: %f\nHere is the circumferenc: %f", area, circ);
}