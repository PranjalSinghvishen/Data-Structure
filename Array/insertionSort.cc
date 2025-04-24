#include<iostream>
using namespace std;
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void insertinoSort(int *arr,int size){
    for(int i=1;i<size;i++){                         // unsorted array loop assuming arr[0] is sorted
        int currentValue=arr[i];                    //storing the value og arr[i] =4,1,3,2;
        int previousValue=i-1;                      
        while(previousValue>=0 && arr[previousValue]<currentValue){       // comparing with sorted array
            swap(arr[previousValue],arr[previousValue+1]);                   // swaping at right position
            previousValue--;
        }
        arr[previousValue + 1]=currentValue;
    }
    print(arr,size);
}
int main (){
    int arr[5]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    insertinoSort(arr,n);
    //print(arr,n);
    return 0;
}