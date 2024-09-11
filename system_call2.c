#include<stdio.h>
#include<stdlib.h>

void main()
{
	printf("hello..\n");
	printf("system_call.c   pid=%d....ppid=%d\n",getpid(),getppid());
	system(".system_call.c");
	printf("End\n");
}

