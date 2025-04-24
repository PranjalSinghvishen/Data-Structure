#include <iostream>
using namespace std;
void input(int arr[],int size){
    cout<<"Enter the elements of Array :"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void output(int arr[],int size){
    cout<<"Array elements are: ";
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int largestNum(int arr[],int size){
    int max=arr[0];
    for(int i=0;i<=size;i++){
        if (arr[i]>max){
        max=arr[i];
     }
    }
    return max;
}

int main (){
    int arr[10];
   input (arr,6);
   output(arr,6);
   cout<<"Largest num in the Array is :"<<largestNum(arr,10);
    return 0;
}