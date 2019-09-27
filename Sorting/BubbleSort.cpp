#include <stdio.h>

int main(void){
    int i,j,temp;
    int array[10]={1,10,2,8,7,6,5,4,3,9};
    for (i=0;i<10;i++){
        for(j=0;j<10-i;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    for(i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    return 0;
}