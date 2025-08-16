#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "demo3.h"

int main(){
    char name[10];
    fgets(name,10,stdin);
    name[strcspn(name,"\n")]='\0';
    char *name1=reverse(name);
    printf("%s",name1);
    if(strcmp(name1,name)!=0){
        printf("all good");
    } else {
        printf("not same\n");
    }
}