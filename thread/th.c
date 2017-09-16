#include <pthread.h> 
int value = 5;
void *thr_fn()
{
   value +=15;
   printf("New thread:\n");
}
int main()
{
	pthread_t tid;
	pthread_create(&tid,NULL,thr_fn,NULL);
        pthread_join(tid,NULL);
	printf("main thread: %d\n",value);
}
