#include<stdio.h>
#include<stdlib.h>

void main()
{
	int array[5],i;
	for(i=0;i<5;i++)
	{
		array[i]=rand();    ///range: 0 to RAND_MAX [2147483647
	}
	for(i=0;i<5;i++)
        {
	
                printf("%d\n",array[i]);
        }
}
