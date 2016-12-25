 #include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,k;
    while(cin>>n>>k){
       int v[n],c,ct=0;
       for(int i=0;i<n;i++){
          cin>>v[i];
          if(i==k-1)c=v[i];
       }
       for(int i=0;i<n;i++){
          if(v[i]!=0&&v[i]>=c)ct++;
       }
       cout<<ct<<endl;
    }
}
