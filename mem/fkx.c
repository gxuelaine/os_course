#include<stdio.h>
int pid;
int main(void)
{
    pid = fork();
    if (pid == 0){
       printf("c: pid = %d \t at %p\n",pid, &pid);
    }
    else {
       wait(0);
       printf("f: pid = %d \t at %p\n",pid, &pid);
    }
}
    
    
