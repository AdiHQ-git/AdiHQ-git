#include<stdio.h>
#define PI 3.14
int main()
 {
    int r;
   float cir,area;
printf("input the radius of the circle\n");
scanf("%d",&r);
cir=2*PI*r;
area=PI*r*r;
printf("the circumference of the circle is %f\n",cir);
printf("the area of the circle is %f\n",area);
  return 0;
}