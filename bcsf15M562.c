#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void *MySumFunction(void *arg);

int a = 0;
int sum = 0;

int main()
{
int total = 0;
int array[100];
int status;
for(int i=0;i<100;i++)
{
	array[i] = i;
}

pthread_t thread[10];

for(int j=0;j<10;j++)
{
	pthread_create(&thread[j] ,NULL ,MySumFunction, (void*) array);
	pthread_join(&thread[k], &status);
	total = total + status;
	
}

printf("%i",total);
return 0;
}

void *MySumFunction(void *arg)
{
	
	for(int i=0;i<10;i++)
	{
	   sum = sum + &arg[a];
	   a = a+1;
	}
	pthread_exit(sum);
}
