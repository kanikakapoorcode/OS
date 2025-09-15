//Write a program to open a directory and list its contents. (use opendir(), readdir(), closedir() )

#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>

int main(){
    DIR *dir ;
    struct dirent *entry ;
    dir = opendir(".");
    if(dir == NULL){
        perror("Unable to open directory.\n");
        return 1 ;
    }
    printf("Contents of the current directory.\n");
    while((entry = readdir(dir)) != NULL){
        printf("%s\n",entry->d_name);
    }
    closedir(dir);
    return 0;
}