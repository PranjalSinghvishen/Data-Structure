#include<iostream>
using namespace std;
//question number 1.
// void numberKey(int arr[][3],int n,int m,int key){
//     int num =0;
//     for(int i=0;i<n;i++){
//         for (int j=0;j<m;j++){
//             if (arr[i][j]==key){
//                 num+=1;
//             }
//         }
//     }
//     cout<<num<<" :-) ";
// }
// int main(){

//     int arr[][3]={{4,7,8},
//                   {8,8,7}};
//     int key;
//     cout<<"enter the Key  : "<<endl;
//     cin>>key;
//     numberKey(arr,2,3,key);
//     return 0;
// }


//question number 2

// void Matsum(int arr[][3],int n,int m){
//     int sum=0;
//     for(int i=1;i<n-1;i++){
//         for (int j=0;j<m;j++){
//             sum+=arr[i][j];
//         }
//     }
//     cout<<sum<<" :-) ";
// }
// int main(){

//     int arr[][3]={{1,4,9},
//                   {11,4,3},
//                   {2,2,3}};
//     Matsum(arr,3,3);
//     return 0;
// }


void transpose(int matrix[][3],int n,int m){
    int trans[][2]={{0}};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[i][j]=matrix[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<trans[i][j]<<"  ";
        }
        cout<<endl;
    }
}
int main(){
        int arr[][3]={{1,4,9},
                  {11,4,3}};
    transpose(arr,2,3);
    return 0;
}