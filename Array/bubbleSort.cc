#include<iostream>
using namespace std;
void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}
void bubbleSort(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++)
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
   printArr(arr,size);
}
int main (){
    int Array[5]={4,3,1,5,2};
    int n=sizeof(Array)/sizeof(int);
    bubbleSort(Array,n);

    return 0;
}