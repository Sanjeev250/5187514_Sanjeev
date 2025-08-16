#include <stdio.h>
#include <stdlib.h>
#include "array.h"
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int *newarr = reverse(arr,size);
    for(int i=0;i<size;i++){
        printf("%d",newarr[i]);
    }
}