#include<stdio.h>
#include<stdlib.h>

void main()
{
	int array[5],i;
	for(i=0;i<5;i++)
	{
		array[i]=rand()%100;    // result in b/w= 0 - 99 
	}
	for(i=0;i<5;i++)
        {
	
                printf("%d\n",array[i]);
        }
}

/*rand%100+1
 *
 *0 99
 +1 +1
 1 to 10 */
