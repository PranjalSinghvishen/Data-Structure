#include<iostream>
using namespace std;
void spairal (int student[][4],int n,int m ){
     int srow=0 ,scol=0;
     int erow =n-1, ecol=m-1;
     while(srow <= erow && scol <= ecol){
   // Top
    for(int i=scol;i<=ecol;i++){
        cout<<student[srow][i]<<" ";
       }
    //RighT
    for(int i=srow+1;i<=erow;i++){
        cout<<student[i][ecol]<<" ";
    }
    //Bottom
    for(int i=ecol-1;i>=scol;i--){
        if(srow==erow){                        // lecture once again for this condection
            break;   
        }
        cout<<student[ecol][i]<<" ";
    }
    //left
    for(int i=erow-1;i>=srow+1;i--){
        if(scol==ecol){                       // lecture once again for this condection
            break;
        }
        cout<<student[i][scol]<<" ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;
     }
}
int main(){
    int student [4][4]={{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    spairal(student,4,4);
}
