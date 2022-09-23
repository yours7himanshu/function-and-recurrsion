// Write the functions to calculate the area of a square, rectangle, circle ?

#include <stdio.h>
void squareArea(float side );
void rectangleArea(float length, float breadth);
void circleArea(float radius );

int main()
{
    float length;
    float breadth;

    printf("Enter the value of your length \n");
    scanf("%f", &length);
    printf("Enter the value of breadth \n");
    scanf("%f" & breadth);
    
    printf("Area of rectangle is %f\n",rectangleArea(length,breadth));

    return 0;
}
void squareArea(float side)
{
    printf("Area of square is %f \n", side * side);
}
void rectangleArea(float length, float breadth);
{
    return (length * breadth);
}
void circleArea(float radius)
{
    
    printf("Area of circle is %f \n", 3.14 * radius * radius);
}
