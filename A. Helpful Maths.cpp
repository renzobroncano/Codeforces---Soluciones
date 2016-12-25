#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main (){
  string str;
  while(cin>>str){
        vector<int>v;
        for(int i=0;i<str.size();i++){
            if(str[i]!='+')v.push_back(str[i]-'0');
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i];
            if(i!=v.size()-1)cout<<"+";
        }
        cout<<endl;
  }
}
