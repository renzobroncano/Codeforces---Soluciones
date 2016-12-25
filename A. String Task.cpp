 #include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
   string c;
   while(cin>>c){
      string cr="",b="";
      char v[]={'a','e','i','o','u','A','E','I','O','U','y','Y'};
      int l= c.size();
      for(int i=0;i<l;i++){
          bool flag = false;
          for(int j=0;j<12;j++){
             if(c[i]==v[j]){
                flag=true;j=12;
             }
          }
          if(!flag) b+=c[i];
      }
      if(b.size()!=0){
          for(int i=0;i<b.size();i++){
              cr+=".";
              if(b[i]>='A'&&b[i]<='Z'){
                  cr+=(b[i]+32);
              }else{
              cr+=b[i];
              }
          }
      }
      cout<<cr<<endl;
   }
   
   
   
}
