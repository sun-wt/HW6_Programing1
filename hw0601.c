#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
int main()
{
	uint64_t nums; 
	int32_t position=1;
	int32_t new=-1;
	printf("Please input an integer: ");
	scanf("%ld",&nums);
	printf("The integer: %ld\n",nums);
	uint8_t *a_ptr=NULL;
	a_ptr=(uint8_t*)&nums;
	for(int i=0;i<8;i++)
	{
		printf("(%d) 0x%02X  ",i+1,*(a_ptr+i));
	}
	printf("\n");
	while(position!=0)
	{
		do
		{
			printf("Please enter the position (1-8, 0 : End): ");
			scanf("%d",&position);
			if(position>8||position<0)
				printf("input again!\n");
		}while(position>8||position<0);
		if(position==0)
			exit(0);
		do
		{
			printf("Please enter the new value(0-255): ");
			scanf("%d",&new);
			if(new<0||new>255)
				printf("input again!\n");
		}while(new<0||new>255);
		
		
		*(a_ptr+position-1)=(uint8_t )new;
		
		printf("The integer: %ld\n",nums);
		for(int i=0;i<8;i++)
		{
			printf("(%d) 0x%02X  ",i+1,*(a_ptr+i));
		}
		printf("\n");

	}
	
	return 0;
}

