#include<stdio.h>
#include<math.h>
#include"hw0603.h"

int main()
{
	double x,y,theta;
	do
	{
		printf("Please enter a point:");
		scanf("%lf %lf",&x,&y);
		if(x==0&&y==0)
		printf("input again!\n");
	}while(x==0&&y==0);
	printf("Please enter theta (0-360):");
	scanf("%lf",&theta);
	while(theta<0)
	{
		theta+=360;
	}
	while(theta>360)
	{
		theta-=360;
	}
	rotate(&x,&y,theta);
	printf("%lf %lf\n",x,y);
	return 0;
}