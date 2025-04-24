#include<iostream>
using namespace std;
void print(int arr[],int size){       // to print arr
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void selectionSort(int *arr,int size){    //selection sort
    for(int i=0;i<=size-1;i++){          
        int minIndx=i;                  
        for(int j=i+1;j<size;j++){       //     for minimum index 
            if (arr[j]<arr[minIndx]){   
                minIndx=j;
            }
        }
        swap(arr[i],arr[minIndx]);           // swap minium element at right place ;
    }
    print(arr,size);                            // function call
}
int main (){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
    return 0;
}ˀˀ