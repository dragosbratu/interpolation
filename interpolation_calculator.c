#include<stdio.h>
#include<conio.h>

void main(void)
{
 double x0;
 double y0;
 double x1;
 double y1;
 double xp;
 double yp;

 printf("Please enter (x0,y0) and (x1,y1):\n");
 scanf("%lf%lf%lf%lf", &x0, &y0, &x1, &y1);
 printf("What is the interpolation point?: ");
 scanf("%lf", &xp);

 // formula
 yp = y0 + ((y1-y0)/(x1-x0)) * (xp - x0);
 
 printf("The interpolated value at %0.3lf is %0.4lf", xp, yp);
 
 // wait to close
 getch();
}
