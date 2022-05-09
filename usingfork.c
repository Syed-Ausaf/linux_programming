#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
	pid_t childpid ;
	printf("main process id is %d \n",(int)getpid());
	
	childpid =fork();
	if(childpid != 0) {
	printf("parent pid %d \n",(int)getpid());
	printf("Child pid is %d\n",(int)childpid);
	}
	else
	printf("Childpid is %d",(int)getpid());
	return 0;
}
