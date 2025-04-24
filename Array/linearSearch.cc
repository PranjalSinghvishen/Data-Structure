#include<iostream>
using namespace std;
void input(int arr[],int size){
    cout<<"Enter the input number of Array : "<<endl;
    for(int i=0;i<=size;i++){
        cin>>arr[i];
    }
}
void output(int arr[],int size){
    for (int i=0;i<=size;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int linSearch(int arr[],int size,int num ){
    for(int i=0;i<=size;i++){
        if(arr[i]==num){
            return i;
        }
        }
        return -1;

}
int main(){
    int key;
    int arr1[10];
    input(arr1,5);
    cout<<"Enter the number to find postion:"<<endl;
    cin>>key;
    cout<<"The number "<<key<<" is at the postion : ";
    cout<<linSearch(arr1,5,key);
    return 0;
}