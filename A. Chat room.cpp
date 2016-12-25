#include<iostream>
using namespace std;
int main(){
   string s;
   while(cin>>s){
      bool flag[]={false,false,false,false,false};
      int j;
      for(int i=0;i<s.size();i++){
           if(s[i]=='h'){
              j=i;
              flag[0]=true;
              i=s.size();
           } 
      }
      j++;
      if(flag[0]==true){
        for(int i=j;i<s.size();i++){
           if(s[i]=='e'){
              j=i;
              flag[1]=true;
              i=s.size();
           } 
        }
      }
      j++;
      if(flag[1]==true){
        for(int i=j;i<s.size();i++){
           if(s[i]=='l'){
              j=i;
              flag[2]=true;
              i=s.size();
           } 
        }
      }
      j++;
      if(flag[2]==true){
        for(int i=j;i<s.size();i++){
           if(s[i]=='l'){
              j=i;
              flag[3]=true;
              i=s.size();
           } 
        }
      }
      j++;
      if(flag[3]==true){
        for(int i=j;i<s.size();i++){
           if(s[i]=='o'){
              j=i;           
              flag[4]=true;
              i=s.size();
           } 
        }
      }
      bool e = true;
      for(int i=0;i<5;i++)if(flag[i]==false){e=false;i=5;}
      cout<<(e?"YES":"NO")<<endl;
   }
}
