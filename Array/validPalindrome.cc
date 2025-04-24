#include<iostream>
using namespace std;
bool palindrome(string word,int size){
    int start=0,end=size-1;
    while(start<end){
        if(word[start++]!=word[end--]){
         cout<<"Not valid palindrome";
         return false;
        }
    }
    cout<<"valid palindrome :-)";
    return true;
}
int main(){
    string word="racecar";
    palindrome(word,word.length());  // strlen(..)-is used for know the lenght of string
    return 0;
}