#include<iostream>
#include<vector>
#include<cmath>
#define MAX 55
using namespace std;
vector<int> ady[MAX];
bool visit[MAX];
int total;

void dfs( int u ){                          
    total++;                                
    visit[ u ] = true;                   
    for( int v = 0 ; v < ady[ u ].size(); ++v ){ 
      if( !visit[ ady[ u ][ v ] ] ){         
         dfs( ady[ u ][ v ] );               
      }
    }
}
void init(){
	for(int i=0;i<MAX;i++) ady[i].clear(),visit[i]=false;
}

int main(){
	int n,m;
	while(cin>>n>>m){
		int x,y;
		init();
		for(int i=0;i<m;i++){
			cin>>x>>y;
			ady[x].push_back(y);
			ady[y].push_back(x);
		}
		long long r=1;
		for(int i=1;i<=n;i++){
			total = 0;
			if(!visit[i]){
				dfs(i);
				r*=pow(2,total-1);
			}
		}
		cout<<r<<endl;
		
	}
}
