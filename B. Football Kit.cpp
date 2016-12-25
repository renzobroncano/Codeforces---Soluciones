#include<iostream>
#include<map>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int x[n],y[n];
		map<int,int> cx;
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];		
		}
		for(int i=0;i<n;i++){
			cx[x[i]]++;	
		}
		int ax[n],ay[n];
		for(int i=0;i<n;i++){
			ax[i] = n-1;
			ax[i] += cx[y[i]];
			ay[i] = 2*(n-1) - ax[i];
		}
		for(int i=0;i<n;i++){
			cout<<ax[i]<<" "<<ay[i]<<endl;
		}
	}
}
