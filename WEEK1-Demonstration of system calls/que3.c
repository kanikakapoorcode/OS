//Write a program to create child process which will list all the files present in your system. Make sure that parent process waits until child has not completed its execution. (use wait(), exit()) What will happen if parent process dies before child process? Illustrate it by creating one more child of parent process.
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(){
    pid_t pid1 , pid2 ;
    pid1 = fork();
    if(pid1 < 0 ){
        exit(-1);
    }
    if(pid1 == 0){
        printf("First Child ID : %d\nParent ID : %d\n",getpid(),getppid());
        sleep(2);
        exit(0);
    }
    else{
        wait(NULL);
        pid2 = fork();
        if(pid2 < 0)exit(-1);
        if(pid2 == 0){
            printf("Second Child ID : %d\nParent id :%d\n",getpid(),getppid());
            sleep(5);
            printf("Second Child ID after termination of Parent, new Pid : %d",getpid());
            exit(0);
        }
        else{
            printf("Parent PID: %d, First Child PID: %d, Second Child PID: %d\n", getpid(), pid1, pid2);
            sleep(1);
            exit(0);
        }
    }
}

