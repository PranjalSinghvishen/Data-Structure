#include <iostream>
using namespace std;
void maxsubarray(int *arr,int n){
    int maxSum=INT_MIN;     // (-infnite)
    for (int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int current_sum=0;
            for(int i=start;i<=end;i++){
                current_sum+=arr[i];

            }
            cout<<current_sum<<",";
            maxSum=max(maxSum,current_sum);
        }
        cout<<endl;
    }
    cout<<"1. maximum subarray sum : "<<maxSum;
}

void maxsubarray2(int *arr,int n){                          // optimized
    int maxSum=INT_MIN;     // (-infnite)
    for (int start=0;start<n;start++){
        int current_sum=0;
        for(int end=start;end<n;end++){
          current_sum+=arr[end];
           
            maxSum=max(maxSum,current_sum);
        }
       
    }
    cout<<endl;
    cout<<"2.maximum subarray sum : "<<maxSum;
}

                                                            //kadane's alhorithm (IMPORTANT) 

void maxsubarray3(int *arr,int n){                         
    int maxSum=INT_MIN;     // (-infnite)
    int current_sum=0;
    for (int start=0;start<n;start++){
        current_sum+=arr[start];
        maxSum=max(maxSum,current_sum);
        if(current_sum<0){
            current_sum=0;
        }
        }
        cout<<endl;
        cout<<"3 .maximum subarray sum : "<<maxSum;
    }
    
int main(){
    int array[]={2,-3,6,-5,4,2};
    int n=sizeof(array)/sizeof(int);
    maxsubarray(array,n);
    maxsubarray2(array,n);
    maxsubarray3(array,n);
    return 0;
}