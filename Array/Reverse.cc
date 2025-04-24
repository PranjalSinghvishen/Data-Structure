#include<iostream>
using namespace std;
void printArr(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);

    int start=0,end=n-1;

    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    
    printArr(arr,n);
    return 0;
}