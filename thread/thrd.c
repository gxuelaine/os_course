#include <pthread.h> 
void *thr_fn()
{
   printf("New thread:");
}

int main()
{
	pthread_t tid;
	pthread_create(&tid,NULL,thr_fn,NULL);
        pthread_join(tid,NULL);
	printf("main thread: ");
}
