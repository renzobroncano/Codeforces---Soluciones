#include<iostream>
#include<map>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int x;
		map<int,int> m;
		for(int i=0;i<n;i++){
			 cin>>x;
			 m[x]++;
		}
		int ct = 0;
		for (std::map<int,int>::reverse_iterator rit = m.rbegin(); rit != m.rend(); ++rit){
			if(rit->first==4){
				ct+=m[rit->first];
			}else if(rit->first==3){
				int r = min(m[rit->first],m[4-rit->first]);
				ct+=r;
				m[rit->first]-=r;
				m[4-rit->first]-=r;
				ct+=m[rit->first];
			}else if(rit->first==2){
				int q = rit->first*m[rit->first]/4;
				ct+=q;
				m[rit->first]-=(q*2);
				if(m[rit->first]!=0){
					if(m[1]>0){
						if(m[1]>=2){
							m[1]-=2;
						}else{
							m[1]--;
						}
					}
					ct += m[rit->first];
				}
			}else if(rit->first == 1){
				int r = m[rit->first]/4;
				ct+=r;
				if(m[rit->first]%4 !=0){
					ct++;
				}
			}
		}
		cout<<ct<<endl;
    
	}
}
