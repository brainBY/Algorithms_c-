#include <stdio.h>

int main(){
    int i,j,temp;
    int array[10]={1,10,5,8,7,6,4,3,2,9};
    for(i=0;i<9;i++){
        j=i;
        //현재 j지만 j+1를 옮기는걸 시작으로 함 그래서 i<9인거고
        while(array[j]>array[j+1]){
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            j--;
        }
    }

    for(i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    return 0;
}