//1초면 1억번가능
#include <stdio.h>

int array[1001];


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
        }
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
    int number;
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        scanf("%d",&array[i]);
    }
    quickSort(array,0,number-1);
    for(int i=0;i<number;i++){
        printf("%d\n",array[i]);
    }
    return 0;
}