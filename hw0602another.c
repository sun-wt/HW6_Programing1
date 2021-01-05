#include"hw0602.h"
void run()
{
	int32_t ans[1000],temp[1000];
	int32_t times=0;
	int32_t undo=0;
	int32_t redo=0;
	int32_t last;
	while(1)
	{
		printf("input: ");
		while(scanf("%d",&ans[times])!=1)
		{
			printf("input again!\n");
			break;
		}
		if(ans[times]==0)
		break;
		else if(ans[times]==-1)
		{
			temp[undo]=ans[times-1];
			times-=1;
			undo++;
			last=-1;
		}
		else if(ans[times]==-2)
		{
			if(undo>redo && last==-1)
			{
				ans[times]=temp[redo];
				times++;
				redo++;
				last=0;
			}
		}
		else
		{
			times++;
			last=0;
		}
		
	}	
	printf("Result:");
	for(int i=0;i<times;i++)
	{
		if(times>9) i=times-10;
		printf(" %d",ans[i]);
	}
	printf("\n");
}
