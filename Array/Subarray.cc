#include<iostream>
using namespace std;
void subarray (int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
          //  cout<<"("<<start<<","<<end<<")";//(0,0)(0,1)...
          for(int i=start;i<=end;i++){
            cout<<arr[i];
          }
          cout<<",";
        }
        cout<<endl;
    }
}

int main(){
int array[5]={1,2,3,4,5};
int n=5;
subarray(array,n);
    return 0;
}