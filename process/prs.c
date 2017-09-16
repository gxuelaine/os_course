#include<stdio.h>
int main()
{  
    int pid;
    pid = fork();
    printf("Hello!%d,%d\n",getpid(),pid);
    if (pid ==0)
      printf("c");
    else printf("f");
    return 0;
}
