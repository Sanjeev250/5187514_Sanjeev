#include "demo1.h"
int find(int arr[],int size){
    int small = arr[0];
    for(int i=1;i<size;i++){
        if(small>arr[i]){
            small = arr[i];
        }
    }
    return small;
}