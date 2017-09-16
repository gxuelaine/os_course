#include <pthread.h> 
int x = 0;

void *runner1()
{
    int y,z;
    x = 1;
    pthread_yield();
    y = 0;
    if (x >= 1) y++;
    z = y;
    printf("x=%d,y=%d,z=%d\n",x,y,z);
}

void *runner2()
{
    int t,u;
    pthread_yield();
    x = 0;
    t = 0;
    if (x <= 1) t+=2;
    u = t; 
    printf("x=%d,t=%d,u=%d\n",x,t,u);
}
int main()
{
	pthread_t tid1, tid2;
	pthread_create(&tid1,NULL,runner1,NULL);
	pthread_create(&tid2,NULL,runner2,NULL);
        pthread_join(tid1,NULL);
        pthread_join(tid2,NULL);
        printf("At last, x = %d\n", x);
}
