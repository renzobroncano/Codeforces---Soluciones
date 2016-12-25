 #include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       string c,b="";
       cin>>c;
       if(c.size()>10){
          b+=c[0];
          stringstream s1;
          s1<<((int)c.size()-2);
          b+=s1.str();
          b+=c[c.size()-1];
       }else{
          b=c;
       }
       cout<<b<<endl;
    }
}
