#include<stdio.h>
int main(void)
{
    int pid;
    pid = fork();
    if (pid == 0){
       printf("c: pid = %d \t at %p\n",pid, &pid);
    }
    else {
       wait(0);
       printf("f: pid = %d \t at %p\n",pid, &pid);
    }
}
    
    
