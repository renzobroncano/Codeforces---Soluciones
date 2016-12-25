 #include<iostream>
#include <ctype.h>
using namespace std;
int main(){
     string c1;
     while(cin>>c1){
          string c2;
          cin>>c2;
          int flag=0;
          for(int i=0;i<c1.size();i++){
              if(int(tolower(c1[i]))<int(tolower(c2[i])))flag =-1,i=c1.size();
              else if(int(tolower(c1[i]))>int(tolower(c2[i])))flag =1,i=c1.size();
          }
          cout<<flag<<endl;
     }
}
