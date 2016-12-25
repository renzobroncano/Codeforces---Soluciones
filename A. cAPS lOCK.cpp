#include<iostream>
#include <ctype.h>
using namespace std;
int main(){
    string line;
    while(cin>>line){
       string r ="";
       bool flag = false;
       for(int i=0;i<line.size();i++){
           if(i==0)r+=tolower(line[i]);
           else r+=toupper(line[i]);
       }
       if(r==line){
           flag = true;
           r="";
           for(int i=0;i<line.size();i++){
               if(i==0)r+=toupper(line[i]);
               else r+=tolower(line[i]);
           }
           line=r;
       }
       if(flag==false){
           r=""; 
           for(int i=0;i<line.size();i++){
                   r+=toupper(line[i]);
           }
         if(r==line){
           flag=true;
           r="";
           for(int i=0;i<line.size();i++){
                   r+=tolower(line[i]);
           }
           line=r;
         }
       }
       if(flag==false)r=line;
       cout<<r<<endl;
    }
}
