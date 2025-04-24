#include<iostream>
using namespace std;
int main (){
 int rows ,col;

 cout<<"enter rows ";
 cin>>rows;   

 cout<<"enter col ";
 cin>> col;

 int* *matrix=new int*[rows];

 for(int i=0;i<rows;i++){
    matrix[i]=new int [col];
 } 
 // DATA STORE
 int x=1;

 for (int i=0;i<rows;i++){
    for (int j=0;j<col;j++){
        matrix[i][j]=x++;
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
 }

}