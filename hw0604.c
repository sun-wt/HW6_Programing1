#include<stdio.h>
#include<stdint.h>
#include"hw0604.h"
int main()
{
	double x,y,z;
	int32_t a,b,c,d;
	printf("Please enter the plane: ");
	while(scanf("%d %d %d %d",&a,&b,&c,&d)==4)
	{
		printf("%dx %+dy %+dz %+d\n",a,d,c,d);
		printf("Please enter the point: ");
		while(scanf("%lf %lf %lf",&x,&y,&z)==3)
		{
			project(&x,&y,&z,a,b,c,d);
			return 0;
		}
	}
	return 0;
}