#include<stdio.h>
#include<stdlib.h>

void main()
{
	int array[5],i;
	for(i=0;i<5;++i)
	{
		srand(time(NULL));
		array[i]=(rand()% (999-100+1)) + 100; 	//Take input in the range of 100 to 999

	}
	for(i=0;i<5;i++)
	{
		printf("%d  ",array[i]);
	}
}
