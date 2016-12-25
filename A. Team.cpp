#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int x,y,z;
		int ct = 0;
		for(int i=0;i<n;i++){
			cin>>x>>y>>z;
			if((x+y+z)>1){
				ct++;
			}
		}
		cout<<ct<<endl;
	}
}
