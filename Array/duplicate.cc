#include<iostream>
using namespace std;
int duplicate(int *arr,int size){
int ans=0;
for(int i=0;i<=size;i++){
    ans=ans^arr[i];
}
return ans;

}
int main (){
    int array[5]={1,1,2,3,2};
    int n=sizeof(array)/sizeof(int);
    cout<<duplicate(array,5);
    return 0;
}