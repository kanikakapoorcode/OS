/*. Write a program to read a file and store your details in that file. Your program should also create
one more file and store your friends details in that file. Once both files are created, print lines
which are matching in both files.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define MAX 100
int main(){
    FILE *myfile ;
    FILE *friendfile;
    char myLine[MAX], friendline[MAX];
    myfile = fopen("one.txt","w");
    if(myfile == NULL){
        perror("Error creating one.txt");
        return 1 ;
    }

    fprintf(myfile, "Name: Kanika\n");
    fprintf(myfile, "Age: 20\n");
    fprintf(myfile, "City: Haridwar\n");
    fprintf(myfile, "Hobby: Dancing\n");
    fclose(myfile);

    friendfile = fopen("two.txt","w");
    if(friendfile == NULL){
        perror("Error creating two.txt");
        return 1 ;
    }

    fprintf(friendfile, "Name: Aman\n");
    fprintf(friendfile, "Age: 23\n");
    fprintf(friendfile, "City: Dehradun\n");
    fprintf(friendfile, "Hobby: Reading\n");
    fclose(friendfile);

    myfile = fopen("one.txt", "r");
    friendfile = fopen("two.txt", "r");

    if (myfile == NULL || friendfile == NULL) {
        perror("Error opening files for reading");
        return 1;
    }
    printf("Matching lines in both files:\n");
    while (fgets(myLine, MAX, myfile) != NULL &&
           fgets(friendline, MAX, friendfile) != NULL) {
        myLine[strcspn(myLine, "\n")] = '\0';
        friendline[strcspn(friendline, "\n")] = '\0';

        if (strcmp(myLine, friendline) == 0) {
            printf("%s\n", myLine);
        }
    }
    fclose(myfile);
    fclose(friendfile);
}