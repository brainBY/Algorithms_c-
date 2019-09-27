//1초당 1억번연산
#include <stdio.h>

int array[3];


void quickSort(int *data,int start, int end){
    if(start>=end){
        return;
    }
    
    int key=start;
    int i=start+1;
    int j=end;
    int temp;

    while(i<=j){
        while(data[i]<=data[key]){
            i++;
        }\
        while(data[j]>=data[key]&&j>start){
            j--;
        }
        
        if(i>j){
            temp=data[key];
            data[key]=data[j];
            data[j]=temp;
        }
        else{
            temp=data[j];
            data[j]=data[i];
            data[i]=temp;
        }
    }
    quickSort(data, start, j-1);
    quickSort(data,j+1,end);
}

int main(void){
    for(int i=0;i<3;i++){
        scanf("%d",&array[i]);
    }
    quickSort(array,0,2);
    for(int i=0;i<3;i++){
        printf("%d ",array[i]);
    }
    return 0;
}