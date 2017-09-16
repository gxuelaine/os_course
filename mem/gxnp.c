#include<stdio.h>
int x = 5;
int main(void)
{
    while(1){
       printf("process %d: %p\n",getpid(), &x);
       sleep(1);
    }

    return 0;
}
