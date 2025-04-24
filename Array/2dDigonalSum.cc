#include<iostream>
using namespace std;
void digonalSum(int arr[][4],int n){
    int sum=0;                   
 /*   for(int i=0;i<n;i++){          //time complixety =O(n^2)
        for(int j=0;j<n;j++){
         if (i==j){
           sum += arr[i][j];
        }
        else if(j==n-i-1){
            sum += arr[i][j];
        }
        }
    }
    cout<<sum<<endl;*/

    for(int i=0;i<n;i++){                   //Time Complixety = O(n)
        sum+= arr[i][i];
        if(i!=n-i-1){
            sum+=arr[i][n-i-1];
        }
    }
    cout<<sum<<endl; 
}
int main (){
    int arr1[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                  {13,14,15,16}};
    digonalSum(arr1,4);
    return 0;
}