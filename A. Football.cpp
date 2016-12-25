#include<iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		
		bool flag = true;
		if(s.size()<7){
			cout<<"NO"<<endl;
		}else{
			int ct = 0;
			char c ;
			bool flag = false;
			for(int i=0;i<s.size()&!flag;i++){
				if(i==0){
					c = s[i]; 
					ct = 1;
				}else{
					if(s[i]==c){
						ct++;
						if(ct>=7)flag = true;
					}else{
						c = s[i];
						ct  = 1;
					}	
				}
			}
			cout<<(flag?"YES":"NO")<<endl;
		}
	}
}
