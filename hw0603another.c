#include"hw0603.h"
#define PI 3.141593
void rotate(double *x,double *y,double theta)
{
	double a=pow(*x,2)+pow(*y,2);
	double r=sqrt(a);
	double InitialAngle=atan2(*y,*x)*180/PI;
	double AnswerAngle=InitialAngle-theta;
	if(AnswerAngle<0)
		AnswerAngle+=360;
	*x=cos(AnswerAngle*PI/180)*r;
	*y=sin(AnswerAngle*PI/180)*r;
}