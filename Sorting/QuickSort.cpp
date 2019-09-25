#include <stdio.h>

int number =10;
int data[10]={1,10,5,8,7,6,4,3,2,9};

void quickSort(int *data, int start, int end){
    if (start >= end){// 원소가 1개인 경우
        return;
    }

    int key= start;//키는 첫번째 원소
    int i = start + 1;//왼쪽 출발지점
    int j = end;//오른쪽 출발지점
    int temp;

    while(i<=j){ //엇갈릴 때까지 반복
        while(data[i]<= data[key]){ // 키 값보다 큰 값까지 반복
            i++;
        }
        while(data[j]>= data[key] && j > start){ // 키 값보다 작은 값까지 반복
            j--;
        }
        if (i > j){ // 현재 엇갈린 상태면 키 값과 교체?
            temp = data[j];
            data[j]=data[key];
            data[key]=temp;
        } else { // 엇갈린 상태가 아니면 서로 교체
            temp=data[j];
            data[j]=data[i];
            data[i]=temp;
        }
    }
    
    quickSort(data, start, j-1);
    quickSort(data, j+1, end);
}

int main(){
    quickSort(data,0,number-1);
    for (int i=0;i<10;i++){
        printf("%d ",data[i]);
    }
}