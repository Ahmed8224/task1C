#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char userName[30],password[30];
    int count=0;
    do{
        printf ("enter userName: ");
        scanf("%s",userName);
        printf("enter password: ");
        scanf("%s",password);
        if(strcmp(userName,"Ahmed") == 0 && strcmp(password,"01200")){
            break;
        }
        printf("userName or password incorrect\n");
        count++;
    }while(count <5);
    if(count >=4){
        printf("try in 3 minutes");
    }else{
        printf("userName and password correct");
    }
}
