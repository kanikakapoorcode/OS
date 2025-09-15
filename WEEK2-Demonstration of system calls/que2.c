//Write a program to show working of execlp() system call by executing ls command.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
    printf("Before executing ls command\n");
    execlp("ls", "ls", "-l", (char *)NULL);
    perror("execlp failed");
    return 1;
}