#include"header.h"
int main()
{
char *p; 
int id;
	id=shmget(5,15,IPC_CREAT|0644);
	if(id<0)
	{
		perror("shmget");
		return;
	}
printf("id=%d\n",id);
p=shmat(id,0,0);
while(1)
{
printf("Enter the data..\n");
sleep(10);
scanf("%s",p);
}
return 0;
}
