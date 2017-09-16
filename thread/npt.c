#include <pthread.h> 
void *runner()
{
    while(1);
}

int main()
{
	pthread_t tid;
	printf("Multi thread,PID:%d\n", getpid());
	pthread_create(&tid,NULL,runner,NULL);
        pthread_join(tid,NULL);
}
