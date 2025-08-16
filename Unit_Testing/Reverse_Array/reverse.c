#include "array.h"
#include <stdlib.h>
int *reverse(int *a,int n){
    int temp;
    int size =n-1;
    for(int i=0;i<n/2;i++){
        temp = a[i];
        a[i] = a[size];
        a[size] = temp;
        --size;
    }
    return a;
}