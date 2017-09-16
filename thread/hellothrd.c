#include <pthread.h> 
void *runner()
{
   printf("hello world\n");
}

int main()
{
	pthread_t tid;
	pthread_create(&tid,NULL,runner,NULL);
        pthread_join(tid,NULL);
	printf("HELLO WORLD\n");
}
