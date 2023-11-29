// area of circle//
#include <stdio.h>

int main()
{
  float radius, area;
//Enter the radius of circle 
  printf("Enter the radius of a circle :");

  scanf("%f", &radius);
  
// formula//
  area = 3.14*radius*radius;

  printf("Area of the circle = %.2f", area);

  return 0;
}
