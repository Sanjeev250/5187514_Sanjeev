#include <stdio.h>
#include "demo2.h"

int main(){
    int year;
    scanf("%d",&year);
    if(Leapyear(year)==1){
        printf("%d is leapyear",year);
    }
    else{
        printf("%d is not a leapyear",year);
    }
}