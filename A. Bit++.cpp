#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		string s;
		int ct =0;
		for(int i=0;i<n;i++){
			cin>>s;
			if(s[0]=='X'){
				if(s[1]=='+'&&s[2]=='+'){
					ct++;
				}else{
					ct--;
			}
			}else if(s[2]=='X'){
				if(s[0]=='+'&&s[1]=='+'){
					ct++;
				}else{
					ct--;
				}
			}
		}
		cout<<ct<<endl;
	}
}
