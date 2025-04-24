#include<iostream>
using namespace std;
void findErrorNum(int arr[],int size){
    for (int i=0;i<size;i++){
        for (int j=1;j<size;j++){
            if (arr[i]==arr[j]){
                cout<<arr[i]<<j<<" ";
                break;
            }
        }
    }
}
int main (){
    int input []={1,2,3,2,4};
    int size=5;//sizeof(input);
    findErrorNum(input,size);

}