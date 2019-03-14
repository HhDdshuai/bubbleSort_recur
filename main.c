#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef int elemType;

void swap(elemType *a,elemType *b){
    elemType temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
//µ›πÈ√∞≈›
void bubbleSort_recur(elemType a[],int low,int high){
    if(low == high){
        return;
    }else{
        int i;
        for(i = low;i <= high - 1;i++){
            if(a[i] > a[i + 1])
                swap(&a[i],&a[i + 1]);
        }
        bubbleSort_recur(a,low,high - 1);
    }
}
int main()
{
    elemType a[] = {12,15,2,36,25,37,96,22};
    int arr_len = sizeof(a)/sizeof(a[0]);
    bubbleSort_recur(a,0,arr_len - 1);
    for(int i = 0;i < arr_len;i++)
        printf("%d ",a[i]);
    return 0;
}
