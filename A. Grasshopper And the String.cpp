#include<iostream>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		int i;
		int jm = 0;
		int pi=0,pf=0;
		int ct =1;
		for(i=0;i<s.size();i++){
			if(s[i]=='A' || s[i]=='E' ||s[i]=='I'||s[i]=='O'||s[i]=='U' ||s[i]=='Y' ){
				ct++;
				if(ct==2){
					pf=(i+1);
					int aux=pf-pi;
					if(jm<aux)jm = aux;
					ct=1;
					pi = pf;
				}
			}
		}
		pf =s.size()+1;
		int aux = pf-pi;
		if(aux>jm) jm = aux;
		cout<<jm<<endl;
	}
}
