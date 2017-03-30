#include "Ipc_shm.h"

void read_heart()
{
	sleep(5);
	int pid=0;
	shm_init(&pid);
	printf("pid %d\n",shm_read(&pid));
	kill(shm_read(&pid),SIGQUIT);
}

void send_heart()
{
	while(1){
		sleep(1);
		printf("son\n");
	}
}


void main()
{
	pid_t pid;
	pid=fork();
	if(pid<0)
		perror("fork");
	else if(pid>0){
		printf("..\n");
		read_heart();
	}
	else{
		printf(",,\n");
		int pid=0;
		shm_init(&pid);
		shm_write(&pid);
		send_heart();
	}
}
