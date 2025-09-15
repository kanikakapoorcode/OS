//Write a program to print process Id's of parent and child process i.e. parent should print its own and its child process id while child process should print its own and its parent process id. (use getpid(), getppid())

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
    pid_t pid = fork();
    if(pid < 0){
        printf("Fork Failed!");
        return -1;
    }
    else if(pid == 0){
        printf("Child Process : %d\n",getpid());
        printf("Parent Process : %d\n",getppid());
    }
    else{
        printf("Parent process : %d\n",getpid());
        printf("Child Process : %d\n",pid);
    }
    return 0 ;
}