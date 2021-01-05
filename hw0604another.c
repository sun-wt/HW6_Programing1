#include"hw0604.h"
void project(double *x,double *y,double *z,int32_t a,int32_t b,int32_t c,int32_t d)
{
	double X,Y,Z;
	double t=-(a**x+b**y+c**z+d)/(a*a+b*b+c*c);

	X=*x+a*t;
	Y=*y+b*t;
	Z=*z+c*t;
		
	printf("The projection is(%g,%g,%g)\n",X,Y,Z);
}