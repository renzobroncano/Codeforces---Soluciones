#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		bool v[12][12];
		for(int i=0;i<12;i++){
			for(int j=0;j<12;j++){
				v[i][j]=true;
			}
		}
		for(int i=0;i<s.size();i++){
				if(s[i]!='X')v[0][i]=false;
		}
		for(int i=0;i<s.size();i=i+6){
			for(int j=0;j<6;j++){
				if(s[i+j]!='X')v[1][j]=false;
			}
		}
		for(int i=0;i<s.size();i=i+4){
			for(int j=0;j<4;j++){
				if(s[i+j]!='X')v[2][j]=false;
			}
		}
		for(int i=0;i<s.size();i=i+3){
			for(int j=0;j<3;j++){
				if(s[i+j]!='X')v[3][j]=false;
			}
		}
		for(int i=0;i<s.size();i=i+2){
			for(int j=0;j<2;j++){
				if(s[i+j]!='X')v[5][j]=false;
			}
		}
		bool flag = true;
		for(int i=0;i<s.size();i++){
			if(s[i]!='X')flag = false;
		}
		if(!flag)v[11][0]=false;
		
		vector<int> vx,vy;
		for(int i=0;i<12;i++){
			if(i==0||i==1||i==2||i==3||i==5||i==11){
				for(int j=0;j<12/(i+1);j++){
					if(v[i][j]){
						vx.push_back((i+1));
						vy.push_back((12/(i+1)));
						break;
					}
				
				}
				
			}
		}
		if(vx.size()==0){
			cout<<0<<endl;
		}else{
			cout<<vx.size()<<" ";
			for(int i=0;i<vx.size();i++){
			cout<<vx[i]<<"x"<<vy[i];
			if(i!=vx.size()-1)cout<<" ";
			}cout<<endl;
		}
		
	}
}
