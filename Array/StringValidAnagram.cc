#include<iostream>
using namespace std;
bool Anagram(string word,string word2){
  if (word.length()!=word2.length()){
    cout<< "InValid Anagram";
    return false;
  }
  int count[26]={0};
  for(int i=0;i<word.length();i++){
    int idx=word[i]-'a';
    count[idx]++;
  }  
  for(int i=0;i<word.length();i++){
    int idx=word[i]-'a';
    if(count[idx]==0){
        cout<<"InValid Anagram";
        return false;
    }
  cout<<"VALID ANAGRAM ";
  return true;
}}
int main(){
    string str="anagram";
    string str2="nagaram";
    Anagram(str,str2);
    return 0;
}