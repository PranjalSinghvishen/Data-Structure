#include<iostream>
using namespace std;
void product(int *array,int n){
    int maxProduct=INT_MIN;
    int current_product=1;
    for(int i=0;i<n;i++){
        current_product*=array[i];
        maxProduct=max(current_product,maxProduct);
        if (current_product<0){
            current_product=1;
        }
        }
        cout<<"max product is : "<<maxProduct;
}
int main(){
    int arr[]={2,3,-2,4};
     int n=sizeof(arr)/sizeof(int);
     product(arr,n);
     return 0;
}