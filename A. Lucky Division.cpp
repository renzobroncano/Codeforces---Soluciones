#include<iostream>
#include<vector>
#include<sstream>
#include<cmath>
#include<algorithm>
using namespace std;
bool num_suerte(int n){
        stringstream s1;
        string c;
        s1<<n;
        c=s1.str();
        bool flag =true; 
        for(int i=0;i<c.size();i++){
             if(c[i]=='4'||c[i]=='7'){}
             else{ flag = false;i=c.size();}  
        }
        return flag;
}
bool divisible_num_suerte(int n){
     bool b = false;
        vector<int> v;
        for(int i=1;i<=sqrt(n);i++){
              if(n%i==0)v.push_back(i);
        }
        vector<int>aux = v;
        for(int i=0;i<aux.size();i++){
                v.push_back(n/aux[i]);
        }                     
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
           if(num_suerte(v[i])){b=true;i=v.size();}
        }
        return b;
}
int main(){
   int n;
   while(cin>>n){
        bool b=false;
        b = num_suerte(n);
        if(b==false) b=divisible_num_suerte(n);
        cout<<(b?"YES":"NO")<<endl;
   }
}
