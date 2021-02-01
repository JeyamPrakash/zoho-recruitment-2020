#include<stdio.h>
int main()
{
	int number;
	scanf("%d",&number);
	int range = number;
	int spaces = number * 2 ;
	int i,count_num=0,val=1,value_range=1;
	while(range_num>0)
	{
		for(i=0;i<spaces;i++)
		{
			printf("  ");
		}
		spaces = spaces - 2 ;
		if(count_num == 0)
		{
			for(i=value_range;i<(number+value_range);i++)
			{
				printf("%d ",i);
				val += 1 ;
			}
			count_num = 1 ;
			value_range = val-1;
		}
		else
		{
			for(i=(value_range+number);i>(value_range);i--)
			{
				printf("%d ",i);
			}
			val = val+ number;
			value_range = val ;
			count_num = 0;
			
		}
		printf("\n");
		range_num = range_num - 1 ;

	}


}
