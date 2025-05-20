#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
    if (fork() && fork()){
        fork();
    }
    /*
    p
    c p
    c c p
    c c c p
    */
    printf("Hello\n");
    return 0;
}